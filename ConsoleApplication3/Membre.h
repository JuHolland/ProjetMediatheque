#ifndef __MEMBRE_H
#define __MEMBRE_H

#include <set>
#include <string>
#include "Element.h"
using namespace std;

class Membre {
protected:
private:
	int identifiant_;
	int age_;
	string nom_;
	string prenom_;
	set<int> historique_; //set car on ne veut pas de doublon et on veut que les �l�ments soient tri�s - contient le numero de tous les elements emprunt�s
	int emprunt_; //numero du livre emprunt� (0 si pas de livre emprunt�)
public:

	//CONSTRUCTEUR
	Membre(int identifiant, int age, string nom, string prenom);

	//GETTERS
	int age();
	string nom();
	string prenom();
	int identifiant();
	int emprunt();

	//METHODE
	void nouvelHisto(int n);
	void emprunt(Element e);
	void afficheHisto();
	void rendre();
};

#endif
