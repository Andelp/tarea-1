#include <iostream>
using namespace std;

int main(){
    int radio;
    cout<<"ingrese el radio:_";cin>>radio;
    cout<<"el diametro es:_"<<radio*2<<endl;
    cout<<"la circunferencia es:_"<<((2*3.14)*radio)<<endl;
    cout<<"el area es:_"<<(3.14*(radio*radio))<<endl;
    return 0;
}