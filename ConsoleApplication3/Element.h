#ifndef __ELEMENT_H
#define __ELEMENT_H

using namespace std;

class Element {

private:
protected:
	int numero_;
	bool dispo_; // false=indiponible ; true=dispo
	string titre_;
	string auteur_;
public:


	//CONSTRUCTEUR
	Element(int numero, string titre, string auteur);

	//GETTERS
	int numero();
	bool dispo();
	string titre();
	string auteur();

	//METHODES
	void setDispo(); //Prends rien en argument car c'est un bool ! 


};

#endif