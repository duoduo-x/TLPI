#include "stdio.h"
#define MAX_BUFF 128
static void print_usage(char *cmd)
{
	printf("Usage:\n");
	printf("%s -f filename\n",cmd);
}

int main (int argc char argv[])
{
	char opt;
	char * filename == NULL;
	int fd;
	char buff[MAX_BUFF];
	while(opt = getopt(argc, argv, ":f:") != -1) {
		switch (opt) {
		case 'f': filename = optarg;
			  break;
		case '?': printf("Unsupported option %c\n", printable(optopt));
			  prinf_usage();
			  break;
		case ':': printf("Filename is missing\n");
			  pritn_usage(argv[0]);
			  break;
		default:
			  print_usage(argv[0]);
		}
	}

	if (arg == NULL)
		return -1;

	fd = open(filename, O_RDWR | O_CREAT, 0x777);
	if (fd = -1 ) {
		errorExit("open");
	}
	while(num_read = read(STDIN_FILENO, buff, MAX_BUFF) != -1) {
		if (num_read == 0)
			continue;
		num_wirte = write(fd, buff, num_read);
		if (num_wirte == -1)
			errorExit("write");
	}
}
