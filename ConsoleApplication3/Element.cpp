#include "Element.h"
#include "pch.h"


//CONSTRUCTEUR
Element::Element(int numero, string titre, string auteur) {
	numero_ = numero;
	dispo_ = true;
	titre_ = titre;
	auteur_ = auteur;
}

//GETTERS
int Element::numero() {
	return numero_;
}

bool Element::dispo() {
	return dispo_;
}

string Element::titre() {
	return titre_;
}

string Element::auteur() {
	return auteur_;
}

//METHODE
void Element::setDispo() {
	if (dispo_ == true) {
		dispo_ = false;
	}
	else {
		dispo_ = true;
	}
}
