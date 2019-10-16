#pragma once
#include "observer.h"

class student :public observer
{
public:
	void update(std::string message) override;
};
