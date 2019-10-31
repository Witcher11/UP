#include <iostream>
using namespace std;
int main()
{
    int n,counter;
    cin>>n;
    for(int i = 2; i*i<=n; i++)
    {

        if(n%i==0)
        {
            counter =0;
            while(n%i==0)
            {
                n/=i;
                counter++;
            }
            cout<<" ("<<i<<","<<counter<<")";
        }
    }


if(n!=1){
     cout<<" ("<<n<<",1"<<")";
}




    return 0;
}
