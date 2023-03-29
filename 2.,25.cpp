#include <iostream>
using namespace std;
// ¡if the first two integers are factors of the THIRD! supuse que hubo un error de redaccion en el libro
int main(){
    int n1,n2,n3;
    cout<<"ingrese tres numeros:_";cin>>n1>>n2>>n3;
    if(n3%n1==0 && n3%n2==0){
        cout<<"los primeros dos numeros son factores del tercero";
    }
    else{cout<<"los primeros dos numeros NO son factores del tercero";}
    return 0;
}