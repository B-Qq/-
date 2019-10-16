#pragma once
#include "observer.h"

class user :public observer
{
public:
	explicit user(std::string name);
	void update(std::string message) override;
	std::string name_;
};
