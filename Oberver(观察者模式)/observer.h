#pragma once
#include <iostream>
#include <string>

//观察者类
class observer
{
public:
	virtual ~observer() = default;
	virtual void update(std::string message) = 0;
};
