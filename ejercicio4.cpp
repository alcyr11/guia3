#include<iostream>

  using namespace std;
  int main(){
      float precio,cantidad;
      float total_gastado;
     
      string nombre; 
     cout<<"ingrese nombre ";
     cin>>nombre;
     cout<<"ingrese el precio de "<<nombre<<" ";
     cin>>precio;
     cout<<"ingrese la cantidad de "<<nombre<<" ";
     cin>>cantidad;
     total_gastado=precio*cantidad;
     
     cout<<"el total gastado es "<<total_gastado;

     
     
     
     
     
     
      return 0 ;
                 }