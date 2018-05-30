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
	
};
#endif