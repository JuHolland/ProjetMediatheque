
#include "pch.h"
#include "Membre.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello World!\n" << endl;
	Membre Hippo(001, 16, "Henry", "Hippo");
	cout << Hippo.prenom()<<" a "<<Hippo.age()<<" ans."<< endl;
	return 0;
}
