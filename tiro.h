#ifndef TIRO_M_INCLUDED
#define TIRO_M_INCLUDED

#include <allegro.h>
#include <stdlib.h>


typedef struct tiro
{
	int x;
	int y;
	int speed;
	int ativo;
}Tiro;

Tiro* Create_Tiro(int x, int y);
void Update_Tiro(Tiro *t);
void Draw_tiro(Tiro *t, BITMAP *buffer);
void Destroy_Tiro(Tiro *t);

//----------------------------------------------

typedef struct no_tiro
{
	Tiro *t;
	struct no_tiro *prox;
}No_tiro;

typedef struct lista_tiros
{
	No_tiro *inicio;
}Lista_Tiros;

Lista_Tiros* Create_Lista_Tiros();
void Insere_Tiro(Lista_Tiros *l, int x, int y);
void Update_Lista_Tiros(Lista_Tiros *l);
void Draw_Lista_Tiros(Lista_Tiros *l, BITMAP *buffer);
void Destroy_Lista_Tiros(Lista_Tiros *l);

#include "tiro.c"

#endif