#include <iostream>

using namespace std;

int main(){
    int a;

    cout<<"Vuvedete tricifreno chislo: ";
    cin>>a;


    if(a%2==0 && a%3 == 0 && a%5 == 0){
        cout<<"The number works"<<endl;
    }
    else{
        cout<<"The number doesnt work"<<endl;
    }


    return 0;
}
