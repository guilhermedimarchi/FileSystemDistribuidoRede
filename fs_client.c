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


void
transf_1(char *host)
{
	CLIENT *clnt;
	void  *result_1;
	dados  envia_1_arg;
	char arquivo[50];
	char buffer[1024];
	int fd;

	printf("Digite o nome do arquivo que deseja transferir\n");
	__fpurge(stdin);
	gets(arquivo);
	fd = open(arquivo, O_RDONLY);
	
	read(fd, buffer, 1024);
	
	envia_1_arg.data = buffer;
	envia_1_arg.nome = arquivo;

#ifndef	DEBUG
	clnt = clnt_create (host, TRANSF, TRANSF_1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = envia_1(&envia_1_arg, clnt);
	if (result_1 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char host[16];

	printf ("Digite o IP\n");
	scanf("%s",host);
	
	transf_1 (host);
exit (0);
}
