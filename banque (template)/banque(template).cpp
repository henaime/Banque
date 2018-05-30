#include<iostream>
#include "Personne.hpp"
#include "Compte.hpp"

using namespace std;

template <class T>
class vecteur{
	T *tab;
	int dim;
	int sp=0;//sommet d la pile
public:
	vecteur(){}
	vecteur(int);
	void add(const T);
	void remove(const T);
	void afficher();
};

template<class T>
vecteur<T>::vecteur(int n){
	dim=n;
	sp;
	tab=new T[n];
}

template<class T>
void vecteur<T>::add(const T t){
	if(dim>sp){
	tab[sp]=t;
	sp++;
	}else{
		cout<<"vecteur plein!!!\n";
	}
}

template<class T>
void vecteur<T>::remove(const T t){
	cout<<"suppresion du compte "<<t;
	for(int i=0;i<sp;i++){
		if(tab[i]==t){
			for(int j=i;j<sp-1;j++){
				tab[j]=tab[j+1];
			}
			sp--;
			cout<<"done!!"<<endl;
			return;
		}
	}
	cout<<"element not found!!"<<endl;
}

template<class T>
void vecteur<T>::afficher(){
	cout<<"======================\n";
	cout<<"liste des comptes"<<endl;
	for(int i=0;i<sp;i++){
		cout<<tab[i]<<endl;
	}
	cout<<"======================\n";
}

int main(){

	Personne *P=new Personne("Meriem");
	Personne *Q=new Personne("Jamal");
	Personne *R=new Personne("Mehdi");
	Personne *J=new Personne("hamza");
	Personne *K=new Personne("anas");
	Compte A=Compte(P,234);
	Compte B=Compte(Q,187);
	Compte C=Compte(R,854);
	Compte D=Compte(J,562);
	Compte E=Compte(K,745);
	vecteur<Compte*> b(10);
	b.add(&A);
	b.add(&B);
	b.add(&C);
	b.add(&E);
	b.afficher();
	b.remove(&B);
	b.afficher();
	b.remove(&B);

	return 0;
}
