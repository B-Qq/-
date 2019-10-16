#include "subject.h"

void subject::attach(observer* obs)
{
	if (obs != nullptr)
	{
		observers_.push_back(obs);
	}
}

void subject::detach(observer* obs)
{
	if (obs != nullptr)
	{
		observers_.remove(obs);
	}
}