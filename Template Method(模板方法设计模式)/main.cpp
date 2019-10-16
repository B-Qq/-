#include <iostream>
#include "game.h"
#include "football.h"

int main()
{
	auto g = new game;
	game *f = new football;
	g->play();
	f->play();
	system("pause");
	return 0;
}