#ifndef Banque_h
#define Banque_h

#include <iostream>
#include <string>
#include "Personne.hpp"
#include "Compte.hpp"

using namespace std;


class Banque{
	string nom;
	Compte **tab;
	int sp;
public:
	Banque(const string& c);
	~Banque();
	void cree_compte(Personne* P,int num);
	void effacer_compte(int num);
	void afficher();
};

Banque::Banque(const string& c){
	nom=c;
	tab=new Compte*[200];
	sp=0;
}
Banque::~Banque(){
	delete tab;
}

void Banque::cree_compte(Personne *P,int num){
	Compte *nv;
	nv=new Compte(P,num);
	tab[sp++]=nv;
}

void Banque::effacer_compte(int num){
	for(int i=0;i<sp;i++){
		if(tab[i]->get_numero()==num){
			for(int j=i;i<sp-1;i++){
				tab[j]=tab[j+1];
			}
			sp--;
			return;
		}
	}
}

void Banque::afficher(){
	for(int i=0;i<sp;i++)
	cout<<tab[i]->get_client()->get_nom()<<" "<<tab[i]->get_numero()<<endl;
}


#endif