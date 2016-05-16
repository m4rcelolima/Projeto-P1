#include "tiro.h"

Tiro *Create_Tiro(int x, int y)
{
	Tiro *t = (Tiro*) malloc(sizeof(Tiro));

	t->x = x;
	t->y = y;
	t->speed = 2;
	t->ativo = TRUE;

	return t;
}

void Update_Tiro(Tiro *t)
{
	t->y -= t->speed;

	if(t->y < 25)
	{
		t->ativo = FALSE;
	}
}

void Draw_Tiro(Tiro *t, BITMAP *buffer)
{
	circlefill(buffer, t->x,t->y, 3, makecol(250, 230, 0));
}

void Destroy_Tiro(Tiro *t)
{
	free(t);
}
//-----------------------------------------------------------

Lista_Tiros *Create_Lista_Tiros()
{
	Lista_Tiros *l = (Lista_Tiros*) malloc(sizeof(Lista_Tiros));

	l->inicio = NULL;

	return l;
}

void Insere_Tiro(Lista_Tiros *l, int x, int y)
{
	No_tiro *novo = (No_tiro*) malloc(sizeof(No_tiro));
	novo->t = Create_Tiro(x, y);
	novo->prox = l->inicio;
	l->inicio = novo; 
}

void Update_Lista_Tiros(Lista_Tiros *l)
{
	No_tiro *aux = l->inicio;
	No_tiro *aux2 = l->inicio;

	while(aux != NULL)
	{
		//O tiro ainda esta ativo
		if(aux->t->ativo)
		{
			Update_Tiro(aux->t);
			aux2 = aux;
			aux = aux->prox;
		}
		//nao esta mais ativo
		else
		{
			if(aux == aux2)
			{
				l->inicio = l->inicio->prox;
				Destroy_Tiro(aux->t);
				free(aux);
				aux2 = aux = l->inicio;
			}
			else
			{
				aux2->prox = aux->prox;
				Destroy_Tiro(aux->t);
				free(aux);
				aux = aux2->prox;
			}
		}
	}
}

void Draw_Lista_Tiros(Lista_Tiros *l, BITMAP *buffer)
{
	No_tiro *aux = l->inicio;

	while(aux != NULL)
	{
		Draw_Tiro(aux->t, buffer);
		aux = aux->prox;
	}
}
void Destroy_Lista_Tiros(Lista_Tiros *l)
{
	No_tiro *aux;

	while(l->inicio != NULL)
	{
		aux = l->inicio;
		l->inicio = l->inicio->prox;
		Destroy_Tiro(aux->t);
		free(aux);
	}
}
