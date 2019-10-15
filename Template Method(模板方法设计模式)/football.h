#pragma once
#include "game.h"

class football :public game
{
public:
	football() = default;
	~football() = default;

	void initialized() override;
	void start_play() override;
	void end_play() override;
};
