#ifndef LIMPAR_BUFFER_H
#define LIMPAR_BUFFER_H

#include <stdio.h>
#include <stdlib.h>

void limpar_buffer(void)
{
	#ifdef __WIN32__
		fflush(stdin);
	#endif
	
	#ifdef __linux__
		  fflush(stdin);
		__fpurge(stdin);
	#endif
}

#endif
