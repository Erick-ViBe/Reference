#include <iostream>
#include<set> //Libreria del set

using namespace std;

int main(){

	int n,aux;

	cin>>n;

	int x[n];

	for (int i =1; i <= n; ++i)
	{
		cin>>x[i];
	}

	set<int> s;

	for (int i = 1; i <= n; ++i)
	{
		aux=i;
		for (;s.count(aux)==false;)
		{
			s.insert(x[aux]);
			aux = x[aux];
		}
		cout<<aux;
		s.clear();
	}

/*
set <int> x;
cout<<"Existe el numero 11: "<<x.count(11)<<endl;
x.insert(33);//Guerda elementos unicos (Si ya esta, no lo duplica)
x.clear(); cout<<"Borrar set"<<endl;*/

return 0;
}
