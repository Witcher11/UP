#include <iostream>
#include <cmath>
using namespace std;
int main(){

double a,b,c;
double D;

cout<<"Enter 'a': "; cin>>a;
cout<<"Enter 'b': "; cin>>b;
cout<<"Enter 'c': "; cin>>c;

 D=b*b-4*a*c;

 if(D<0){
 cout<<"No real root! "<<endl;
 }
 else if(D==0){
 cout<<"There is one real root and it is: "<<((-b)/(2*a))<<endl;
 }
else {
cout<<"there are 2 real roots: "<<endl;
cout<<"x1= "<<(-b - sqrt(D))/(2*a)<<endl;
cout<<"x2= "<<(-b + sqrt(D))/(2*a)<<endl;

}

return 0;
}
