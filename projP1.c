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
	install_int_ex(tick_couter, BPS_TO_TIMER(2.8));// 2.8 frames por seg para ficar lento como no jogo


	//BITMAPS
	BITMAP *buffer = create_bitmap(SCREEN_W, SCREEN_H);

	//VARIAVEL
	float pos_x = 200;
	float vel_x = 8;
	float pos_y = 50;
	float pos_x1 = 200;
	float vel_x1 = 8;
	float pos_y1 = 85;

	while(!key[KEY_ESC])
	{
		while(ticks > 0)
		{
			//ENTRADA
			
			//ATUALIZAÇÂO
			pos_x1 = pos_x1 + vel_x1;// movimentação da bola azul
			if(pos_x1 >= SCREEN_W - 200)
			{
				pos_y1 = pos_y1 + 20;
				vel_x1 *= -1;
				pos_x1 = SCREEN_W - 200 + vel_x1;
			}
			if(pos_x1 <= 0 + 200)
			{
				pos_y1 = pos_y1 + 20;
				vel_x1 *= -1;
				pos_x1 = pos_x1 + vel_x1;
			}
			
			pos_x = pos_x + vel_x;//movimentação da verde

			if(pos_x >= SCREEN_W - 200)
			{
				pos_y = pos_y + 20;
				vel_x *= -1;
				pos_x = SCREEN_W - 200 + vel_x;
			}
			
			if(pos_x <= 0 + 200)
			{
				pos_y = pos_y + 20;
				vel_x *= -1;
				pos_x = pos_x + vel_x;				
			}		

			//DESENHAR
			circlefill(buffer, pos_x, pos_y, 6, makecol(0, 255, 0));
			circlefill(buffer, pos_x1, pos_y1, 6, makecol(0, 60, 255));
			draw_sprite(screen, buffer, 0, 0);
			clear(buffer);

			ticks--;
		}
	}

	//FINALIZAÇÃO
	destroy_bitmap(buffer);

	return 0;
}
END_OF_MAIN();