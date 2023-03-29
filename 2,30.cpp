#include <iostream>
using namespace std;
int main(){
    double altura,peso;
    cout<<"ingrese su altura:_";cin>>altura;
    cout<<endl;
    cout<<"ingrese su peso:_";cin>>peso;
    cout<<"Valores IMC\n"<<"Bajo peso:\tmenos de 18.5\n"<<"NOrmal:\t\tentre 18.5 y 24.9\n"<<"Sobre peso:\tentre 25 y 29.9\n"<<"Obesidad:\t30 o mas\n";
    cout<<"Su indice corporal es:_"<<peso/(altura*altura);
    return 0;
}