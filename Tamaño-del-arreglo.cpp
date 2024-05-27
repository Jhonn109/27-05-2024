#include<iostream>
using namespace std;
int main(){
int tamano =0;
cout<<"Escriba datos n para ingresar: ";
cin>>tamano;
int num [tamano];
int par [tamano];
int j =0;
for(int i=0; i<tamano;i++){
cout<<"ingrese un numero entero: ";
 cin>>num [i];

if (num [i]%2==0){
par[j]=num[i];
j++;
}
}
   cout<<"El arreglo original es: ";
   for(int i=0; i<tamano;i++){
   cout<<num[i]<<"\n";
   }
        cout<<"El arreglo par es: "<<endl;
        for(int k=0; k<j ;k++){

      cout<< par[k]<<"\n";
   }

   

    return 0;
}

