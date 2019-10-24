#include <iostream>
using namespace std;
int main(){
int x,y,result;
char op;

cout<<" enter x: ";cin>>x;
cout<<" enter symbol: ";cin>>op;
cout<<" enter y: ";cin>>y;



switch(op){
case'+':
result=x+y;break;

case'-':
result=x-y;break;

case'*':
result=x*y;break;


case'/':
if(y!=0){
result=x/y;break;}
else{
cout<<"cant divide "<<endl;return 1;
}
break;
default :
cout<<" Unknown operation ";return 1;


}

cout<<x<<op<<y<<" = "<<result;







return 0;
}
