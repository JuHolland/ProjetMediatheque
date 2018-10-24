#ifndef __MEDIATHEQUE_H
#define __MEDIATHEQUE_H

#include<list>
#include "Element.h"
#include "Membre.h"

using namespace std;

class Mediatheque {

private:
protected:
	list<Element>elements_; //les elements seront tri�s en fct de leur num�ro
	list<Membre>membres_; //les membres seront tri�s par ordre alphab�tique
	//on utilise des listes car plus facile d'inserer un nouvel �l�ment dedans
public:


	//CONSTRUCTEUR destruteur ??
	Mediatheque();
	Mediatheque(list<Element>elements, list<Membre>membres);

	//GETTERS 
	list<Element> elements(); 
	list<Membre> membres(); 

	//METHODES
	void ajouteElement(Element e); //ajoute un element
	void ajouteMembre(Membre m); //ajoute un membre
	void afficheElements();
	void afficheMembres();
	void emprunter(Element e, Membre* m);
	void rendre(Element e, Membre* m);


};

#endif
