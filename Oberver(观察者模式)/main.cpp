#include <iostream>
#include "observer.h"
#include "real_subject.h"
#include "user.h"
#include "student.h"

int main()
{
	observer *o = new user("ÀèÃ÷");
	observer *o1 = new user("»Æ²³");
	observer *o2 = new user("ËïÙ³");
	observer *o3 = new user("µË³¬");
	observer *o4 = new user("Äã");
	observer *o5 = new user("ÎÒ`");
	observer *o6 = new user("Ëû");
	observer *o7 = new student;
	auto p = new real_subject;
	p->attach(o);
	p->attach(o1);
	p->attach(o2);
	p->attach(o3);
	p->attach(o4);
	p->attach(o5);
	p->attach(o6);
	p->attach(o7);
	p->notify();
	std::cout << "--------------------------------------------------" << std::endl;
	p->detach(o1);
	p->detach(o2);
	p->detach(o3);
	p->detach(o4);
	p->notify();
	system("pause");
	return 0;
}