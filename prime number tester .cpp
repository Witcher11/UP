#include <iostream>
using namespace std;
int main(){
unsigned n = 2147483647;
if(n==1 || n==0){
cout<<" not a prime number ";
return 0;
}
for(unsigned i=2;i*i<=n;i++){
    if(n%i==0){
    cout<<" not a prime "<<endl;
    return 0;}

}

cout<<" this is a prime number "<<endl;








return 0;
}
