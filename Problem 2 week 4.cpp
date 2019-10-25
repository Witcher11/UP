#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<" enter number: ";
    cin>>number;
    bool flag=true;
    for(int i=2; i<number; i++)
    {

        if(number%i==0)
        {


            flag =false;
            break;
            }
    }
    if(flag){

    cout<<" e prosto"<<endl;
    }
    else
        cout<<" ne e prosto";
    return 0;
}
