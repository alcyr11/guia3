#include<iostream>
#include<math.h>
  using namespace std;
  int main(){
     float a,b,c,mult,rest,raiz,div,total1,total2;
     cout<<"ingrese a ";
     cin>>a;
     cout<<"ingrese b ";
     cin>>b;
     cout<<"ingrese c ";
     cin>>c;

     mult=4*a*c;
     rest=pow(b,2)-mult;
     raiz=sqrt(rest);
     div=2*a;
     total1=(-b+raiz)/div;
     total2=(-b-raiz)/div;
     cout<<"el resultado 1 es "<<total1<<endl;
     cout<<"el resultado 2 es "<<total2; 



    
     
     
     
     
     
     
     
     
     
      return 0;



  }