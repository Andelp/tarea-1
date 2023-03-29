#include <iostream>
using namespace std;

int main(){
    int edad;
    float min,max;
    cout<<"ingrese su edad:_";cin>>edad;
    float mhr1=220-edad;
    float mhr2=208-0.7*edad;
    float mhr3=207-0.7*edad;
    float mhr4=211-0.64*edad;

    if(mhr1>mhr2 && mhr1>mhr3 && mhr1>mhr4){
        max=mhr1;
    }
    if(mhr2>mhr1 && mhr2>mhr3 && mhr2>mhr4){
        max=mhr2;
    }
    if(mhr3>mhr1 && mhr3>mhr2 && mhr3>mhr4){
        max=mhr3;
    }
    if(mhr4>mhr1 && mhr4>mhr3 && mhr4>mhr2){
        max=mhr4;
    }

    if(mhr1<mhr2 && mhr1<mhr3 && mhr1<mhr4){
        min=mhr1;
    }
    if(mhr2<mhr1 && mhr2<mhr3 && mhr2<mhr4){
        min=mhr2;
    }
    if(mhr3<mhr1 && mhr3<mhr2 && mhr3<mhr4){
        min=mhr3;
    }
    if(mhr4<mhr1 && mhr4<mhr3 && mhr4<mhr2){
        min=mhr4;
    }
    cout<<"en general su frecuencia maxima cardiaca debe estar entre "<<min<<" y "<<max;
    return 0;
}