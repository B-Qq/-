#include "game.h"

void game::initialized()
{
	std::cout << "游戏初始化" << std::endl;
}

void game::start_play()
{
	std::cout << "游戏开始" << std::endl;
}

void game::end_play()
{
}

void game::play()
{
	initialized();
	start_play();
	end_play();
}