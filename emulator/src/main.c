#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>

#include "ram.h"


int main
(
	int argc,
	char **argv
)
{
	puts("Booting...");
	printf("Intializing memory... (%d kib)\n", atoi(argv[1]));
	if(atoi(argv[1])>4194000)
	{
		printf("Warning : TFRP can not use more than 4194000kib due to the limit of 32bit address. \n");
	}
	struct ram *memory=&(struct ram){.size=atoi(argv[1]), .buffer=NULL};
	ram_init(memory);
	if(errno)
	{
		printf("\nError allocating memory\nErrno : %d\n", errno);
		exit(errno);
	}
	printf("Memory initialized !\n");
	free(memory->buffer);
}
