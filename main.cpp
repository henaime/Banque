#include <iostream>
#include <string>
#include "Banque.hpp"
#include "Personne.hpp"
#include "Compte.hpp"

using namespace std;


int main(){
	Banque b("BMCE");
	Personne *P=new Personne("Meriem");
	Personne *Q=new Personne("Jamal");
	Personne *R=new Personne("Mehdi");
	b.cree_compte(P,234);
	b.cree_compte(Q,854);
	b.cree_compte(R,187);
	b.effacer_compte(854);
	b.afficher();
	delete P;
	delete Q;
	delete R;
	return 0;
}