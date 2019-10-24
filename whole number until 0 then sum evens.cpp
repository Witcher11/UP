#include <iostream>
using namespace std;
int main(){
int number,sum=0,count=0; // sum na chetnite
cout<<"enter number: ";cin>>number;

while(number!=0){

if(number%2==0){
sum+=number;
count++;
}
cout<<" enter number : ";cin>>number;

}

if(count!=0){
 cout<<" average is : "<<double(sum)/count<<endl;
}
else
    cout<<" No even numbers";







}
