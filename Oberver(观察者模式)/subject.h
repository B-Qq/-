#pragma once

#include <list>
#include <algorithm>
#include "observer.h"

//被观察者类
class subject
{
public:
	~subject() = default;
	void attach(observer *obs);
	void detach(observer* obs);
	virtual void notify() = 0;
protected:
	std::list<observer *> observers_;
};
