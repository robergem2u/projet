SRC=jeu.c mapBuilder.c mapBoolean.c menu.c isEmpty.c display.c keyboardEvent.c tileset.c picture.c constants.c
BIN=jeu

$(BIN): $(SRC) mapBuilder.h constants.h mapBoolean.h menu.h isEmpty.h display.h keyboardEvent.h tileset.h picture.h
	gcc -g -std=c99 $(SRC) `sdl-config --cflags --libs` -lSDL_ttf -lSDL_mixer -L./usr/lib -I./usr/include -lm -o $(BIN)

clean:
	rm -f $(BIN)
