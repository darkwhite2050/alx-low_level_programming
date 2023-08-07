#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_io_status(int status, int fd, const char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int source, destination, bytes_read = 1024, bytes_written, close_source, close_destination;
	unsigned int file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3) {
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	check_io_status(source, -1, argv[1], 'O');

	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_mode);
	check_io_status(destination, -1, argv[2], 'W');

	while (bytes_read == 1024) {
		bytes_read = read(source, buffer, sizeof(buffer));
		if (bytes_read == -1) {
			check_io_status(-1, -1, argv[1], 'O');
		}

		bytes_written = write(destination, buffer, bytes_read);
		if (bytes_written == -1) {
			check_io_status(-1, -1, argv[2], 'W');
		}
	}

	close_source = close(source);
	check_io_status(close_source, source, NULL, 'C');

	close_destination = close(destination);
	check_io_status(close_destination, destination, NULL, 'C');

	return 0;
}

/**
 * check_io_status - checks if a file can be opened or closed
 * @status: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_io_status(int status, int fd, const char *filename, char mode)
{
	if (mode == 'C' && status == -1) {
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
		exit(100);
	} else if (mode == 'O' && status == -1) {
		fprintf(stderr, "Error: Can't read from file %s\n", filename);
		exit(98);
	} else if (mode == 'W' && status == -1) {
		fprintf(stderr, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
