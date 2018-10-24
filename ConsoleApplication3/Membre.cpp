#include "Membre.h"
#include "pch.h"

//CONSTRUCTEUR
Membre::Membre(int identifiant, int age, string nom, string prenom) {
	identifiant_ = identifiant;
	age_ = age;
	nom_ = nom;
	prenom_ = prenom;
	emprunt_ = 0;
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

int Membre::identifiant() {
	return identifiant_;
}

int Membre::emprunt() {
	return emprunt_;
}


//METHODES
void Membre::nouvelHisto(int n) {
	historique_.insert(n);
}

void Membre::emprunt(Element e) {
	emprunt_ = e.numero();
	nouvelHisto(e.numero());
}

void Membre::afficheHisto() {
	if (historique_.empty()) {
		cout << "Ce membre n'a pas d'historique" << endl;
	}
	else {
		for (set<int>::iterator it = historique_.begin(); it != historique_.end(); ++it) {
			cout << *it << endl;
		}
	}
}

void Membre::rendre() {
	emprunt_ = 0;
}

