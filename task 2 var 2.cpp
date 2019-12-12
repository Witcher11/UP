#include <iostream>
using namespace std;
const int MAXI = 10;
void biggerNumber(double *a, double x,int Podadenrazmer)
{
    int counter1=0;
    double b[Podadenrazmer];
    for(int i=0; i<Podadenrazmer; i++)
    {
        if(a[i]>x)
        {
            b[counter1]=a[i];
            counter1++;
        }
    }
    for(int i=0; i<counter1; i++)
    {
        cout<<" "<<b[i];
    }
}
int main()
{

    const int maxsize = 10;
    int arraysize,x;
    cout<<"enter arraysize: ";
    cin>>arraysize;
    cout<<"numbers bigger than: ";
    cin>>x;

    double   a[arraysize];
    double b[arraysize];
    for( int i=0; i<arraysize; i++)
    {
        cin>>a[i];
    }
    /* for(i=0;i<arraysize;i++){
     b[i] */

    biggerNumber(a, x,arraysize);

    // }

    return 0;
}
