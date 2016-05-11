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
	set_window_title("Hello World!");

	ticks = 0;
	LOCK_FUNCTION(tick_couter);
	LOCK_VARIABLE(ticks);
	install_int_ex(tick_couter, BPS_TO_TIMER(3));//frames por seg para ficar lento como no jogo


	//BITMAPS
	BITMAP *buffer = create_bitmap(SCREEN_W, SCREEN_H);

	//VARIAVEL
	float pos_x = 200, pos_x1 = 200, pos_x2 = 230, pos_x3 = 230;
	float vel_x = 8, vel_x1 = 8, vel_x2 = 8, vel_x3 = 8;
	float pos_y = 50, pos_y1 = 85, pos_y2 = 50, pos_y3 = 85;
	long int cont = 0;

	while(!key[KEY_ESC])
	{
		while(ticks > 0)
		{
			//ENTRADA
			
			//ATUALIZAÇÂO
			if(cont % 2 == 0)
			{
				pos_x1 = pos_x1 + vel_x1;// movimentação da bola azul
				pos_x3 = pos_x3 + vel_x3;
				if(pos_x1 >= SCREEN_W - 200 || pos_x3 >= SCREEN_W - 200)
				{
					pos_y1 = pos_y1 + 20;
					vel_x1 *= -1;
					pos_x1 = pos_x1 + vel_x1;
					pos_y3 = pos_y3 + 20;
					vel_x3 *= -1;
					pos_x3 = pos_x3 + vel_x3;						
				}
				if(pos_x1 <= 200 || pos_x3 <= 200)
				{
					pos_y1 = pos_y1 + 20;
					vel_x1 *= -1;
					pos_x1 = pos_x1 + vel_x1;
					pos_y3 = pos_y3 + 20;
					vel_x3 *= -1;
					pos_x3 = pos_x3 + vel_x3;
				}
			}
			
			else
			{
				pos_x = pos_x + vel_x;//movimentação da verde
				pos_x2 = pos_x2 + vel_x2;
				if(pos_x >= SCREEN_W - 200 || pos_x2 >= SCREEN_W - 200)
				{
					pos_y = pos_y + 20;
					vel_x *= -1;
					pos_x = pos_x + vel_x;
					pos_y2 = pos_y2 + 20;
					vel_x2 *= -1;
					pos_x2 = pos_x2 + vel_x2;
				}
				
				if(pos_x <= 0 + 200 || pos_x2 <= 0 + 200)
				{
					pos_y = pos_y + 20;
					vel_x *= -1;
					pos_x = pos_x + vel_x;
					pos_y2 = pos_y2 + 20;
					vel_x2 *= -1;
					pos_x2 = pos_x2 + vel_x2;				
				}
			}		

			//DESENHAR
			circlefill(buffer, pos_x, pos_y, 6, makecol(0, 255, 0));
			circlefill(buffer, pos_x1, pos_y1, 6, makecol(0, 60, 255));
			circlefill(buffer, pos_x2, pos_y2, 6, makecol(0, 255, 0));
			circlefill(buffer, pos_x3, pos_y3, 6, makecol(0, 60, 255));
			draw_sprite(screen, buffer, 0, 0);
			clear(buffer);

			ticks--;
			cont++;
		}
	}

	//FINALIZAÇÃO
	destroy_bitmap(buffer);

	return 0;
}
END_OF_MAIN();