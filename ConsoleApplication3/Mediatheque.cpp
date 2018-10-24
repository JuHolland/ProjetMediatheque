#include "pch.h"
#include "Mediatheque.h"

//CONSTRUCTEURS
Mediatheque::Mediatheque() {
}

Mediatheque::Mediatheque(list<Element>elements, list<Membre>membres) {
	elements_ = elements;
	membres_ = membres;
}


//GETTERS
list<Element> Mediatheque::elements() {
	return elements_;
}

list<Membre> Mediatheque::membres() {
	return membres_;
}

//METHODES

void Mediatheque::ajouteElement(Element e){
	//precondition:
	//postcondition:l'Element est ajouté à la liste d'elements de la mediathque
	if (elements_.empty()) {
		elements_.push_back(e);
	}
	else {
		list<Element>::iterator it = elements_.begin();
		list<Element>::reverse_iterator it2 = elements_.rbegin(); //car on veut le dernier iterateur (attention reverse it !!)
		if (e.numero() > ((*it2).numero())) {
			elements_.push_back(e);
		}
		else {
			while ((*it).numero() < e.numero()) {
				++it;
			}
			elements_.insert(it, e);
		}
	}
}

void Mediatheque::ajouteMembre(Membre m) {
	//precondition:
	//postcondition: le membre est ajouté à la list membres de la mediatheque
	if (membres_.empty()) {
		membres_.push_back(m);
	} else {
		list<Membre>::iterator it = membres_.begin();
		list<Membre>::reverse_iterator it2 = membres_.rbegin(); //car on veut le dernier iterateur (attention reverse it !!)
		if (m.nom() > ((*it2).nom())) {
			membres_.push_back(m);
		}
		else {
			while ((*it).nom() < m.nom()) {
				++it;
			}
			membres_.insert(it, m);
		}
	}
}

void Mediatheque::afficheElements() {
	if (elements_.empty()) {
		cout << "Il n'y a pas d'element !" << endl;
	}
	else {
		for (list<Element>::iterator it = elements_.begin(); it != elements_.end(); ++it) {
			int num = (*it).numero();
			string titre = (*it).titre();
			string auteur = (*it).auteur();
			bool dispo = (*it).dispo();
			cout << num << "	" << titre << "		" << auteur << " "<< dispo<<endl;
		}
	}
}

void Mediatheque::afficheMembres() {
	if (elements_.empty()) {
		cout << "Il n'y a pas de membre !" << endl;
	}
	else {
		for (list<Membre>::iterator it = membres_.begin(); it != membres_.end(); ++it) {
			string nom = (*it).nom();
			string prenom = (*it).prenom();
			int id = (*it).identifiant();
			int age = (*it).age();
			cout << nom << "	" << prenom << "		" << id << "		" << age << endl;
		}
	}
}


void Mediatheque::emprunter(Element e, Membre* m) {
	//precondition : l'element e appartient à la mediatheque
	//postcondition : l'element devient indisponible, le membre emprunte l'Element e
	if ((*m).emprunt() != 0) {
		cout << (*m).prenom() << (*m).nom() << " a deja un element d'emprunte !" << endl;
	}
	else {
		list<Element>::iterator it = elements_.begin();
		while ((*it).numero() < e.numero()) {
			++it;
		}
		if ((*it).dispo()) {
			(*it).setDispo();
			(*m).emprunt(*it);
		}
		else {
			cout << "Cet element n'est pas disponible !" << endl;
		}
	}
}

void Mediatheque::rendre(Element e, Membre* m) {
	//precondition : l'Element e a été emprunté préalablement
	//postcondition : l'Element e redevient dispo, et m ne possède plus l'Element e
	list<Element>::iterator it = elements_.begin();
	while ((*it).numero() < e.numero()) {
		++it;
	}
	(*it).setDispo();
	(*m).rendre();
}