#include <iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cout<<"ingresa dos diferentes enteros:_";cin>>n1>>n2;

    if(n1%2==0){
        cout<<"el primer numero es par\n";
    }
    else{cout<<"el primer numero es impar\n";}
    if(n2%2==0){
        cout<<"el segundo numero es par\n";
    }
    else{cout<<"el segundo numero es impar\n";}

    int suma=n1+n2;
    if(suma%2==0){
        cout<<"la suma de los numeros es par\n";
    }
    else{cout<<"la suma de los numeros es impar\n";}

    return 0;
}