#ifndef __MEDIATHEQUE_H
#define __MEDIATHEQUE_H

#include<list>
#include "Element.h"
#include "Membre.h"

using namespace std;

class Mediatheque {

private:
protected:
	list<Element>elements_; //les elements seront triés en fct de leur numéro
	list<Membre>membres_; //les membres seront triés par ordre alphabétique
	//on utilise des listes car plus facile d'inserer un nouvel élément dedans
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
