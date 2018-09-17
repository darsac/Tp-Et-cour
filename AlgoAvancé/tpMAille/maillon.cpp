#include "maillon.h"
#include <iostream>
maillon::maillon(int x)
{
	val=x;
	succ = pred = NULL;
}
maillon::~maillon()
{
	if(succ)
	{
		delete(succ);
	}
}
