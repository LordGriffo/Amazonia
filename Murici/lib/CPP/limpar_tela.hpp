#ifndef LIMPAR_TELA_H
#define LIMPAR_TELA_H

#include <iostream>
#include <cstdio>
#include <cstdlib>

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
