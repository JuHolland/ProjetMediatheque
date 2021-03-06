
#include "pch.h"
#include "Membre.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	cout << "Hello World!\n" << endl;

	//CREATION DES MEMBRES
	Membre m1(001, 20, "Henry", "Hippo");
	Membre m2(002, 56, "Smith", "Jonh");
	Membre m3(003, 21, "Holland", "Edgar");
	Membre m4(004, 28, "Casatti", "Pietro");

	//CREATION ELEMENTS
	Element e1(123589,"L'étranger", "Albert Camus");
	Element e2(254685,"Blast", "Manu Larcenet");
	//Livre l1(354648);
	//Dvd d1(365489);
	//Bd b1(456781);

	//CREATION DE LA MEDIATHEQUE
	Mediatheque media;
	media.ajouteMembre(m1);
	media.ajouteMembre(m2);
	media.ajouteMembre(m3);
	media.ajouteMembre(m4);
	media.ajouteElement(e1);
	media.ajouteElement(e2);

	//AFFICHAGE MEMBRES ET ELEMENTS
	media.afficheElements();
	media.afficheMembres();

	//EMPRUNTS
	media.emprunter(e1, &m1); //Hippo emprunte e1
	media.emprunter(e2, &m1); //Ne merche pas car Hippo a déjà emprunté un élément !
	media.emprunter(e1, &m2); //Ne marche pas car e1 est déjà emrunté

	media.rendre(e1, &m1); //Hippo rend e1
	media.emprunter(e2, &m1); //Hippo emprunte e2
	media.rendre(e2, &m1); //Hippo rend e2
	media.emprunter(e1, &m1); //Hippo réemprunte e1
	m1.afficheHisto(); //On a bien que 2 éléments dans son historique (pas de doublon)



	return 0;
}
