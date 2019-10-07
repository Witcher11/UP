#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y,r;
    cout<<"enter X and Y: ";
    cin>>x>>y;
      r=sqrt(pow(x,2)+pow(y,2));

      if (r>=0  && r<=6)
        {
         cout<<"the point is inside" ;
        }
      else{


        cout<<"the point is NOT inside" ;
      }
        return 0;

}



