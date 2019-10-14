#include <iostream>
using namespace std;

int main(){
    int number;

    cout<<"Vuvedete chislo : ";
    cin>>number;

    cout<< ((number%2) ? "ODD" : "Even") <<endl;

    return 0;
}
