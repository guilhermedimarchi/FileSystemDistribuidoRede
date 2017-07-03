/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fs.h"
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void *
envia_1_svc(dados *argp, struct svc_req *rqstp)
{
	static char * result;
	int fd;
	
	chdir("srv");
	
	printf("Recebendo novo arquivo\n");
	
	fd = open(argp->nome, O_RDWR | O_CREAT, 0666);
	write(fd, argp->data, 1024);
		
	close(fd);
	return (void *) &result;
}
