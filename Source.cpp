#include<allegro5/allegro.h>
#include<allegro5\allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = al_create_display(600, 600);

	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_draw_rectangle(300, 209, 50, 50, al_map_rgb(50, 50, 50), 5);

	al_draw_filled_circle(300, 300, 50, al_map_rgb(80, 200, 20));

	al_draw_rectangle(300, 150, 500, 250, al_map_rgb(40, 20, 29),5);

	al_draw_filled_circle(500, 300, 50, al_map_rgb(20, 20, 20));

	al_draw_filled_triangle(359, 200, 50, 10, 60, 70,al_map_rgb(200, 50, 60));

	al_flip_display();

	al_rest(10);

	al_destroy_display(display);
}