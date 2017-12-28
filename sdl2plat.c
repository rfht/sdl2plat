/*
created 2017-12-26 by Thomas Frohwein (thfr)

sdl2plat 

simple test program for SDL2 to see which platform is
returned

link to SDL2 library when compiling

Usage:

sdl2plat

*/
#include <stdio.h>
#include <SDL.h>

int main()
{
	printf("%s\n", SDL_GetPlatform());
}
