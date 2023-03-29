#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"ingrese un numero de 4 digitos:_";cin>>numero;
    int miles=numero/1000;
    int centenas=(numero-1000*miles)/100;
    int decenas=(numero-1000*miles-100*centenas)/10;
    int unidades=(numero-1000*miles-100*centenas-decenas*10);
    cout<<unidades<<decenas<<centenas<<miles;
    return 0;
}