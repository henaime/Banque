#ifndef Personne_h
#define Personne_h

#include <iostream>
#include <string>

using namespace std;

class Personne{
	string nom;
public:
	Personne(const string& n){
		nom=n;
	}
	string get_nom() const{
		return nom;
	}
	void set_nom(const string& s){
		nom=s;
	}/*
	friend ostream& operator<<(ostream& out,const Personne& p){
		out<<p.nom;
		return out;
	}*/
	
};
#endif