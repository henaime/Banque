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
	Compte(){}
	Compte(Personne *c,int num);
	Compte(int num){
		numero=num;
		client=NULL;
	}
	Personne* get_client() const;
	int get_numero() const;
	Compte& operator=(const Compte&);
	bool operator==(const Compte&);
	friend ostream& operator<<(ostream& out,const Compte& c);
	
};

Compte::Compte(Personne *c,int num){
	numero=num;
	client=c;
}

Personne* Compte::get_client() const{
	return client;
}
int Compte::get_numero()const {return numero;}

Compte& Compte::operator=(const Compte& c){
	numero=c.numero;
	client->set_nom(c.client->get_nom());
	return(*this);
}

bool Compte::operator==(const Compte& c){
	return numero==c.numero;
}
ostream& operator<<(ostream& out,const Compte* c){
	out<<c->get_client()->get_nom()<<" "<<c->get_numero()<<endl;
	return out;
}


#endif