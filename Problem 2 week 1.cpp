#include <iostream>

using namespace std;

int main(){
    int A, B,c;


    cout<<"Enter A and B:";
    cin>>A>>B;


    cout<<"Before the swap..."<<endl;
    cout<<"A: "<<A;
    cout<<"\nB: "<<B;

    c = A;
    A = B;
    B = c;



    cout<<"\n\nAfter the swap..."<<endl;
    cout<<"A: "<<A;
    cout<<"\nB: "<<B;

    return 0;
}
