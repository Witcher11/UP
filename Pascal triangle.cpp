#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int row; const int W=3;
cout<<" enter rows: ";cin>>row;
for(int i=0;i<row;i++)
   {

        for(int j=1;j<=row-i-1;j++)
        {
        cout<<setw(W)<<" ";
        }
        int coef =1;
        cout<<setw(2*W)<<coef;
        for(int j=1;j<=i;j++){
        coef=coef*(i-j+1)/j;
        cout<<setw(2*W)<<coef;
        }
        cout << endl;
}


return 0;
}
