#ifndef Compte_h
#define Compte_h

#include <iostream>
#include <string>
#include "Personne.hpp"

using namespace std;

class Compte{
	Personne *client;
	int numero;
public:
	Compte(Personne *c,int num);
	Personne* get_client() const;
	int get_numero() const;
	
};

Compte::Compte(Personne *c,int num){
	numero=num;
	client=c;
}

Personne* Compte::get_client() const{
	return client;
}
int Compte::get_numero()const {return numero;}

#endif