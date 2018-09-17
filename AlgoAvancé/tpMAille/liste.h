#include "maillon.h"
#include <iostream>
class Liste
{
		maillon * tete;
		maillon * queue;
		
		public:
			Liste();
			~Liste();
			void InsertionEnTete(maillon * x);
			void InsertionEnQueue(maillon * x);
			maillon & Recherche(maillon x);
			void Suppression(maillon x);
			bool Vide();
			void Affich();
};
