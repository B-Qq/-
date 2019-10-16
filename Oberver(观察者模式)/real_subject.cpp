#include "real_subject.h"

void real_subject::notify()
{
	std::for_each(observers_.begin(), observers_.end(), [](observer *it)
	{
		it->update("------");
	});
}