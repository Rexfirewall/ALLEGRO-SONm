#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

int main() {
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_SAMPLE *sample = NULL; // create a variable to hold the sound
	ALLEGRO_SAMPLE *sample2 = NULL; // create a variable to hold the sound

	al_init();

	// initialize audio helper libraries
	al_install_audio();
	al_init_acodec_addon();

	// reserve samples
	al_reserve_samples(2);
	
	// load samples
	sample = al_load_sample("yes-hahahaa.wav");
	sample2 = al_load_sample("youve-been-acting.wav");

	// display = al_create_display(640, 480); // not  needed



	//al_play_sample(sample2, 1.0, 0.0, 1, ALLEGRO_PLAYMODE_ONCE, NULL);
	al_play_sample(sample, 1.0, 0.0, .75, ALLEGRO_PLAYMODE_LOOP, NULL);
	al_rest(5);

	al_destroy_display(display);
	al_destroy_sample(sample);
	return 0;
}