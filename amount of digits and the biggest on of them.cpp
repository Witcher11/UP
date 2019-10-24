#include <iostream>
using namespace std;
int main(){

int number,countDigit=0,maxDigit=0,lastDigit;
cout<<" enter a number "; cin>>number;

do{

    lastDigit=number%10;
    if(lastDigit>maxDigit){
        maxDigit=lastDigit;
    }
    countDigit++;
    number=number/10;
}
    while(number!=0);
    cout<<" biggest digit is: " <<maxDigit;
    cout<<" amount of digits: " <<countDigit;


    return 0;
}
