#include <iostream>
#include "observer.h"
#include "real_subject.h"
#include "user.h"
#include "student.h"

int main()
{
	observer *o = new user("����");
	observer *o1 = new user("�Ʋ�");
	observer *o2 = new user("��ٳ");
	observer *o3 = new user("�˳�");
	observer *o4 = new user("��");
	observer *o5 = new user("��`");
	observer *o6 = new user("��");
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