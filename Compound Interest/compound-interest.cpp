  #include <iostream>
 #include <cmath>
using namespace std;
int main() {
   float p, t, r, a, b, c, d;
    cout<<"Enter your Principal=";
   cin>>p;
   cout<<"Enter your Time=";
   cin>>t;
   cout<<"Enter your Rate in RS=";
   cin>>r;
   
   r=r*12;
   a=1+r/100;
   b=pow(a,t);
   
   c=(b-1)*p;
   d=p+c;
   cout<<"Compount Interest="<<c<<endl;
   cout<<"Total Amount="<<d;
   return 0;
}
