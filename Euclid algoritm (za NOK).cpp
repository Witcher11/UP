#include <iostream>
using namespace std;
int main()
{
    int a ,b ,r;
    cin>>a>>b;
    while(b>0){

    r=a%b;
    a=b;
    b=r;
    }
    cout<<a;

    return 0;
}
