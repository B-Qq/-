#pragma once

#include  <iostream>

class game
{
public:
	game() = default;
	virtual ~game() = default;
public:
	virtual  void initialized();
	virtual void start_play();
	virtual void end_play();
	void play();
};
