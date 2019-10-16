#include "user.h"

user::user(std::string name) : name_(std::move(name)) {
}

void user::update(const std::string message)
{
	std::cout << name_ + "收到推送消息" + message << std::endl;
}