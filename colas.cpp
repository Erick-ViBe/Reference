#include <iostream>
#include <queue>//Libreria del vector

using namespace std;

void showq(queue <int> gq) 
{ 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 

//La cola es FIFO (primero en entrar, primero en salir)

int main(){

    queue <int> x;
    //priority_queue <int> x; COLA ORDENADA

    cout<<"Esta vacia la cola: "<<x.empty()<<endl;

    x.push(11); 
    x.push(22); 
    x.push(33); 
    x.push(44); 
    x.push(55);
 
    showq(x); 

    cout<<"Tamano de la cola: "<<x.size()<<endl;
    cout<<"Elemento siguiente: "<<x.front()<<endl;
    cout<<"Ultimo elemento: "<<x.back()<<endl;

    cout<<"Anade elemento: "<<endl;
    x.push(66);
    showq(x); 

    cout<<"Quita elemento: "<<endl;
    x.pop();
    showq(x);

return 0;
}

/*Esta vacia la cola: 1
        11      22      33      44      55
Tamano de la cola: 5
Elemento siguiente: 11
Ultimo elemento: 55
Anade elemento:
        11      22      33      44      55      66
Quita elemento:
        22      33      44      55      66*/