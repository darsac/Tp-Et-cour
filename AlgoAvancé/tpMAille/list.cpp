#include "liste.h"
#include <iostream>

Liste::Liste()
{
	tete=queue=NULL;
}
Liste::~Liste()
{
	if(tete)
	{
		delete(tete);
	}
}
void Liste::InsertionEnTete(maillon * x)
{
	if(tete == NULL)
	{
		x->pred = NULL;
		x->succ =NULL;
		x= tete;
	}
	else
	{
		x->pred = NULL;
		x->succ = tete;
		tete->pred = x;
	}
	
}
void Liste::Affich()
{
	maillon * p = tete;
	if(p==NULL)
	{
		std::cout << "Liste vide" << std::endl;
	}
	else
	{
		while(p)
		{
			std::cout << p->val << std::endl;
			p = p->succ;
		}
	}
}
bool Liste::Vide()
{
	if(tete==NULL)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}
void Liste::InsertionEnQueue(maillon * x)
{
	if(queue == NULL)
	{
		x->pred = NULL;
		x->succ = NULL;
	}
	else
	{
		queue->succ = x;
		x->pred = queue;
		x->succ = NULL;
		}
}

