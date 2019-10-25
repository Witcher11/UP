#include <iostream>
using namespace std;

int main(){
    int i,input; //ot 0 do 10
    cout<<" enter input: ";cin>>input;
if(input<0 ||input>10){
        cout<<"please enter a number between 0 and 10"<<endl;
        return 1;}
    for( i=input;i<100;i++){
            if(i%2==0&&  i%3==0)
                cout<<i<<" ";

    }

return 0;
}
