#include <iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter a number with 3 digits: ";
    cin>>number;


    if(!(number>=100&&number<=999)){
        cout<<"Enter a number with 3 digits!"<<endl;
        return 0;
    }

    int units, tens, hundreds;


    units = number % 10;
    tens = (number/10)%10;


    hundreds = number /100;


    cout<<" The number if the Hundreds is : "<<hundreds<<"\n The number of the  Tens is : "<<tens<<"\n The number of the Units is : "<<units<<endl;
    cout<<" The Sum of the digits is : "<< units + tens + hundreds<<endl;

    return 0;
}
