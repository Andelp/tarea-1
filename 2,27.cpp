#include <iostream>
using namespace std;
int main(){
    char caracter;
    cout<<"ingrese un caracter";cin>>caracter;

    cout<<static_cast<int>(caracter);
    return 0;
}