#include <iostream>
using namespace std;
int main(){
    string pais;
    int km,pea;
    cout<<"indique en que pais radica:_";cin>>pais;//pido el pais para guiarme de los precios locales de gasolina,peajes,etc
    cout<<"¿Cuantos kilometros en promedio recorre diariamente?:_";cin>>km;
    cout<<"¿normalmente cuantos peajes pasa para llegar a su trabajo?:_";cin>>pea;

    float costo=((km/30)*20)+24+6*pea; //el coste promedio de peaje en peru es de 6 soles, 1 galon dura 30km en promedio, coste de gasolina en peru 20
    cout<<endl;
    cout<<"usted gasta en promedio "<<costo<<" soles para llegar y regresar de su trabajo";
    return 0;
}