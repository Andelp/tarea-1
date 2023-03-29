#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,n4,n5;
    cout<<"ingrese 5 numeros:_";cin>>n1>>n2>>n3>>n4>>n5;
    if (n1>n2 && n1>n3 && n1>n4 && n1>n5){
        cout<<"el mas grande es_"<<n1<<endl;
    }
    if (n2>n1 && n2>n3 && n2>n4 && n1>n5){
        cout<<"el mas grande es_"<<n2<<endl;
    }
    if (n3>n1 && n3>n2 && n3>n4 && n3>n5){
        cout<<"el mas grande es_"<<n3<<endl;
    }
    if (n4>n1 && n4>n2 && n4>n3 && n4>n5){
        cout<<"el mas grande es_"<<n4<<endl;
    }
    if (n5>n1 && n5>n2 && n5>n3 && n5>n4){
        cout<<"el mas grande es_"<<n5<<endl;
    }
    if (n1<n2 && n1<n3 && n1<n4 && n1<n5){
        cout<<"el mas pequeño es_"<<n1<<endl;
    }
    if (n2<n1 && n2<n3 && n2<n4 && n1<n5){
        cout<<"el mas pequeño es_"<<n2<<endl;
    }
    if (n3<n1 && n3<n2 && n3<n4 && n3<n5){
        cout<<"el mas pequeño es_"<<n3<<endl;
    }
    if (n4<n1 && n4<n2 && n4<n3 && n4<n5){
        cout<<"el mas pequeño es_"<<n4<<endl;
    }
    if (n5<n1 && n5<n2 && n5<n3 && n5<n4){
        cout<<"el mas pequeño es_"<<n5<<endl;
    }
    
    
 

    return 0;

}