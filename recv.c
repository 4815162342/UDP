#include <stdio.h>
#include <errno.h>

struct Packet {
	int done;         // contain 0 if not done, contains 1 if done     
	int seqNo;        // The seqNo used in Stop-And-Wait
	char line[1000];  // The next line in the text file
};
