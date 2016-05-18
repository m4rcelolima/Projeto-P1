#include <allegro.h>
#include "tiro.h"
#define queda 30

volatile int ticks;
void tick_couter()
{
	ticks++;
}
END_OF_FUNCTION(tick_couter);

volatile int milisegundos;
void msec_couter()
{ 
	milisegundos++;
}
END_OF_FUNCTION(msec_couter);

volatile int pontuacao;
void decrementa_pontuacao()
{ 
	if(Vcont != 54 && pontuacao > 0)
	{
		pontuacao--;
	}
}
END_OF_FUNCTION(decrementa_pontuacao);

int main()
{
	allegro_init();
	install_timer();
	install_keyboard();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
	set_window_title("Space Invaders - Projeto P1");

	ticks = 0;
	LOCK_FUNCTION(tick_couter);
	LOCK_VARIABLE(ticks);
	install_int_ex(tick_couter, BPS_TO_TIMER(60));//frames por seg

	milisegundos = 0;
	LOCK_FUNCTION(msec_couter);
	LOCK_VARIABLE(milisegundos);
	install_int_ex(msec_couter, MSEC_TO_TIMER(2));

	pontuacao = 60;
	LOCK_FUNCTION(decrementa_pontuacao);
	LOCK_VARIABLE(pontuacao);
	install_int_ex(decrementa_pontuacao, MSEC_TO_TIMER(1000));


	//BITMAPS
	BITMAP *buffer = create_bitmap(SCREEN_W, SCREEN_H);

	BITMAP *fundo = load_bitmap("img/fundo3.bmp", NULL);
	BITMAP *moldura = load_bitmap("img/moldura.bmp", NULL);
	BITMAP *logo = load_bitmap("img/logo.bmp", NULL);
	BITMAP *nave = load_bitmap("img/nave.bmp", NULL);
	BITMAP *vitoria = load_bitmap("img/vitoria.bmp", NULL);
	BITMAP *perdeu = load_bitmap("img/perdeu.bmp", NULL);

	BITMAP *pontos[2];
	pontos[0] = load_bitmap("img/pontos1.bmp", NULL);
	pontos[1] = load_bitmap("img/pontos2.bmp", NULL);

	BITMAP *invasor1_1[2];
	invasor1_1[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_1[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_2[2];
	invasor1_2[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_2[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_3[2];
	invasor1_3[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_3[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_4[2];
	invasor1_4[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_4[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_5[2];
	invasor1_5[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_5[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_6[2];
	invasor1_6[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_6[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_7[2];
	invasor1_7[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_7[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_8[2];
	invasor1_8[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_8[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_9[2];
	invasor1_9[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_9[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_10[2];
	invasor1_10[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_10[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_11[2];
	invasor1_11[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_11[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_12[2];
	invasor1_12[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_12[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_13[2];
	invasor1_13[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_13[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_14[2];
	invasor1_14[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_14[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_15[2];
	invasor1_15[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_15[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_16[2];
	invasor1_16[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_16[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_17[2];
	invasor1_17[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_17[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor1_18[2];
	invasor1_18[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1_18[1] = load_bitmap("img/invasor1_2.bmp", NULL);

//========================================================================

	BITMAP *invasor2_1[2];
	invasor2_1[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_1[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_2[2];
	invasor2_2[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_2[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_3[2];
	invasor2_3[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_3[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_4[2];
	invasor2_4[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_4[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_5[2];
	invasor2_5[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_5[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_6[2];
	invasor2_6[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_6[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_7[2];
	invasor2_7[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_7[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_8[2];
	invasor2_8[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_8[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_9[2];
	invasor2_9[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_9[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_10[2];
	invasor2_10[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_10[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_11[2];
	invasor2_11[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_11[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_12[2];
	invasor2_12[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_12[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_13[2];
	invasor2_13[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_13[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_14[2];
	invasor2_14[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_14[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_15[2];
	invasor2_15[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_15[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_16[2];
	invasor2_16[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_16[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_17[2];
	invasor2_17[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_17[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor2_18[2];
	invasor2_18[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2_18[1] = load_bitmap("img/invasor2_2.bmp", NULL);

//========================================================================

	BITMAP *invasor3_1[2];
	invasor3_1[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_1[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_2[2];
	invasor3_2[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_2[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_3[2];
	invasor3_3[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_3[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_4[2];
	invasor3_4[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_4[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_5[2];
	invasor3_5[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_5[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_6[2];
	invasor3_6[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_6[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_7[2];
	invasor3_7[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_7[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_8[2];
	invasor3_8[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_8[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_9[2];
	invasor3_9[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_9[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_10[2];
	invasor3_10[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_10[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_11[2];
	invasor3_11[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_11[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_12[2];
	invasor3_12[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_12[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_13[2];
	invasor3_13[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_13[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_14[2];
	invasor3_14[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_14[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_15[2];
	invasor3_15[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_15[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_16[2];
	invasor3_16[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_16[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_17[2];
	invasor3_17[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_17[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	BITMAP *invasor3_18[2];
	invasor3_18[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3_18[1] = load_bitmap("img/invasor3_2.bmp", NULL);


//========================================================================
	//VARIAVEL

	int contaux = 0;//CONTADOR PARA MOVIMENTA UMA FILA POR VEZ

	int num_frames = 2, frame_atual = 0, tempo_trocar = 200;
	int nave_x = 201, nave_y = 550;
	int prev_key_space;
	Lista_Tiros *tiros_nave = Create_Lista_Tiros();
	Tiro tiro;

	while(!key[KEY_ESC])
	{
		while(ticks > 0 )
		{
			//ENTRADA

			if(key[KEY_RIGHT])
			{
				nave_x += 3;
			}
			else if(key[KEY_LEFT])
			{
				nave_x -= 3;
			}

			prev_key_space = key[KEY_SPACE];
			poll_keyboard();


			//ATIRAR
			
			if(key[KEY_SPACE] && !prev_key_space)
			{
				Insere_Tiro(tiros_nave, nave_x+9, nave_y);
			}


			//ATUALIZAÇÂO

			Update_Lista_Tiros(tiros_nave);

			if(nave_x >= 757)
			{
				nave_x = 757;
			}
			else if(nave_x <= 202)
			{
				nave_x = 202;
			}

			frame_atual = (milisegundos / tempo_trocar) % num_frames;


			if(contaux == 18)
			{
				pos_x18 = pos_x18 + vel_x18;// MOVIMENTAÇÃO DOS INVASORES
				pos_x19 = pos_x19 + vel_x19;
				pos_x20 = pos_x20 + vel_x20;
				pos_x21 = pos_x21 + vel_x21;
				pos_x22 = pos_x22 + vel_x22;
				pos_x23 = pos_x23 + vel_x23;
				pos_x24 = pos_x24 + vel_x24;
				pos_x25 = pos_x25 + vel_x25;
				pos_x26 = pos_x26 + vel_x26;
				if(pos_x26 >= SCREEN_W - 40 || pos_x24 >= SCREEN_W - 40 || pos_x23 >= SCREEN_W - 40 || pos_x22 >= SCREEN_W - 40
				|| pos_x21 >= SCREEN_W - 40 || pos_x20 >= SCREEN_W - 40 || pos_x19 >= SCREEN_W - 40 || pos_x18 >= SCREEN_W - 40
				|| pos_x25 >= SCREEN_W - 40)
				{
					pos_y26 += queda;					
					vel_x26 *= -1;
					pos_x26 += vel_x26;
					pos_y25 += queda;
					vel_x25 *= -1;
					pos_x25 += vel_x25;
					pos_y24 += queda;
					vel_x24 *= -1;
					pos_x24 += vel_x24;
					pos_y23 += queda;					
					vel_x23 *= -1;
					pos_x23 += vel_x23;
					pos_y22 += queda;					
					vel_x22 *= -1;
					pos_x22 += vel_x22;
					pos_y21 += queda;					
					vel_x21 *= -1;
					pos_x21 += vel_x21;
					pos_y20 += queda;					
					vel_x20 *= -1;
					pos_x20 += vel_x20;
					pos_y19 += queda;					
					vel_x19 *= -1;
					pos_x19 += vel_x19;
					pos_y18 += queda;					
					vel_x18 *= -1;
					pos_x18 += vel_x18;						
				}
				if(pos_x26 <= 200 || pos_x25 <= 200 || pos_x24 <= 200 || pos_x23 <= 200 || pos_x22 <= 200 || pos_x21 <= 200 || pos_x20 <= 200
				|| pos_x19 <= 200 || pos_x18 <= 200)
				{
					pos_y26 += queda;					
					vel_x26 *= -1;
					pos_x26 += vel_x26;
					pos_y25 += queda;
					vel_x25 *= -1;
					pos_x25 += vel_x25;
					pos_y24 += queda;
					vel_x24 *= -1;
					pos_x24 += vel_x24;
					pos_y23 += queda;					
					vel_x23 *= -1;
					pos_x23 += vel_x23;
					pos_y22 += queda;					
					vel_x22 *= -1;
					pos_x22 += vel_x22;
					pos_y21 += queda;					
					vel_x21 *= -1;
					pos_x21 += vel_x21;
					pos_y20 += queda;					
					vel_x20 *= -1;
					pos_x20 += vel_x20;
					pos_y19 += queda;					
					vel_x19 *= -1;
					pos_x19 += vel_x19;
					pos_y18 += queda;					
					vel_x18 *= -1;
					pos_x18 += vel_x18;
				}
			}
			
			else if(contaux == 24)
			{
				pos_x17 = pos_x17 + vel_x17;// MOVIMENTAÇÃO DOS INVASORES
				pos_x16 = pos_x16 + vel_x16;
				pos_x15 = pos_x15 + vel_x15;
				pos_x14 = pos_x14 + vel_x14;
				pos_x13 = pos_x13 + vel_x13;
				pos_x12 = pos_x12 + vel_x12;
				pos_x11 = pos_x11 + vel_x11;
				pos_x10 = pos_x10 + vel_x10;
				pos_x9 = pos_x9 + vel_x9;
				if(pos_x17 >= SCREEN_W - 40 || pos_x16 >= SCREEN_W - 40 || pos_x15 >= SCREEN_W - 40 || pos_x14 >= SCREEN_W - 40
				|| pos_x13 >= SCREEN_W - 40 || pos_x12 >= SCREEN_W - 40 || pos_x11 >= SCREEN_W - 40 || pos_x10 >= SCREEN_W - 40
				|| pos_x9 >= SCREEN_W - 40)
				{
					pos_y17 += queda;					
					vel_x17 *= -1;
					pos_x17 += vel_x17;
					pos_y16 += queda;
					vel_x16 *= -1;
					pos_x16 += vel_x16;
					pos_y15 += queda;
					vel_x15 *= -1;
					pos_x15 += vel_x15;
					pos_y14 += queda;					
					vel_x14 *= -1;
					pos_x14 += vel_x14;
					pos_y13 += queda;					
					vel_x13 *= -1;
					pos_x13 += vel_x13;
					pos_y12 += queda;					
					vel_x12 *= -1;
					pos_x12 += vel_x12;
					pos_y11 += queda;					
					vel_x11 *= -1;
					pos_x11 += vel_x11;
					pos_y10 += queda;					
					vel_x10 *= -1;
					pos_x10 += vel_x10;
					pos_y9 += queda;					
					vel_x9 *= -1;
					pos_x9 += vel_x9;
				}
				
				if(pos_x17 <= 200 || pos_x16 <= 200 || pos_x15 <= 200 || pos_x14 <= 200 || pos_x13 <= 200 || pos_x12 <= 200 || pos_x11 <= 200
				|| pos_x10 <= 200 || pos_x9 <= 200)
				{
					pos_y17 += queda;					
					vel_x17 *= -1;
					pos_x17 += vel_x17;
					pos_y16 += queda;
					vel_x16 *= -1;
					pos_x16 += vel_x16;
					pos_y15 += queda;
					vel_x15 *= -1;
					pos_x15 += vel_x15;
					pos_y14 += queda;					
					vel_x14 *= -1;
					pos_x14 += vel_x14;
					pos_y13 += queda;					
					vel_x13 *= -1;
					pos_x13 += vel_x13;
					pos_y12 += queda;					
					vel_x12 *= -1;
					pos_x12 += vel_x12;
					pos_y11 += queda;					
					vel_x11 *= -1;
					pos_x11 += vel_x11;
					pos_y10 += queda;					
					vel_x10 *= -1;
					pos_x10 += vel_x10;
					pos_y9 += queda;					
					vel_x9 *= -1;
					pos_x9 += vel_x9;				
				}
			}		
			else if(contaux == 30)
			{
				pos_x = pos_x + vel_x;// MOVIMENTAÇÃO DOS INVASORES
				pos_x1 = pos_x1 + vel_x1;
				pos_x2 = pos_x2 + vel_x2;
				pos_x3 = pos_x3 + vel_x3;
				pos_x4 = pos_x4 + vel_x4;
				pos_x5 = pos_x5 + vel_x5;
				pos_x6 = pos_x6 + vel_x6;
				pos_x7 = pos_x7 + vel_x7;
				pos_x8 = pos_x8 + vel_x8;
				if(pos_x6 >= SCREEN_W - 40 || pos_x5 >= SCREEN_W - 40 || pos_x4 >= SCREEN_W - 40 || pos_x7 >= SCREEN_W - 40
				|| pos_x3 >= SCREEN_W - 40 || pos_x2 >= SCREEN_W - 40 || pos_x1 >= SCREEN_W - 40 || pos_x >= SCREEN_W - 40
				|| pos_x8 >= SCREEN_W - 40)
				{
					pos_y += queda;					
					vel_x *= -1;
					pos_x += vel_x;
					pos_y1 += queda;
					vel_x1 *= -1;
					pos_x1 += vel_x1;
					pos_y2 += queda;
					vel_x2 *= -1;
					pos_x2 += vel_x2;
					pos_y3 += queda;
					vel_x3 *= -1;
					pos_x3 += vel_x3;
					pos_y4 += queda;
					vel_x4 *= -1;
					pos_x4 += vel_x4;
					pos_y5 += queda;
					vel_x5 *= -1;
					pos_x5 += vel_x5;
					pos_y6 += queda;
					vel_x6 *= -1;
					pos_x6 += vel_x6;
					pos_y7 += queda;
					vel_x7 *= -1;
					pos_x7 += vel_x7;
					pos_y8 += queda;
					vel_x8 *= -1;
					pos_x8 += vel_x8;
				}
				
				if(pos_x <= 200 || pos_x1 <= 200 || pos_x2 <= 200 || pos_x3 <= 200 || pos_x4 <= 200 || pos_x5 <= 200 || pos_x6 <= 200
				|| pos_x7 <= 200 || pos_x8 <= 200)
				{
					pos_y += queda;					
					vel_x *= -1;
					pos_x += vel_x;
					pos_y1 += queda;
					vel_x1 *= -1;
					pos_x1 += vel_x1;
					pos_y2 += queda;
					vel_x2 *= -1;
					pos_x2 += vel_x2;
					pos_y3 += queda;
					vel_x3 *= -1;
					pos_x3 += vel_x3;
					pos_y4 += queda;
					vel_x4 *= -1;
					pos_x4 += vel_x4;
					pos_y5 += queda;
					vel_x5 *= -1;
					pos_x5 += vel_x5;
					pos_y6 += queda;
					vel_x6 *= -1;
					pos_x6 += vel_x6;
					pos_y7 += queda;
					vel_x7 *= -1;
					pos_x7 += vel_x7;
					pos_y8 += queda;
					vel_x8 *= -1;
					pos_x8 += vel_x8;				
				}
			}
			if(contaux == 12)
			{
				pos_x27 = pos_x27 + vel_x27;// MOVIMENTAÇÃO DOS INVASORES
				pos_x28 = pos_x28 + vel_x28;
				pos_x29 = pos_x29 + vel_x29;
				pos_x30 = pos_x30 + vel_x30;
				pos_x31 = pos_x31 + vel_x31;
				pos_x32 = pos_x32 + vel_x32;
				pos_x33 = pos_x33 + vel_x33;
				pos_x34 = pos_x34 + vel_x34;
				pos_x35 = pos_x35 + vel_x35;
				if(pos_x27 >= SCREEN_W - 40 || pos_x28 >= SCREEN_W - 40 || pos_x29 >= SCREEN_W - 40 || pos_x30 >= SCREEN_W - 40
				|| pos_x31 >= SCREEN_W - 40 || pos_x32 >= SCREEN_W - 40 || pos_x33 >= SCREEN_W - 40 || pos_x34 >= SCREEN_W - 40
				|| pos_x35 >= SCREEN_W - 40)
				{
					pos_y27 += queda;					
					vel_x27 *= -1;
					pos_x27 += vel_x27;
					pos_y28 += queda;
					vel_x28 *= -1;
					pos_x28 += vel_x28;
					pos_y29 += queda;
					vel_x29 *= -1;
					pos_x29 += vel_x29;
					pos_y30 += queda;					
					vel_x30 *= -1;
					pos_x30 += vel_x30;
					pos_y31 += queda;					
					vel_x31 *= -1;
					pos_x31 += vel_x31;
					pos_y32 += queda;					
					vel_x32 *= -1;
					pos_x32 += vel_x32;
					pos_y33 += queda;					
					vel_x33 *= -1;
					pos_x33 += vel_x33;
					pos_y34 += queda;					
					vel_x34 *= -1;
					pos_x34 += vel_x34;
					pos_y35 += queda;					
					vel_x35 *= -1;
					pos_x35 += vel_x35;						
				}
				if(pos_x27 <= 200 || pos_x28 <= 200 || pos_x29 <= 200 || pos_x30 <= 200 || pos_x31 <= 200 || pos_x32 <= 200 || pos_x33 <= 200
				|| pos_x34 <= 200 || pos_x35 <= 200)
				{
					pos_y27 += queda;					
					vel_x27 *= -1;
					pos_x27 += vel_x27;
					pos_y28 += queda;
					vel_x28 *= -1;
					pos_x28 += vel_x28;
					pos_y29 += queda;
					vel_x29 *= -1;
					pos_x29 += vel_x29;
					pos_y30 += queda;					
					vel_x30 *= -1;
					pos_x30 += vel_x30;
					pos_y31 += queda;					
					vel_x31 *= -1;
					pos_x31 += vel_x31;
					pos_y32 += queda;					
					vel_x32 *= -1;
					pos_x32 += vel_x32;
					pos_y33 += queda;					
					vel_x33 *= -1;
					pos_x33 += vel_x33;
					pos_y34 += queda;					
					vel_x34 *= -1;
					pos_x34 += vel_x34;
					pos_y35 += queda;					
					vel_x35 *= -1;
					pos_x35 += vel_x35;
				}
			}
			
			else if(contaux == 6)
			{
				pos_x36 = pos_x36 + vel_x36;// MOVIMENTAÇÃO DOS INVASORES
				pos_x37 = pos_x37 + vel_x37;
				pos_x38 = pos_x38 + vel_x38;
				pos_x39 = pos_x39 + vel_x39;
				pos_x40 = pos_x40 + vel_x40;
				pos_x41 = pos_x41 + vel_x41;
				pos_x42 = pos_x42 + vel_x42;
				pos_x43 = pos_x43 + vel_x43;
				pos_x44 = pos_x44 + vel_x44;
				if(pos_x36 >= SCREEN_W - 40 || pos_x37 >= SCREEN_W - 40 || pos_x38 >= SCREEN_W - 40 || pos_x39 >= SCREEN_W - 40
				|| pos_x40 >= SCREEN_W - 40 || pos_x41 >= SCREEN_W - 40 || pos_x42 >= SCREEN_W - 40 || pos_x43 >= SCREEN_W - 40
				|| pos_x44 >= SCREEN_W - 40)
				{
					pos_y36 += queda;					
					vel_x36 *= -1;
					pos_x36 += vel_x36;
					pos_y37 += queda;
					vel_x37 *= -1;
					pos_x37 += vel_x37;
					pos_y38 += queda;
					vel_x38 *= -1;
					pos_x38 += vel_x38;
					pos_y39 += queda;					
					vel_x39 *= -1;
					pos_x39 += vel_x39;
					pos_y40 += queda;					
					vel_x40 *= -1;
					pos_x40 += vel_x40;
					pos_y41 += queda;					
					vel_x41 *= -1;
					pos_x41 += vel_x41;
					pos_y42 += queda;					
					vel_x42 *= -1;
					pos_x42 += vel_x42;
					pos_y43 += queda;					
					vel_x43 *= -1;
					pos_x43 += vel_x43;
					pos_y44 += queda;					
					vel_x44 *= -1;
					pos_x44 += vel_x44;
				}
				
				if(pos_x36 <= 200 || pos_x37 <= 200 || pos_x38 <= 200 || pos_x39 <= 200 || pos_x40 <= 200 || pos_x41 <= 200 || pos_x42 <= 200
				|| pos_x43 <= 200 || pos_x44 <= 200)
				{
					pos_y36 += queda;					
					vel_x36 *= -1;
					pos_x36 += vel_x36;
					pos_y37 += queda;
					vel_x37 *= -1;
					pos_x37 += vel_x37;
					pos_y38 += queda;
					vel_x38 *= -1;
					pos_x38 += vel_x38;
					pos_y39 += queda;					
					vel_x39 *= -1;
					pos_x39 += vel_x39;
					pos_y40 += queda;					
					vel_x40 *= -1;
					pos_x40 += vel_x40;
					pos_y41 += queda;					
					vel_x41 *= -1;
					pos_x41 += vel_x41;
					pos_y42 += queda;					
					vel_x42 *= -1;
					pos_x42 += vel_x42;
					pos_y43 += queda;					
					vel_x43 *= -1;
					pos_x43 += vel_x43;
					pos_y44 += queda;					
					vel_x44 *= -1;
					pos_x44 += vel_x44;				
				}
			}		
			else if(contaux == 0)
			{
				pos_x45 = pos_x45 + vel_x45;// MOVIMENTAÇÃO DOS INVASORES
				pos_x46 = pos_x46 + vel_x46;
				pos_x47 = pos_x47 + vel_x47;
				pos_x48 = pos_x48 + vel_x48;
				pos_x49 = pos_x49 + vel_x49;
				pos_x50 = pos_x50 + vel_x50;
				pos_x51 = pos_x51 + vel_x51;
				pos_x52 = pos_x52 + vel_x52;
				pos_x53 = pos_x53+ vel_x53;
				if(pos_x51 >= SCREEN_W - 40 || pos_x50 >= SCREEN_W - 40 || pos_x49 >= SCREEN_W - 40 || pos_x52 >= SCREEN_W - 40
				|| pos_x48 >= SCREEN_W - 40 || pos_x47 >= SCREEN_W - 40 || pos_x46 >= SCREEN_W - 40 || pos_x45 >= SCREEN_W - 40
				|| pos_x53 >= SCREEN_W - 40)
				{
					pos_y45 += queda;					
					vel_x45 *= -1;
					pos_x45 += vel_x45;
					pos_y46 += queda;
					vel_x46 *= -1;
					pos_x46 += vel_x46;
					pos_y47 += queda;
					vel_x47 *= -1;
					pos_x47 += vel_x47;
					pos_y48 += queda;
					vel_x48 *= -1;
					pos_x48 += vel_x48;
					pos_y49 += queda;
					vel_x49 *= -1;
					pos_x49 += vel_x49;
					pos_y50 += queda;
					vel_x50 *= -1;
					pos_x50 += vel_x50;
					pos_y51 += queda;
					vel_x51 *= -1;
					pos_x51 += vel_x51;
					pos_y52 += queda;
					vel_x52 *= -1;
					pos_x52 += vel_x52;
					pos_y53 += queda;
					vel_x53 *= -1;
					pos_x53 += vel_x53;
				}
				
				if(pos_x45 <= 200 || pos_x46 <= 200 || pos_x47 <= 200 || pos_x48 <= 200 || pos_x49 <= 200 || pos_x50 <= 200 || pos_x51 <= 200
				|| pos_x52 <= 200 || pos_x53 <= 200)
				{
					pos_y45 += queda;					
					vel_x45 *= -1;
					pos_x45 += vel_x45;
					pos_y46 += queda;
					vel_x46 *= -1;
					pos_x46 += vel_x46;
					pos_y47 += queda;
					vel_x47 *= -1;
					pos_x47 += vel_x47;
					pos_y48 += queda;
					vel_x48 *= -1;
					pos_x48 += vel_x48;
					pos_y49 += queda;
					vel_x49 *= -1;
					pos_x49 += vel_x49;
					pos_y50 += queda;
					vel_x50 *= -1;
					pos_x50 += vel_x50;
					pos_y51 += queda;
					vel_x51 *= -1;
					pos_x51 += vel_x51;
					pos_y52 += queda;
					vel_x52 *= -1;
					pos_x52 += vel_x52;
					pos_y53 += queda;
					vel_x53 *= -1;
					pos_x53 += vel_x53;				
				}
			}
			if(pontuacao == 0)
			{
				cont++, cont1++, cont2++, cont3++, cont4++, cont5++, cont6++, cont7++, cont8++, cont9++, cont10++, cont11++, cont12++,
				cont13++, cont14++, cont15++, cont16++, cont17++, cont18++, cont19++, cont20++, cont21++, cont22++, cont23++, cont24++, cont25++,
				cont26++, cont27++, cont28++, cont29++, cont30++, cont31++, cont32++, cont33++, cont34++, cont35++, cont36++, cont37++, cont38++,
				cont39++, cont40++, cont41++, cont42++, cont43++, cont44++, cont45++, cont46++, cont47++, cont48++, cont49++, cont50++, cont51++,
				cont52++, cont53++;
			}

			//DESENHAR
			draw_sprite(buffer, fundo, 0, 0);
			draw_sprite(buffer, moldura, 0, 0);
			draw_sprite(buffer, logo, 10, 100);
			if(cont == 0)
			{
				draw_sprite(buffer, invasor3_1[frame_atual], pos_x, pos_y);
			}
			if(cont1 == 0)
			{
				draw_sprite(buffer, invasor3_2[frame_atual], pos_x1, pos_y1);
			}
			if(cont2 == 0)
			{
				draw_sprite(buffer, invasor3_3[frame_atual], pos_x2, pos_y2);
			}
			if(cont3 == 0)
			{
				draw_sprite(buffer, invasor3_4[frame_atual], pos_x3, pos_y3);
			}
			if(cont4 == 0)
			{
				draw_sprite(buffer, invasor3_5[frame_atual], pos_x4, pos_y4);
			}
			if(cont5 == 0)
			{
				draw_sprite(buffer, invasor3_6[frame_atual], pos_x5, pos_y5);
			}
			if(cont6 == 0)
			{
				draw_sprite(buffer, invasor3_7[frame_atual], pos_x6, pos_y6);
			}
			if(cont7 == 0)
			{
				draw_sprite(buffer, invasor3_8[frame_atual], pos_x7, pos_y7);
			}
			if(cont8 == 0)
			{
				draw_sprite(buffer, invasor3_9[frame_atual], pos_x8, pos_y8);
			}
			if(cont9 == 0)
			{
				draw_sprite(buffer, invasor2_1[frame_atual], pos_x9, pos_y9);
			}
			if(cont10 == 0)
			{
				draw_sprite(buffer, invasor2_2[frame_atual], pos_x10, pos_y10);
			}
			if(cont11 == 0)
			{
				draw_sprite(buffer, invasor2_3[frame_atual], pos_x11, pos_y11);
			}
			if(cont12 == 0)
			{
				draw_sprite(buffer, invasor2_4[frame_atual], pos_x12, pos_y12);
			}
			if(cont13 == 0)
			{
				draw_sprite(buffer, invasor2_5[frame_atual], pos_x13, pos_y13);
			}
			if(cont14 == 0)
			{
				draw_sprite(buffer, invasor2_6[frame_atual], pos_x14, pos_y14);
			}
			if(cont15 == 0)
			{
				draw_sprite(buffer, invasor2_7[frame_atual], pos_x15, pos_y15);
			}
			if(cont16 == 0)
			{
				draw_sprite(buffer, invasor2_8[frame_atual], pos_x16, pos_y16);
			}
			if(cont17 == 0)
			{
				draw_sprite(buffer, invasor2_9[frame_atual], pos_x17, pos_y17);
			}
			if(cont18 == 0)
			{
				draw_sprite(buffer, invasor1_1[frame_atual], pos_x18, pos_y18);
			}
			if(cont19 == 0)
			{
				draw_sprite(buffer, invasor1_2[frame_atual], pos_x19, pos_y19);
			}
			if(cont20 == 0)
			{
				draw_sprite(buffer, invasor1_3[frame_atual], pos_x20, pos_y20);
			}
			if(cont21 == 0)
			{
				draw_sprite(buffer, invasor1_4[frame_atual], pos_x21, pos_y21);
			}
			if(cont22 == 0)
			{
				draw_sprite(buffer, invasor1_5[frame_atual], pos_x22, pos_y22);
			}
			if(cont23 == 0)
			{
				draw_sprite(buffer, invasor1_6[frame_atual], pos_x23, pos_y23);
			}
			if(cont24 == 0)
			{
				draw_sprite(buffer, invasor1_7[frame_atual], pos_x24, pos_y24);
			}
			if(cont25 == 0)
			{
				draw_sprite(buffer, invasor1_8[frame_atual], pos_x25, pos_y25);
			}
			if(cont26 == 0)
			{
				draw_sprite(buffer, invasor1_9[frame_atual], pos_x26, pos_y26);
			}
			if(cont27 == 0)
			{
				draw_sprite(buffer, invasor3_10[frame_atual], pos_x27, pos_y27);
			}
			if(cont28 == 0)
			{
				draw_sprite(buffer, invasor3_11[frame_atual], pos_x28, pos_y28);
			}
			if(cont29 == 0)
			{
				draw_sprite(buffer, invasor3_12[frame_atual], pos_x29, pos_y29);
			}
			if(cont30 == 0)
			{
				draw_sprite(buffer, invasor3_13[frame_atual], pos_x30, pos_y30);
			}
			if(cont31 == 0)
			{
				draw_sprite(buffer, invasor3_14[frame_atual], pos_x31, pos_y31);
			}
			if(cont32 == 0)
			{
				draw_sprite(buffer, invasor3_15[frame_atual], pos_x32, pos_y32);
			}
			if(cont33 == 0)
			{
				draw_sprite(buffer, invasor3_16[frame_atual], pos_x33, pos_y33);
			}
			if(cont34 == 0)
			{
				draw_sprite(buffer, invasor3_17[frame_atual], pos_x34, pos_y34);
			}
			if(cont35 == 0)
			{
				draw_sprite(buffer, invasor3_18[frame_atual], pos_x35, pos_y35);
			}
			if(cont36 == 0)
			{
				draw_sprite(buffer, invasor2_10[frame_atual], pos_x36, pos_y36);
			}
			if(cont37 == 0)
			{
				draw_sprite(buffer, invasor2_11[frame_atual], pos_x37, pos_y37);
			}
			if(cont38 == 0)
			{
				draw_sprite(buffer, invasor2_12[frame_atual], pos_x38, pos_y38);
			}
			if(cont39 == 0)
			{
				draw_sprite(buffer, invasor2_13[frame_atual], pos_x39, pos_y39);
			}
			if(cont40 == 0)
			{
				draw_sprite(buffer, invasor2_14[frame_atual], pos_x40, pos_y40);
			}
			if(cont41 == 0)
			{
				draw_sprite(buffer, invasor2_15[frame_atual], pos_x41, pos_y41);
			}
			if(cont42 == 0)
			{
				draw_sprite(buffer, invasor2_16[frame_atual], pos_x42, pos_y42);
			}
			if(cont43 == 0)
			{
				draw_sprite(buffer, invasor2_17[frame_atual], pos_x43, pos_y43);
			}
			if(cont44 == 0)
			{
				draw_sprite(buffer, invasor2_18[frame_atual], pos_x44, pos_y44);
			}
			if(cont45 == 0)
			{
				draw_sprite(buffer, invasor1_10[frame_atual], pos_x45, pos_y45);
			}
			if(cont46 == 0)
			{
				draw_sprite(buffer, invasor1_11[frame_atual], pos_x46, pos_y46);
			}
			if(cont47 == 0)
			{
				draw_sprite(buffer, invasor1_12[frame_atual], pos_x47, pos_y47);
			}
			if(cont48 == 0)
			{
				draw_sprite(buffer, invasor1_13[frame_atual], pos_x48, pos_y48);
			}
			if(cont49 == 0)
			{
				draw_sprite(buffer, invasor1_14[frame_atual], pos_x49, pos_y49);
			}
			if(cont50 == 0)
			{
				draw_sprite(buffer, invasor1_15[frame_atual], pos_x50, pos_y50);
			}
			if(cont51 == 0)
			{
				draw_sprite(buffer, invasor1_16[frame_atual], pos_x51, pos_y51);
			}
			if(cont52 == 0)
			{
				draw_sprite(buffer, invasor1_17[frame_atual], pos_x52, pos_y52);
			}
			if(cont53 == 0)
			{
				draw_sprite(buffer, invasor1_18[frame_atual], pos_x53, pos_y53);
			}
			Draw_Lista_Tiros(tiros_nave, buffer);
			draw_sprite(buffer, nave, nave_x, nave_y);
			draw_sprite(buffer, pontos[frame_atual], 75, 30);
			textprintf_ex(buffer, font, 93, 50, makecol(255, 255, 255), -1, "%d", pontuacao);
			if(Vcont == 54)
			{
				draw_sprite(buffer, vitoria, 450, 50);
				textprintf_ex(buffer, font, 430, 155, makecol(255, 255, 255), -1, "Sua Pontuação: %d", pontuacao);
			}
			if(pontuacao == 0)
			{
				draw_sprite(buffer, perdeu, 450, 50);
				textout(buffer, font,"Você Perdeu!", 440, 155, makecol(255,255,255));
			}
			draw_sprite(screen, buffer, 0, 0);			
			clear(buffer);

			ticks--;
			contaux++;
			if(contaux > 36)
			{
				contaux = 0;
			}
		}
	}

	//FINALIZAÇÃO
	destroy_bitmap(buffer);
	destroy_bitmap(fundo);
	destroy_bitmap(moldura);
	destroy_bitmap(logo);
	destroy_bitmap(vitoria);
	destroy_bitmap(perdeu);
	Destroy_Lista_Tiros(tiros_nave);
	destroy_bitmap(nave);
	destroy_bitmap(pontos[0]);
	destroy_bitmap(pontos[1]);

	destroy_bitmap(invasor1_1[0]);
	destroy_bitmap(invasor1_2[0]);
	destroy_bitmap(invasor1_3[0]);
	destroy_bitmap(invasor1_4[0]);
	destroy_bitmap(invasor1_5[0]);
	destroy_bitmap(invasor1_6[0]);
	destroy_bitmap(invasor1_7[0]);
	destroy_bitmap(invasor1_8[0]);
	destroy_bitmap(invasor1_9[0]);
	destroy_bitmap(invasor1_10[0]);
	destroy_bitmap(invasor1_11[0]);
	destroy_bitmap(invasor1_12[0]);
	destroy_bitmap(invasor1_13[0]);
	destroy_bitmap(invasor1_14[0]);
	destroy_bitmap(invasor1_15[0]);
	destroy_bitmap(invasor1_16[0]);
	destroy_bitmap(invasor1_17[0]);
	destroy_bitmap(invasor1_18[0]);
	destroy_bitmap(invasor1_1[1]);
	destroy_bitmap(invasor1_2[1]);
	destroy_bitmap(invasor1_3[1]);
	destroy_bitmap(invasor1_4[1]);
	destroy_bitmap(invasor1_5[1]);
	destroy_bitmap(invasor1_6[1]);
	destroy_bitmap(invasor1_7[1]);
	destroy_bitmap(invasor1_8[1]);
	destroy_bitmap(invasor1_9[1]);
	destroy_bitmap(invasor1_10[1]);
	destroy_bitmap(invasor1_11[1]);
	destroy_bitmap(invasor1_12[1]);
	destroy_bitmap(invasor1_13[1]);
	destroy_bitmap(invasor1_14[1]);
	destroy_bitmap(invasor1_15[1]);
	destroy_bitmap(invasor1_16[1]);
	destroy_bitmap(invasor1_17[1]);
	destroy_bitmap(invasor1_18[1]);

	destroy_bitmap(invasor2_1[0]);
	destroy_bitmap(invasor2_2[0]);
	destroy_bitmap(invasor2_3[0]);
	destroy_bitmap(invasor2_4[0]);
	destroy_bitmap(invasor2_5[0]);
	destroy_bitmap(invasor2_6[0]);
	destroy_bitmap(invasor2_7[0]);
	destroy_bitmap(invasor2_8[0]);
	destroy_bitmap(invasor2_9[0]);
	destroy_bitmap(invasor2_10[0]);
	destroy_bitmap(invasor2_11[0]);
	destroy_bitmap(invasor2_12[0]);
	destroy_bitmap(invasor2_13[0]);
	destroy_bitmap(invasor2_14[0]);
	destroy_bitmap(invasor2_15[0]);
	destroy_bitmap(invasor2_16[0]);
	destroy_bitmap(invasor2_17[0]);
	destroy_bitmap(invasor2_18[0]);
	destroy_bitmap(invasor2_1[1]);
	destroy_bitmap(invasor2_2[1]);
	destroy_bitmap(invasor2_3[1]);
	destroy_bitmap(invasor2_4[1]);
	destroy_bitmap(invasor2_5[1]);
	destroy_bitmap(invasor2_6[1]);
	destroy_bitmap(invasor2_7[1]);
	destroy_bitmap(invasor2_8[1]);
	destroy_bitmap(invasor2_9[1]);
	destroy_bitmap(invasor2_10[1]);
	destroy_bitmap(invasor2_11[1]);
	destroy_bitmap(invasor2_12[1]);
	destroy_bitmap(invasor2_13[1]);
	destroy_bitmap(invasor2_14[1]);
	destroy_bitmap(invasor2_15[1]);
	destroy_bitmap(invasor2_16[1]);
	destroy_bitmap(invasor2_17[1]);
	destroy_bitmap(invasor2_18[1]);

	destroy_bitmap(invasor3_1[0]);
	destroy_bitmap(invasor3_2[0]);
	destroy_bitmap(invasor3_3[0]);
	destroy_bitmap(invasor3_4[0]);
	destroy_bitmap(invasor3_5[0]);
	destroy_bitmap(invasor3_6[0]);
	destroy_bitmap(invasor3_7[0]);
	destroy_bitmap(invasor3_8[0]);
	destroy_bitmap(invasor3_9[0]);
	destroy_bitmap(invasor3_10[0]);
	destroy_bitmap(invasor3_11[0]);
	destroy_bitmap(invasor3_12[0]);
	destroy_bitmap(invasor3_13[0]);
	destroy_bitmap(invasor3_14[0]);
	destroy_bitmap(invasor3_15[0]);
	destroy_bitmap(invasor3_16[0]);
	destroy_bitmap(invasor3_17[0]);
	destroy_bitmap(invasor3_18[0]);
	destroy_bitmap(invasor3_1[1]);
	destroy_bitmap(invasor3_2[1]);
	destroy_bitmap(invasor3_3[1]);
	destroy_bitmap(invasor3_4[1]);
	destroy_bitmap(invasor3_5[1]);
	destroy_bitmap(invasor3_6[1]);
	destroy_bitmap(invasor3_7[1]);
	destroy_bitmap(invasor3_8[1]);
	destroy_bitmap(invasor3_9[1]);
	destroy_bitmap(invasor3_10[1]);
	destroy_bitmap(invasor3_11[1]);
	destroy_bitmap(invasor3_12[1]);
	destroy_bitmap(invasor3_13[1]);
	destroy_bitmap(invasor3_14[1]);
	destroy_bitmap(invasor3_15[1]);
	destroy_bitmap(invasor3_16[1]);
	destroy_bitmap(invasor3_17[1]);
	destroy_bitmap(invasor3_18[1]);

	return 0;
}
END_OF_MAIN();
