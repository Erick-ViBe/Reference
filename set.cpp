#include <iostream>
#include<set> //Libreria del set
#include <iterator> 

using namespace std;

void showset(set <int> gq) 
{ 
	cout<<"-"<<endl;
    for (int elem : gq)
	{
   		cout<<elem<<endl;
	} 
	cout<<"-"<<endl;
} 

int main(){

set <int> x;

cout<<"Esta vacio el set: "<<x.empty()<<endl;

x.insert(44);
x.insert(11);
x.insert(55);
x.insert(22);
x.insert(33);
x.insert(33);//Guerda elementos unicos (Si ya esta, no lo duplica)

showset(x);

cout<<"Tamano del set: "<<x.size()<<endl;
x.erase(66); cout<<"Borrar elemento que no existe (66)"<<endl;

showset(x);

cout<<"Tamano del set: "<<x.size()<<endl;
x.erase(55); cout<<"Borrar elemento 55"<<endl; 

showset(x);

cout<<"Tamano del set: "<<x.size()<<endl;

cout<<endl;

cout<<"Existe el numero 11: "<<x.count(11)<<endl;
cout<<"Existe el numero 66: "<<x.count(66)<<endl;

x.clear(); cout<<"Borrar set"<<endl;

showset(x);

cout<<"Tamano del set: "<<x.size()<<endl;

return 0;
}
