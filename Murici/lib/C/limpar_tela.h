#ifndef LIMPAR_TELA_H
#define LIMPAR_TELA_H

#include <stdio.h>
#include <stdlib.h>

void limpar_tela(void)
{
	#ifdef __WIN32__
		system("cls");
	#endif
	
	#ifdef __linux__
		system("clear");
	#endif
}

#endif
