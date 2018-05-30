#include<iostream>
#define n 5

using namespace std;

template <class T>
class Tableau{
	T *tab;
	int dim;
	int sp;//sommet d la pile
public:
	//Tableau(){}
	Tableau(int=0);
	T& operator[](int);
	T operator+(const T);
	void operator+=(const T&);
	void add(T );
	void afficher();
	T& operator=(const T&);
};

template<class T>
Tableau<T>::Tableau(int d){
	dim=d;
	sp=0;
	tab=new T[d];
}
template<class T>
void Tableau<T>::add(T x){
	if(sp==dim){
		cout<<"tableau atteint !!!"<<endl;
		return;
	}
	tab[sp]=x;
	sp++;
}
template<class T>
T& Tableau<T>::operator[](int i){
	if(i<dim) return tab[i];
}
template<class T>
T& Tableau<T>::operator=(const T& table){
	sp=table.sp;
	dim=table.dim;
	for(int i=0;i<dim;i++){
		tab[i]=table.tab[i];
		sp++;
	}
	return (*this);
}
template<class T>
T Tableau<T>::operator+(const T table){
	Tableau<T> nv(dim);
	for(int i=0;i<dim;i++)
		nv.tab[i]=table.tab[i]+tab[i];
return nv;
}

template<class T>
void Tableau<T>::afficher(){
	for(int i=0;i<dim;i++)
		cout<<tab[i]<<"\t";
	cout<<endl;
}
template<class T>
void Tableau<T>::operator+=(const T& table){

}




int main(){
	Tableau<int> T(6);
	for(int i=0;i<6;i++)
		T[i]=i+1;
	Tableau<string> Txt(10);
	Txt.add("hiba");
	Txt.add("ali");
	Txt.add("mehdi");

	T.afficher();
	Txt.afficher();

	//nums3=nums+nums2;
	//nums3=nums.additioner(5);
	//cout<< nums[4]<<endl;
	//cout<< nums[2]<<endl;
	return 0;
}