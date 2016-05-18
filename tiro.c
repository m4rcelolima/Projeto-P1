#include "tiro.h"


Tiro *Create_Tiro(int x, int y)
{
	Tiro *t = (Tiro*) malloc(sizeof(Tiro));
	//t->img_tiro;
	t->x = x;
	t->y = y;
	t->speed = 3;
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
	if(cont == 0)
	{
		if(t->x >= pos_x && t->x <= pos_x+22)
		{
			if(t->y <= pos_y+16 && t->y <= pos_y)
			{
				t->ativo = FALSE;
				Vcont++;
				cont++;
			}		
		}
	}
	if(cont1 == 0)
	{
		if(t->x >= pos_x1 && t->x <= pos_x1+22)
		{
			if(t->y <= pos_y1+16 && t->y <= pos_y1)
			{
				t->ativo = FALSE;
				Vcont++;
				cont1++;
			}		
		}
	}
	if(cont2 == 0)
	{
		if(t->x >= pos_x2 && t->x <= pos_x2+22)
		{
			if(t->y <= pos_y2+16 && t->y <= pos_y2)
			{
				t->ativo = FALSE;
				Vcont++;
				cont2++;
			}		
		}
	}
	if(cont3 == 0)
	{
		if(t->x >= pos_x3 && t->x <= pos_x3+22)
		{
			if(t->y <= pos_y3+16 && t->y <= pos_y3)
			{
				t->ativo = FALSE;
				Vcont++;
				cont3++;
			}		
		}
	}
	if(cont4 == 0)
	{
		if(t->x >= pos_x4 && t->x <= pos_x4+22)
		{
			if(t->y <= pos_y4+16 && t->y <= pos_y4)
			{
				t->ativo = FALSE;
				Vcont++;
				cont4++;
			}		
		}
	}
	if(cont5 == 0)
	{
		if(t->x >= pos_x5 && t->x <= pos_x5+22)
		{
			if(t->y <= pos_y5+16 && t->y <= pos_y5)
			{
				t->ativo = FALSE;
				Vcont++;
				cont5++;
			}		
		}
	}
	if(cont6 == 0)
	{
		if(t->x >= pos_x6 && t->x <= pos_x6+22)
		{
			if(t->y <= pos_y6+16 && t->y <= pos_y6)
			{
				t->ativo = FALSE;
				Vcont++;
				cont6++;
			}		
		}
	}
	if(cont7 == 0)
	{
		if(t->x >= pos_x7 && t->x <= pos_x7+22)
		{
			if(t->y <= pos_y7+16 && t->y <= pos_y7)
			{
				t->ativo = FALSE;
				Vcont++;
				cont7++;
			}		
		}
	}
	if(cont8 == 0)
	{
		if(t->x >= pos_x8 && t->x <= pos_x8+22)
		{
			if(t->y <= pos_y8+16 && t->y <= pos_y8)
			{
				t->ativo = FALSE;
				Vcont++;
				cont8++;
			}		
		}
	}
	if(cont9 == 0)
	{
		if(t->x >= pos_x9 && t->x <= pos_x9+22)
		{
			if(t->y <= pos_y9+16 && t->y <= pos_y9)
			{
				t->ativo = FALSE;
				Vcont++;
				cont9++;
			}		
		}
	}
	if(cont10 == 0)
	{
		if(t->x >= pos_x10 && t->x <= pos_x10+22)
		{
			if(t->y <= pos_y10+16 && t->y <= pos_y10)
			{
				t->ativo = FALSE;
				Vcont++;
				cont10++;
			}		
		}
	}
	if(cont11 == 0)
	{
		if(t->x >= pos_x11 && t->x <= pos_x11+22)
		{
			if(t->y <= pos_y11+16 && t->y <= pos_y11)
			{
				t->ativo = FALSE;
				Vcont++;
				cont11++;
			}		
		}
	}
	if(cont12 == 0)
	{
		if(t->x >= pos_x12 && t->x <= pos_x12+22)
		{
			if(t->y <= pos_y12+16 && t->y <= pos_y12)
			{
				t->ativo = FALSE;
				Vcont++;
				cont12++;
			}		
		}
	}
	if(cont13 == 0)
	{
		if(t->x >= pos_x13 && t->x <= pos_x13+22)
		{
			if(t->y <= pos_y13+16 && t->y <= pos_y13)
			{
				t->ativo = FALSE;
				Vcont++;
				cont13++;
			}		
		}
	}
	if(cont14 == 0)
	{
		if(t->x >= pos_x14 && t->x <= pos_x14+22)
		{
			if(t->y <= pos_y14+16 && t->y <= pos_y14)
			{
				t->ativo = FALSE;
				Vcont++;
				cont14++;
			}		
		}
	}
	if(cont15 == 0)
	{
		if(t->x >= pos_x15 && t->x <= pos_x15+22)
		{
			if(t->y <= pos_y15+16 && t->y <= pos_y15)
			{
				t->ativo = FALSE;
				Vcont++;
				cont15++;
			}		
		}
	}
	if(cont16 == 0)
	{
		if(t->x >= pos_x16 && t->x <= pos_x16+22)
		{
			if(t->y <= pos_y16+16 && t->y <= pos_y16)
			{
				t->ativo = FALSE;
				Vcont++;
				cont16++;
			}		
		}
	}
	if(cont17 == 0)
	{
		if(t->x >= pos_x17 && t->x <= pos_x17+22)
		{
			if(t->y <= pos_y17+16 && t->y <= pos_y17)
			{
				t->ativo = FALSE;
				Vcont++;
				cont17++;
			}		
		}
	}
	if(cont18 == 0)
	{
		if(t->x >= pos_x18 && t->x <= pos_x18+22)
		{
			if(t->y <= pos_y18+16 && t->y <= pos_y18)
			{
				t->ativo = FALSE;
				Vcont++;
				cont18++;
			}		
		}
	}
	if(cont19 == 0)
	{
		if(t->x >= pos_x19 && t->x <= pos_x19+22)
		{
			if(t->y <= pos_y19+16 && t->y <= pos_y19)
			{
				t->ativo = FALSE;
				Vcont++;
				cont19++;
			}		
		}
	}
	if(cont20 == 0)
	{
		if(t->x >= pos_x20 && t->x <= pos_x20+22)
		{
			if(t->y <= pos_y20+16 && t->y <= pos_y20)
			{
				t->ativo = FALSE;
				Vcont++;
				cont20++;
			}		
		}
	}
	if(cont21 == 0)
	{
		if(t->x >= pos_x21 && t->x <= pos_x21+22)
		{
			if(t->y <= pos_y21+16 && t->y <= pos_y21)
			{
				t->ativo = FALSE;
				Vcont++;
				cont21++;
			}		
		}
	}
	if(cont22 == 0)
	{
		if(t->x >= pos_x22 && t->x <= pos_x22+22)
		{
			if(t->y <= pos_y22+16 && t->y <= pos_y22)
			{
				t->ativo = FALSE;
				Vcont++;
				cont22++;
			}		
		}
	}
	if(cont23 == 0)
	{
		if(t->x >= pos_x23 && t->x <= pos_x23+22)
		{
			if(t->y <= pos_y23+16 && t->y <= pos_y23)
			{
				t->ativo = FALSE;
				Vcont++;
				cont23++;
			}		
		}
	}
	if(cont24 == 0)
	{
		if(t->x >= pos_x24 && t->x <= pos_x24+22)
		{
			if(t->y <= pos_y24+16 && t->y <= pos_y24)
			{
				t->ativo = FALSE;
				Vcont++;
				cont24++;
			}		
		}
	}
	if(cont25 == 0)
	{
		if(t->x >= pos_x25 && t->x <= pos_x25+22)
		{
			if(t->y <= pos_y25+16 && t->y <= pos_y25)
			{
				t->ativo = FALSE;
				Vcont++;
				cont25++;
			}		
		}
	}
	if(cont26 == 0)
	{
		if(t->x >= pos_x26 && t->x <= pos_x26+22)
		{
			if(t->y <= pos_y26+16 && t->y <= pos_y26)
			{
				t->ativo = FALSE;
				Vcont++;
				cont26++;
			}		
		}
	}
	if(cont27 == 0)
	{
		if(t->x >= pos_x27 && t->x <= pos_x27+22)
		{
			if(t->y <= pos_y27+16 && t->y <= pos_y27)
			{
				t->ativo = FALSE;
				Vcont++;
				cont27++;
			}		
		}
	}
	if(cont28 == 0)
	{
		if(t->x >= pos_x28 && t->x <= pos_x28+22)
		{
			if(t->y <= pos_y28+16 && t->y <= pos_y28)
			{
				t->ativo = FALSE;
				Vcont++;
				cont28++;
			}		
		}
	}
	if(cont29 == 0)
	{
		if(t->x >= pos_x29 && t->x <= pos_x29+22)
		{
			if(t->y <= pos_y29+16 && t->y <= pos_y29)
			{
				t->ativo = FALSE;
				Vcont++;
				cont29++;
			}		
		}
	}
	if(cont30 == 0)
	{
		if(t->x >= pos_x30 && t->x <= pos_x30+22)
		{
			if(t->y <= pos_y30+16 && t->y <= pos_y30)
			{
				t->ativo = FALSE;
				Vcont++;
				cont30++;
			}		
		}
	}
	if(cont31 == 0)
	{
		if(t->x >= pos_x31 && t->x <= pos_x31+22)
		{
			if(t->y <= pos_y31+16 && t->y <= pos_y31)
			{
				t->ativo = FALSE;
				Vcont++;
				cont31++;
			}		
		}
	}
	if(cont32 == 0)
	{
		if(t->x >= pos_x32 && t->x <= pos_x32+22)
		{
			if(t->y <= pos_y32+16 && t->y <= pos_y32)
			{
				t->ativo = FALSE;
				Vcont++;
				cont32++;
			}		
		}
	}
	if(cont33 == 0)
	{
		if(t->x >= pos_x33 && t->x <= pos_x33+22)
		{
			if(t->y <= pos_y33+16 && t->y <= pos_y33)
			{
				t->ativo = FALSE;
				Vcont++;
				cont33++;
			}		
		}
	}
	if(cont34 == 0)
	{
		if(t->x >= pos_x34 && t->x <= pos_x34+22)
		{
			if(t->y <= pos_y34+16 && t->y <= pos_y34)
			{
				t->ativo = FALSE;
				Vcont++;
				cont34++;
			}		
		}
	}
	if(cont35 == 0)
	{
		if(t->x >= pos_x35 && t->x <= pos_x35+22)
		{
			if(t->y <= pos_y35+16 && t->y <= pos_y35)
			{
				t->ativo = FALSE;
				Vcont++;
				cont35++;
			}		
		}
	}
	if(cont36 == 0)
	{
		if(t->x >= pos_x36 && t->x <= pos_x36+22)
		{
			if(t->y <= pos_y36+16 && t->y <= pos_y36)
			{
				t->ativo = FALSE;
				Vcont++;
				cont36++;
			}		
		}
	}
	if(cont37 == 0)
	{
		if(t->x >= pos_x37 && t->x <= pos_x37+22)
		{
			if(t->y <= pos_y37+16 && t->y <= pos_y37)
			{
				t->ativo = FALSE;
				Vcont++;
				cont37++;
			}		
		}
	}
	if(cont38 == 0)
	{
		if(t->x >= pos_x38 && t->x <= pos_x38+22)
		{
			if(t->y <= pos_y38+16 && t->y <= pos_y38)
			{
				t->ativo = FALSE;
				Vcont++;
				cont38++;
			}		
		}
	}
	if(cont39 == 0)
	{
		if(t->x >= pos_x39 && t->x <= pos_x39+22)
		{
			if(t->y <= pos_y39+16 && t->y <= pos_y39)
			{
				t->ativo = FALSE;
				Vcont++;
				cont39++;
			}		
		}
	}
	if(cont40 == 0)
	{
		if(t->x >= pos_x40 && t->x <= pos_x40+22)
		{
			if(t->y <= pos_y40+16 && t->y <= pos_y40)
			{
				t->ativo = FALSE;
				Vcont++;
				cont40++;
			}		
		}
	}
	if(cont41 == 0)
	{
		if(t->x >= pos_x41 && t->x <= pos_x41+22)
		{
			if(t->y <= pos_y41+16 && t->y <= pos_y41)
			{
				t->ativo = FALSE;
				Vcont++;
				cont41++;
			}		
		}
	}
	if(cont42 == 0)
	{
		if(t->x >= pos_x42 && t->x <= pos_x42+22)
		{
			if(t->y <= pos_y42+16 && t->y <= pos_y42)
			{
				t->ativo = FALSE;
				Vcont++;
				cont42++;
			}		
		}
	}
	if(cont43 == 0)
	{
		if(t->x >= pos_x43 && t->x <= pos_x43+22)
		{
			if(t->y <= pos_y43+16 && t->y <= pos_y43)
			{
				t->ativo = FALSE;
				Vcont++;
				cont43++;
			}		
		}
	}
	if(cont44 == 0)
	{
		if(t->x >= pos_x44 && t->x <= pos_x44+22)
		{
			if(t->y <= pos_y44+16 && t->y <= pos_y44)
			{
				t->ativo = FALSE;
				Vcont++;
				cont44++;
			}		
		}
	}
	if(cont45 == 0)
	{
		if(t->x >= pos_x45 && t->x <= pos_x45+22)
		{
			if(t->y <= pos_y45+16 && t->y <= pos_y45)
			{
				t->ativo = FALSE;
				Vcont++;
				cont45++;
			}		
		}
	}
	if(cont46 == 0)
	{
		if(t->x >= pos_x46 && t->x <= pos_x46+22)
		{
			if(t->y <= pos_y46+16 && t->y <= pos_y46)
			{
				t->ativo = FALSE;
				Vcont++;
				cont46++;
			}		
		}
	}
	if(cont47 == 0)
	{
		if(t->x >= pos_x47 && t->x <= pos_x47+22)
		{
			if(t->y <= pos_y47+16 && t->y <= pos_y47)
			{
				t->ativo = FALSE;
				Vcont++;
				cont47++;
			}		
		}
	}
	if(cont48 == 0)
	{
		if(t->x >= pos_x48 && t->x <= pos_x48+22)
		{
			if(t->y <= pos_y48+16 && t->y <= pos_y48)
			{
				t->ativo = FALSE;
				Vcont++;
				cont48++;
			}		
		}
	}
	if(cont49 == 0)
	{
		if(t->x >= pos_x49 && t->x <= pos_x49+22)
		{
			if(t->y <= pos_y49+16 && t->y <= pos_y49)
			{
				t->ativo = FALSE;
				Vcont++;
				cont49++;
			}		
		}
	}
	if(cont50 == 0)
	{
		if(t->x >= pos_x50 && t->x <= pos_x50+22)
		{
			if(t->y <= pos_y50+16 && t->y <= pos_y50)
			{
				t->ativo = FALSE;
				Vcont++;
				cont50++;
			}		
		}
	}
	if(cont51 == 0)
	{
		if(t->x >= pos_x51 && t->x <= pos_x51+22)
		{
			if(t->y <= pos_y51+16 && t->y <= pos_y51)
			{
				t->ativo = FALSE;
				Vcont++;
				cont51++;
			}		
		}
	}
	if(cont52 == 0)
	{
		if(t->x >= pos_x52 && t->x <= pos_x52+22)
		{
			if(t->y <= pos_y52+16 && t->y <= pos_y52)
			{
				t->ativo = FALSE;
				Vcont++;
				cont52++;
			}		
		}
	}
	if(cont53 == 0)
	{
		if(t->x >= pos_x53 && t->x <= pos_x53+22)
		{
			if(t->y <= pos_y53+16 && t->y <= pos_y53)
			{
				t->ativo = FALSE;
				Vcont++;
				cont53++;
			}		
		}
	}
}

void Draw_Tiro(Tiro *t, BITMAP *buffer)
{
	BITMAP *img_tiro = load_bitmap("img/tiro_nave.bmp", NULL);
	draw_sprite(buffer, img_tiro, t->x, t->y);
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
