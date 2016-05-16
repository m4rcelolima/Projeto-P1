#include <allegro.h>
#include "tiro.h"
#define VEL 8

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

int main()
{
	allegro_init();
	install_timer();
	install_keyboard();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
	set_window_title("pROJ ePACE iNVADERS");

	ticks = 0;
	LOCK_FUNCTION(tick_couter);
	LOCK_VARIABLE(ticks);
	install_int_ex(tick_couter, BPS_TO_TIMER(60));//frames por seg

	milisegundos = 0;
	LOCK_FUNCTION(msec_couter);
	LOCK_VARIABLE(milisegundos);
	install_int_ex(msec_couter, MSEC_TO_TIMER(1));


	//BITMAPS
	BITMAP *buffer = create_bitmap(SCREEN_W, SCREEN_H);

	BITMAP *fundo = load_bitmap("img/fundo3.bmp", NULL);
	BITMAP *moldura = load_bitmap("img/moldura.bmp", NULL);
	BITMAP *logo = load_bitmap("img/logo.bmp", NULL);
	BITMAP *nave = load_bitmap("img/nave.bmp", NULL);

	BITMAP *pontos[2];
	pontos[0] = load_bitmap("img/pontos1.bmp", NULL);
	pontos[1] = load_bitmap("img/pontos2.bmp", NULL);

	BITMAP *invasor1[2];
	invasor1[0] = load_bitmap("img/invasor1_1.bmp", NULL);
	invasor1[1] = load_bitmap("img/invasor1_2.bmp", NULL);

	BITMAP *invasor2[2];
	invasor2[0] = load_bitmap("img/invasor2_1.bmp", NULL);
	invasor2[1] = load_bitmap("img/invasor2_2.bmp", NULL);

	BITMAP *invasor3[2];
	invasor3[0] = load_bitmap("img/invasor3_1.bmp", NULL);
	invasor3[1] = load_bitmap("img/invasor3_2.bmp", NULL);

	//VARIAVEL

	float pos_x = 220, pos_x1 = 265, pos_x2 = 310, pos_x3 = 355, pos_x4 = 400, pos_x5 = 445, pos_x6 = 490, pos_x7 = 535, pos_x8 = 580;
	float pos_x9 = 220, pos_x10 = 265, pos_x11 = 310, pos_x12 = 355, pos_x13 = 400, pos_x14 = 445, pos_x15 = 490, pos_x16 = 535, pos_x17 = 580;
	float pos_x18 = 220, pos_x19 = 265, pos_x20 = 310, pos_x21 = 355, pos_x22 = 400, pos_x23 = 445, pos_x24 = 490, pos_x25 = 535, pos_x26 = 580;

	float vel_x = VEL, vel_x1 = VEL, vel_x2 = VEL, vel_x3 = VEL, vel_x4 = VEL, vel_x5 = VEL, vel_x6 = VEL, vel_x7 = VEL, vel_x8 = VEL;
	float vel_x9 = VEL, vel_x10 = VEL, vel_x11 = VEL, vel_x12 = VEL, vel_x13 = VEL, vel_x14 = VEL, vel_x15 = VEL, vel_x16 = VEL, vel_x17 = VEL;
	float vel_x18 = VEL, vel_x19 = VEL, vel_x20 = VEL, vel_x21 = VEL, vel_x22 = VEL, vel_x23 = VEL, vel_x24 = VEL, vel_x25 = VEL, vel_x26 = VEL;

	float pos_y = 45, pos_y1 = 45, pos_y2 = 45, pos_y3 = 45, pos_y4 = 45, pos_y5 = 45, pos_y6 = 45, pos_y7 = 45, pos_y8 = 45;
	float pos_y9 = 80, pos_y10 = 80, pos_y11 = 80, pos_y12 = 80, pos_y13 = 80, pos_y14 = 80, pos_y15 = 80, pos_y16 = 80, pos_y17 = 80;
	float pos_y18 = 110, pos_y19 = 110, pos_y20 = 110, pos_y21 = 110, pos_y22 = 110, pos_y23 = 110, pos_y24 = 110, pos_y25 = 110, pos_y26 = 110;

	float pos_x27 = 220, pos_x28 = 265, pos_x29 = 310, pos_x30 = 355, pos_x31 = 400, pos_x32 = 445, pos_x33 = 490, pos_x34 = 535, pos_x35 = 580;
	float pos_x36 = 220, pos_x37 = 265, pos_x38 = 310, pos_x39 = 355, pos_x40 = 400, pos_x41 = 445, pos_x42 = 490, pos_x43 = 535, pos_x44 = 580;
	float pos_x45 = 220, pos_x46 = 265, pos_x47 = 310, pos_x48 = 355, pos_x49 = 400, pos_x50 = 445, pos_x51 = 490, pos_x52 = 535, pos_x53 = 580;

	float vel_x27 = VEL, vel_x28 = VEL, vel_x29 = VEL, vel_x30 = VEL, vel_x31 = VEL, vel_x32 = VEL, vel_x33 = VEL, vel_x34 = VEL, vel_x35 = VEL;
	float vel_x36 = VEL, vel_x37 = VEL, vel_x38 = VEL, vel_x39 = VEL, vel_x40 = VEL, vel_x41 = VEL, vel_x42 = VEL, vel_x43 = VEL, vel_x44 = VEL;
	float vel_x45 = VEL, vel_x46 = VEL, vel_x47 = VEL, vel_x48 = VEL, vel_x49 = VEL, vel_x50 = VEL, vel_x51 = VEL, vel_x52 = VEL, vel_x53 = VEL;

	float pos_y27 = 140, pos_y28 = 140, pos_y29 = 140, pos_y30 = 140, pos_y31 = 140, pos_y32 = 140, pos_y33 = 140, pos_y34 = 140, pos_y35 = 140;
	float pos_y36 = 175, pos_y37 = 175, pos_y38 = 175, pos_y39 = 175, pos_y40 = 175, pos_y41 = 175, pos_y42 = 175, pos_y43 = 175, pos_y44 = 175;
	float pos_y45 = 205, pos_y46 = 205, pos_y47 = 205, pos_y48 = 205, pos_y49 = 205, pos_y50 = 205, pos_y51 = 205, pos_y52 = 205, pos_y53 = 205;

	int cont = 0;//CONTADOR PARA MOVIMENTA UMA FILA POR VEZ

	int num_frames = 2, frame_atual = 0, tempo_trocar = 400, i, set_i = 0;
	int nave_x = 201, nave_y = 550;
	int prev_key_space;
	Lista_Tiros *tiros_nave = Create_Lista_Tiros();

	while(!key[KEY_ESC])
	{
		while(ticks > 0)
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
				Insere_Tiro(tiros_nave, nave_x+11, nave_y);
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

			if(cont == 18)
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
					pos_y26 += 20;					
					vel_x26 *= -1;
					pos_x26 += vel_x26;
					pos_y25 += 20;
					vel_x25 *= -1;
					pos_x25 += vel_x25;
					pos_y24 += 20;
					vel_x24 *= -1;
					pos_x24 += vel_x24;
					pos_y23 += 20;					
					vel_x23 *= -1;
					pos_x23 += vel_x23;
					pos_y22 += 20;					
					vel_x22 *= -1;
					pos_x22 += vel_x22;
					pos_y21 += 20;					
					vel_x21 *= -1;
					pos_x21 += vel_x21;
					pos_y20 += 20;					
					vel_x20 *= -1;
					pos_x20 += vel_x20;
					pos_y19 += 20;					
					vel_x19 *= -1;
					pos_x19 += vel_x19;
					pos_y18 += 20;					
					vel_x18 *= -1;
					pos_x18 += vel_x18;						
				}
				if(pos_x26 <= 200 || pos_x25 <= 200 || pos_x24 <= 200 || pos_x23 <= 200 || pos_x22 <= 200 || pos_x21 <= 200 || pos_x20 <= 200
				|| pos_x19 <= 200 || pos_x18 <= 200)
				{
					pos_y26 += 20;					
					vel_x26 *= -1;
					pos_x26 += vel_x26;
					pos_y25 += 20;
					vel_x25 *= -1;
					pos_x25 += vel_x25;
					pos_y24 += 20;
					vel_x24 *= -1;
					pos_x24 += vel_x24;
					pos_y23 += 20;					
					vel_x23 *= -1;
					pos_x23 += vel_x23;
					pos_y22 += 20;					
					vel_x22 *= -1;
					pos_x22 += vel_x22;
					pos_y21 += 20;					
					vel_x21 *= -1;
					pos_x21 += vel_x21;
					pos_y20 += 20;					
					vel_x20 *= -1;
					pos_x20 += vel_x20;
					pos_y19 += 20;					
					vel_x19 *= -1;
					pos_x19 += vel_x19;
					pos_y18 += 20;					
					vel_x18 *= -1;
					pos_x18 += vel_x18;
				}
			}
			
			else if(cont == 24)
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
					pos_y17 += 20;					
					vel_x17 *= -1;
					pos_x17 += vel_x17;
					pos_y16 += 20;
					vel_x16 *= -1;
					pos_x16 += vel_x16;
					pos_y15 += 20;
					vel_x15 *= -1;
					pos_x15 += vel_x15;
					pos_y14 += 20;					
					vel_x14 *= -1;
					pos_x14 += vel_x14;
					pos_y13 += 20;					
					vel_x13 *= -1;
					pos_x13 += vel_x13;
					pos_y12 += 20;					
					vel_x12 *= -1;
					pos_x12 += vel_x12;
					pos_y11 += 20;					
					vel_x11 *= -1;
					pos_x11 += vel_x11;
					pos_y10 += 20;					
					vel_x10 *= -1;
					pos_x10 += vel_x10;
					pos_y9 += 20;					
					vel_x9 *= -1;
					pos_x9 += vel_x9;
				}
				
				if(pos_x17 <= 200 || pos_x16 <= 200 || pos_x15 <= 200 || pos_x14 <= 200 || pos_x13 <= 200 || pos_x12 <= 200 || pos_x11 <= 200
				|| pos_x10 <= 200 || pos_x9 <= 200)
				{
					pos_y17 += 20;					
					vel_x17 *= -1;
					pos_x17 += vel_x17;
					pos_y16 += 20;
					vel_x16 *= -1;
					pos_x16 += vel_x16;
					pos_y15 += 20;
					vel_x15 *= -1;
					pos_x15 += vel_x15;
					pos_y14 += 20;					
					vel_x14 *= -1;
					pos_x14 += vel_x14;
					pos_y13 += 20;					
					vel_x13 *= -1;
					pos_x13 += vel_x13;
					pos_y12 += 20;					
					vel_x12 *= -1;
					pos_x12 += vel_x12;
					pos_y11 += 20;					
					vel_x11 *= -1;
					pos_x11 += vel_x11;
					pos_y10 += 20;					
					vel_x10 *= -1;
					pos_x10 += vel_x10;
					pos_y9 += 20;					
					vel_x9 *= -1;
					pos_x9 += vel_x9;				
				}
			}		
			else if(cont == 30)
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
					pos_y += 20;					
					vel_x *= -1;
					pos_x += vel_x;
					pos_y1 += 20;
					vel_x1 *= -1;
					pos_x1 += vel_x1;
					pos_y2 += 20;
					vel_x2 *= -1;
					pos_x2 += vel_x2;
					pos_y3 += 20;
					vel_x3 *= -1;
					pos_x3 += vel_x3;
					pos_y4 += 20;
					vel_x4 *= -1;
					pos_x4 += vel_x4;
					pos_y5 += 20;
					vel_x5 *= -1;
					pos_x5 += vel_x5;
					pos_y6 += 20;
					vel_x6 *= -1;
					pos_x6 += vel_x6;
					pos_y7 += 20;
					vel_x7 *= -1;
					pos_x7 += vel_x7;
					pos_y8 += 20;
					vel_x8 *= -1;
					pos_x8 += vel_x8;
				}
				
				if(pos_x <= 200 || pos_x1 <= 200 || pos_x2 <= 200 || pos_x3 <= 200 || pos_x4 <= 200 || pos_x5 <= 200 || pos_x6 <= 200
				|| pos_x7 <= 200 || pos_x8 <= 200)
				{
					pos_y += 20;					
					vel_x *= -1;
					pos_x += vel_x;
					pos_y1 += 20;
					vel_x1 *= -1;
					pos_x1 += vel_x1;
					pos_y2 += 20;
					vel_x2 *= -1;
					pos_x2 += vel_x2;
					pos_y3 += 20;
					vel_x3 *= -1;
					pos_x3 += vel_x3;
					pos_y4 += 20;
					vel_x4 *= -1;
					pos_x4 += vel_x4;
					pos_y5 += 20;
					vel_x5 *= -1;
					pos_x5 += vel_x5;
					pos_y6 += 20;
					vel_x6 *= -1;
					pos_x6 += vel_x6;
					pos_y7 += 20;
					vel_x7 *= -1;
					pos_x7 += vel_x7;
					pos_y8 += 20;
					vel_x8 *= -1;
					pos_x8 += vel_x8;				
				}
			}
			if(cont == 12)
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
					pos_y27 += 20;					
					vel_x27 *= -1;
					pos_x27 += vel_x27;
					pos_y28 += 20;
					vel_x28 *= -1;
					pos_x28 += vel_x28;
					pos_y29 += 20;
					vel_x29 *= -1;
					pos_x29 += vel_x29;
					pos_y30 += 20;					
					vel_x30 *= -1;
					pos_x30 += vel_x30;
					pos_y31 += 20;					
					vel_x31 *= -1;
					pos_x31 += vel_x31;
					pos_y32 += 20;					
					vel_x32 *= -1;
					pos_x32 += vel_x32;
					pos_y33 += 20;					
					vel_x33 *= -1;
					pos_x33 += vel_x33;
					pos_y34 += 20;					
					vel_x34 *= -1;
					pos_x34 += vel_x34;
					pos_y35 += 20;					
					vel_x35 *= -1;
					pos_x35 += vel_x35;						
				}
				if(pos_x27 <= 200 || pos_x28 <= 200 || pos_x29 <= 200 || pos_x30 <= 200 || pos_x31 <= 200 || pos_x32 <= 200 || pos_x33 <= 200
				|| pos_x34 <= 200 || pos_x35 <= 200)
				{
					pos_y27 += 20;					
					vel_x27 *= -1;
					pos_x27 += vel_x27;
					pos_y28 += 20;
					vel_x28 *= -1;
					pos_x28 += vel_x28;
					pos_y29 += 20;
					vel_x29 *= -1;
					pos_x29 += vel_x29;
					pos_y30 += 20;					
					vel_x30 *= -1;
					pos_x30 += vel_x30;
					pos_y31 += 20;					
					vel_x31 *= -1;
					pos_x31 += vel_x31;
					pos_y32 += 20;					
					vel_x32 *= -1;
					pos_x32 += vel_x32;
					pos_y33 += 20;					
					vel_x33 *= -1;
					pos_x33 += vel_x33;
					pos_y34 += 20;					
					vel_x34 *= -1;
					pos_x34 += vel_x34;
					pos_y35 += 20;					
					vel_x35 *= -1;
					pos_x35 += vel_x35;
				}
			}
			
			else if(cont == 6)
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
					pos_y36 += 20;					
					vel_x36 *= -1;
					pos_x36 += vel_x36;
					pos_y37 += 20;
					vel_x37 *= -1;
					pos_x37 += vel_x37;
					pos_y38 += 20;
					vel_x38 *= -1;
					pos_x38 += vel_x38;
					pos_y39 += 20;					
					vel_x39 *= -1;
					pos_x39 += vel_x39;
					pos_y40 += 20;					
					vel_x40 *= -1;
					pos_x40 += vel_x40;
					pos_y41 += 20;					
					vel_x41 *= -1;
					pos_x41 += vel_x41;
					pos_y42 += 20;					
					vel_x42 *= -1;
					pos_x42 += vel_x42;
					pos_y43 += 20;					
					vel_x43 *= -1;
					pos_x43 += vel_x43;
					pos_y44 += 20;					
					vel_x44 *= -1;
					pos_x44 += vel_x44;
				}
				
				if(pos_x36 <= 200 || pos_x37 <= 200 || pos_x38 <= 200 || pos_x39 <= 200 || pos_x40 <= 200 || pos_x41 <= 200 || pos_x42 <= 200
				|| pos_x43 <= 200 || pos_x44 <= 200)
				{
					pos_y36 += 20;					
					vel_x36 *= -1;
					pos_x36 += vel_x36;
					pos_y37 += 20;
					vel_x37 *= -1;
					pos_x37 += vel_x37;
					pos_y38 += 20;
					vel_x38 *= -1;
					pos_x38 += vel_x38;
					pos_y39 += 20;					
					vel_x39 *= -1;
					pos_x39 += vel_x39;
					pos_y40 += 20;					
					vel_x40 *= -1;
					pos_x40 += vel_x40;
					pos_y41 += 20;					
					vel_x41 *= -1;
					pos_x41 += vel_x41;
					pos_y42 += 20;					
					vel_x42 *= -1;
					pos_x42 += vel_x42;
					pos_y43 += 20;					
					vel_x43 *= -1;
					pos_x43 += vel_x43;
					pos_y44 += 20;					
					vel_x44 *= -1;
					pos_x44 += vel_x44;				
				}
			}		
			else if(cont == 0)
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
					pos_y45 += 20;					
					vel_x45 *= -1;
					pos_x45 += vel_x45;
					pos_y46 += 20;
					vel_x46 *= -1;
					pos_x46 += vel_x46;
					pos_y47 += 20;
					vel_x47 *= -1;
					pos_x47 += vel_x47;
					pos_y48 += 20;
					vel_x48 *= -1;
					pos_x48 += vel_x48;
					pos_y49 += 20;
					vel_x49 *= -1;
					pos_x49 += vel_x49;
					pos_y50 += 20;
					vel_x50 *= -1;
					pos_x50 += vel_x50;
					pos_y51 += 20;
					vel_x51 *= -1;
					pos_x51 += vel_x51;
					pos_y52 += 20;
					vel_x52 *= -1;
					pos_x52 += vel_x52;
					pos_y53 += 20;
					vel_x53 *= -1;
					pos_x53 += vel_x53;
				}
				
				if(pos_x45 <= 200 || pos_x46 <= 200 || pos_x47 <= 200 || pos_x48 <= 200 || pos_x49 <= 200 || pos_x50 <= 200 || pos_x51 <= 200
				|| pos_x52 <= 200 || pos_x53 <= 200)
				{
					pos_y45 += 20;					
					vel_x45 *= -1;
					pos_x45 += vel_x45;
					pos_y46 += 20;
					vel_x46 *= -1;
					pos_x46 += vel_x46;
					pos_y47 += 20;
					vel_x47 *= -1;
					pos_x47 += vel_x47;
					pos_y48 += 20;
					vel_x48 *= -1;
					pos_x48 += vel_x48;
					pos_y49 += 20;
					vel_x49 *= -1;
					pos_x49 += vel_x49;
					pos_y50 += 20;
					vel_x50 *= -1;
					pos_x50 += vel_x50;
					pos_y51 += 20;
					vel_x51 *= -1;
					pos_x51 += vel_x51;
					pos_y52 += 20;
					vel_x52 *= -1;
					pos_x52 += vel_x52;
					pos_y53 += 20;
					vel_x53 *= -1;
					pos_x53 += vel_x53;				
				}
			}

			//DESENHAR
			draw_sprite(buffer, fundo, 0, 0);
			draw_sprite(buffer, moldura, 0, 0);
			draw_sprite(buffer, logo, 10, 100);
			draw_sprite(buffer, invasor3[frame_atual], pos_x, pos_y);
			draw_sprite(buffer, invasor3[frame_atual], pos_x1, pos_y1);
			draw_sprite(buffer, invasor3[frame_atual], pos_x2, pos_y2);
			draw_sprite(buffer, invasor3[frame_atual], pos_x3, pos_y3);
			draw_sprite(buffer, invasor3[frame_atual], pos_x4, pos_y4);
			draw_sprite(buffer, invasor3[frame_atual], pos_x5, pos_y5);
			draw_sprite(buffer, invasor3[frame_atual], pos_x6, pos_y6);
			draw_sprite(buffer, invasor3[frame_atual], pos_x7, pos_y7);
			draw_sprite(buffer, invasor3[frame_atual], pos_x8, pos_y8);
			draw_sprite(buffer, invasor2[frame_atual], pos_x9, pos_y9);
			draw_sprite(buffer, invasor2[frame_atual], pos_x10, pos_y10);
			draw_sprite(buffer, invasor2[frame_atual], pos_x11, pos_y11);
			draw_sprite(buffer, invasor2[frame_atual], pos_x12, pos_y12);
			draw_sprite(buffer, invasor2[frame_atual], pos_x13, pos_y13);
			draw_sprite(buffer, invasor2[frame_atual], pos_x14, pos_y14);
			draw_sprite(buffer, invasor2[frame_atual], pos_x15, pos_y15);
			draw_sprite(buffer, invasor2[frame_atual], pos_x16, pos_y16);
			draw_sprite(buffer, invasor2[frame_atual], pos_x17, pos_y17);
			draw_sprite(buffer, invasor1[frame_atual], pos_x18, pos_y18);
			draw_sprite(buffer, invasor1[frame_atual], pos_x19, pos_y19);
			draw_sprite(buffer, invasor1[frame_atual], pos_x20, pos_y20);
			draw_sprite(buffer, invasor1[frame_atual], pos_x21, pos_y21);
			draw_sprite(buffer, invasor1[frame_atual], pos_x22, pos_y22);
			draw_sprite(buffer, invasor1[frame_atual], pos_x23, pos_y23);
			draw_sprite(buffer, invasor1[frame_atual], pos_x24, pos_y24);
			draw_sprite(buffer, invasor1[frame_atual], pos_x25, pos_y25);
			draw_sprite(buffer, invasor1[frame_atual], pos_x26, pos_y26);
			draw_sprite(buffer, invasor3[frame_atual], pos_x27, pos_y27);
			draw_sprite(buffer, invasor3[frame_atual], pos_x28, pos_y28);
			draw_sprite(buffer, invasor3[frame_atual], pos_x29, pos_y29);
			draw_sprite(buffer, invasor3[frame_atual], pos_x30, pos_y30);
			draw_sprite(buffer, invasor3[frame_atual], pos_x31, pos_y31);
			draw_sprite(buffer, invasor3[frame_atual], pos_x32, pos_y32);
			draw_sprite(buffer, invasor3[frame_atual], pos_x33, pos_y33);
			draw_sprite(buffer, invasor3[frame_atual], pos_x34, pos_y34);
			draw_sprite(buffer, invasor3[frame_atual], pos_x35, pos_y35);
			draw_sprite(buffer, invasor2[frame_atual], pos_x36, pos_y36);
			draw_sprite(buffer, invasor2[frame_atual], pos_x37, pos_y37);
			draw_sprite(buffer, invasor2[frame_atual], pos_x38, pos_y38);
			draw_sprite(buffer, invasor2[frame_atual], pos_x39, pos_y39);
			draw_sprite(buffer, invasor2[frame_atual], pos_x40, pos_y40);
			draw_sprite(buffer, invasor2[frame_atual], pos_x41, pos_y41);
			draw_sprite(buffer, invasor2[frame_atual], pos_x42, pos_y42);
			draw_sprite(buffer, invasor2[frame_atual], pos_x43, pos_y43);
			draw_sprite(buffer, invasor2[frame_atual], pos_x44, pos_y44);
			draw_sprite(buffer, invasor1[frame_atual], pos_x45, pos_y45);
			draw_sprite(buffer, invasor1[frame_atual], pos_x46, pos_y46);
			draw_sprite(buffer, invasor1[frame_atual], pos_x47, pos_y47);
			draw_sprite(buffer, invasor1[frame_atual], pos_x48, pos_y48);
			draw_sprite(buffer, invasor1[frame_atual], pos_x49, pos_y49);
			draw_sprite(buffer, invasor1[frame_atual], pos_x50, pos_y50);
			draw_sprite(buffer, invasor1[frame_atual], pos_x51, pos_y51);
			draw_sprite(buffer, invasor1[frame_atual], pos_x52, pos_y52);
			draw_sprite(buffer, invasor1[frame_atual], pos_x53, pos_y53);
			Draw_Lista_Tiros(tiros_nave, buffer);
			draw_sprite(buffer, nave, nave_x, nave_y);
			draw_sprite(buffer, pontos[frame_atual], 75, 30);
			draw_sprite(screen, buffer, 0, 0);			
			clear(buffer);

			ticks--;
			cont++;
			if(cont > 36)
			{
				cont = 0;
			}
		}
	}

	//FINALIZAÇÃO
	destroy_bitmap(buffer);
	destroy_bitmap(fundo);
	destroy_bitmap(moldura);
	destroy_bitmap(logo);
	Destroy_Lista_Tiros(tiros_nave);
	destroy_bitmap(nave);
	destroy_bitmap(pontos[0]);
	destroy_bitmap(pontos[1]);
	destroy_bitmap(invasor1[0]);
	destroy_bitmap(invasor1[1]);
	destroy_bitmap(invasor2[0]);
	destroy_bitmap(invasor2[1]);
	destroy_bitmap(invasor3[0]);
	destroy_bitmap(invasor3[1]);

	return 0;
}
END_OF_MAIN();
