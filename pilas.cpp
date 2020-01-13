#include <iostream>
#include <stack>//Libreria del vector

using namespace std;

void showstack(stack <int> s) 
{ 
	cout <<"-"<<endl; 
    while (!s.empty()) 
    { 
        cout <<s.top()<<endl; 
        s.pop(); 
    } 
    cout <<"-"<<endl; 
} 

//La pila es  LIFO (último en entrar, primero en salir)

int main(){

	stack<int> x;

	cout<<"Esta vacia la pila: "<<x.empty()<<endl;

	x.push(11); 
    x.push(22); 
    x.push(33); 
    x.push(44); 
    x.push(55); 

    showstack(x); 

    cout<<"Tamano de la pila: "<<x.size()<<endl;
    cout<<"Elemento de arriba: "<<x.top()<<endl;

    cout<<"Anade elemento en la parte superior: "<<endl;
    x.push(66);
    showstack(x); 

    cout<<"Quita elemento de la parte superior: "<<endl;
    x.pop();
    showstack(x);

return 0;
}