#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c;
cout<<" enter a: ";cin>>a;
cout<<" enter b: ";cin>>b;
cout<<" enter c: ";cin>>c;
if(a>0 && b>0 &&c>0 && a+b>c && b+c>a && a+c>b){
    if(a==b&&b==c)
    cout<<" ravnostranen";


    else if(a==b ||b==c ||a==c)
    cout<<" ravnobedren ";
    else
    cout<< "raZnostranen";


cout<<" Valid triangle"<<endl;
}
else
 cout<<" Invalid triangle "<<endl;












return 0 ;
}
