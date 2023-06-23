#ifndef LIMPAR_BUFFER_H
#define LIMPAR_BUFFER_H

#include <iostream>
#include <cstdio>
#include <cstdlib>

void limpar_buffer(void)
{
	#ifdef __WIN32__
		fflush(stdin);
	#endif
	
	#ifdef __linux__
		  fflush(stdin);
		//__fpurge(stdin); //Usar só no "C" com stdlib.h,stdio.h.....
	#endif
}

#endif
