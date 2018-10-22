#include "Membre.h"
#include "pch.h"

//CONSTRUCTEUR
Membre::Membre(int identifiant, int age, string nom, string prenom) {
	identifiant_ = identifiant;
	age_ = age;
	nom_ = nom;
	prenom_ = prenom;
}

//GETTERS
int Membre::age() {
	return age_;
}

string Membre::nom() {
	return nom_;
}


string Membre::prenom() {
	return prenom_;
}

