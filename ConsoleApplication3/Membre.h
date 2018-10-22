#ifndef __MEMBRE_H
#define __MEMBRE_H

#include <list>
#include <string>
using namespace std;

class Membre {
protected:
private:
public:
	int identifiant_;
	int age_;
	string nom_;
	string prenom_;
	//list<Element> historique_; il faudra un setter !!



	//CONSTRUCTEUR
	Membre(int identifiant, int age, string nom, string prenom);

	//GETTERS
	int age();
	string nom();
	string prenom();

	//SETTER
	
};

#endif
