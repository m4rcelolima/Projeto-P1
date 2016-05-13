#include <allegro.h>

volatile int ticks;
void tick_couter()
{
	ticks++;
}
END_OF_FUNCTION(tick_couter);

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
	install_int_ex(tick_couter, MSEC_TO_TIMER(310));//frames por seg para ficar lento como no jogo


	//BITMAPS
	BITMAP *buffer = create_bitmap(SCREEN_W, SCREEN_H);

	//VARIAVEL
	float pos_x = 110, pos_x1 = 135, pos_x2 = 160;
	float pos_x3 = 110, pos_x4 = 135, pos_x5 = 160;
	float pos_x6 = 110, pos_x7 = 135, pos_x8 = 160;

	float vel_x = 20, vel_x1 = 20, vel_x2 = 20;
	float vel_x3 = 20, vel_x4 = 20, vel_x5 = 20;
	float vel_x6 = 20, vel_x7 = 20, vel_x8 = 20;

	float pos_y = 50, pos_y1 = 50, pos_y2 = 50;
	float pos_y3 = 80, pos_y4 = 80, pos_y5 = 80;
	float pos_y6 = 110, pos_y7 = 110, pos_y8 = 110;

	int cont = 0;//CONTADOR PARA MOVIMENTA UMA FILA POR VEZ

	while(!key[KEY_ESC])
	{
		while(ticks > 0)
		{
			//ENTRADA
			
			//ATUALIZAÇÂO
			if(cont == 0)
			{
				pos_x8 = pos_x8 + vel_x8;// movimentação das bolas brancas
				pos_x7 = pos_x7 + vel_x7;
				pos_x6 = pos_x6 + vel_x6;
				if(pos_x8 >= SCREEN_W - 100 || pos_x7 >= SCREEN_W - 100 || pos_x6 >= SCREEN_W - 100)
				{
					pos_y8 += 20;					
					vel_x8 *= -1;
					pos_x8 += vel_x8;
					pos_y7 += 20;
					vel_x7 *= -1;
					pos_x7 += vel_x7;
					pos_y6 += 20;
					vel_x6 *= -1;
					pos_x6 += vel_x6;						
				}
				if(pos_x8 <= 100 || pos_x7 <= 100 || pos_x6 <= 100)
				{
					pos_y8 += 20;
					vel_x8 *= -1;
					pos_x8 += vel_x8;
					pos_y7 += 20;
					vel_x7 *= -1;
					pos_x7 += vel_x7;
					pos_y6 += 20;
					vel_x6 *= -1;
					pos_x6 += vel_x6;
				}
			}
			
			else if(cont == 1)
			{
				pos_x5 = pos_x5 + vel_x5;//movimentação das bolas azuis
				pos_x4 = pos_x4 + vel_x4;
				pos_x3 = pos_x3 + vel_x3;
				if(pos_x5 >= SCREEN_W - 100 || pos_x4 >= SCREEN_W - 100 || pos_x3 >= SCREEN_W - 100)
				{
					pos_y5 += 20;					
					vel_x5 *= -1;
					pos_x5 += vel_x5;
					pos_y4 += 20;
					vel_x4 *= -1;
					pos_x4 += vel_x4;
					pos_y3 += 20;
					vel_x3 *= -1;
					pos_x3 += vel_x3;
				}
				
				if(pos_x5 <= 100 || pos_x4 <= 100 || pos_x3 <= 100)
				{
					pos_y5 += 20;					
					vel_x5 *= -1;
					pos_x5 += vel_x5;
					pos_y4 += 20;
					vel_x4 *= -1;
					pos_x4 += vel_x4;
					pos_y3 += 20;
					vel_x3 *= -1;
					pos_x3 += vel_x3;				
				}
			}		
			else if(cont == 2)
			{
				pos_x = pos_x + vel_x;//movimentação das bolas verdes
				pos_x1 = pos_x1 + vel_x1;
				pos_x2 = pos_x2 + vel_x2;
				if(pos_x >= SCREEN_W - 100 || pos_x1 >= SCREEN_W - 100 || pos_x2 >= SCREEN_W - 100)
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
				}
				
				if(pos_x <= 100 || pos_x1 <= 100 || pos_x2 <= 100)
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
				}
			}

			//DESENHAR
			circlefill(buffer, pos_x, pos_y, 7, makecol(0, 255, 0));
			circlefill(buffer, pos_x1, pos_y1, 7, makecol(0, 255, 0));
			circlefill(buffer, pos_x2, pos_y2, 7, makecol(0, 255, 0));
			circlefill(buffer, pos_x3, pos_y3, 7, makecol(60, 60, 255));
			circlefill(buffer, pos_x4, pos_y4, 7, makecol(60, 60, 255));
			circlefill(buffer, pos_x5, pos_y5, 7, makecol(60, 60, 255));
			circlefill(buffer, pos_x6, pos_y6, 7, makecol(255, 255, 255));
			circlefill(buffer, pos_x7, pos_y7, 7, makecol(255, 255, 255));
			circlefill(buffer, pos_x8, pos_y8, 7, makecol(255, 255, 255));
			draw_sprite(screen, buffer, 0, 0);
			clear(buffer);

			ticks--;
			cont++;
			if(cont > 2)
			{
				cont = 0;
			}
		}
	}

	//FINALIZAÇÃO
	destroy_bitmap(buffer);

	return 0;
}
END_OF_MAIN();