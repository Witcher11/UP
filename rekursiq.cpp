#include <iostream>
using namespace std;

const int N=20;
bool rec(double arr[],int sizeArr, int i=0, double lastPos=0){

        if(i>=sizeArr){
        return true;

        }
        if(arr[i]>0){
        if(arr[i]>lastPos)
        {
       return rec(arr, sizeArr, i+1, arr[i]);

        }
        else{ return false;
        }
        }
return rec(arr, sizeArr,i+1, lastPos);

}


int main(){

double arr[]={ 1.1 , 0 ,2,-3, 3.14, 2};


cout<<rec(arr,6);





}
