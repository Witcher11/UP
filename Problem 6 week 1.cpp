#include <iostream>
using namespace std;
int main(){
 int year;
 cout<<"Enter a year: ";
 cin>>year;
   /* if the year can be evenly divided by 4 but NOT 100 unless its 400  */

if((year%4==0 && year%100!=0) ||  (year%4==0 && year%400==0) ){
    cout<<"This year is a leap year! ";
                            }

 else{
    cout<<"This year is not a leap year!" ;
 }

return 0;













}
