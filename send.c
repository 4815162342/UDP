#include <stdio.h>
#include <errno.h>
#include <sys/socket.h>

struct Packet {
	int done;         // contain 0 if not done, contains 1 if done     
	int seqNo;        // The seqNo used in Stop-And-Wait
	char line[1000];  // The next line in the text file
};

int main(int argc, char * argv[]) {
	if (argc < 5) {
		printf("Please include all parameters. Usage: ./send filename hostname port# timeout.\n");
		return -1;
	}
	
	FILE *fp = fopen(argv[1], "r");
	if (fp == NULL) {
		if (errno == ENOENT)
			printf("No such file or directory by the name '%s'\n", argv[1]);
		else
			printf("Error in opening file. Errno = %d\n", errno);
		return -1;
	}
	
	int socket = socket(domain, type, protocol)
	
	
	fclose(fp);
}