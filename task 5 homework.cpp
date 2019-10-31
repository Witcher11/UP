// Imam i vtori variant no ne znaeh koi e po-priemliv
// i za tova sum skril drugiq ot dolu sus komentari
#include <iostream>
using namespace std;
int main()
{
int a = 0;
int rows = 1;
int col = 1;
int i = 1;

cout<<"Enter no. of rows(odd number) :"<<endl;
cin>>a;
if(a%2!=0)
{
    rows = a;
    while(rows >= 1)
    {
    col = 1;
        while(col <= a)
        {
            if((rows==1)||(rows==a))
                cout<<"*";
            else
            {
            if((col==rows)||(i==col))
                cout<<"*";
                else
                cout<<" ";
            }
            col = col + 1;
            }
            i = i + 1;
            cout<<endl;
            rows--;
        }
    }
    else
        cout<<"enter a odd number please"<<endl;
    /*int row, col;
    int size;
    int diagA, diagB;

    cout << "Enter an odd number for the hourglass ";
    cin >> size;
    if(size%2!=0){
    for ( row=0; row<size; row++ ) {
    for ( col=0; col<size; col++ ) {

    diagA = row;
    diagB = size-row-1;

    if ( diagA <= diagB ){
    if ( col >= diagA && col <= diagB )
      cout << "*";
    else
      cout << " ";
    }
    else {
    if (  col >= diagB && col <= diagA  )
      cout << "*";
    else
      cout << " ";
    }
    }
    cout << endl;
    }

    cout << endl;
    }
    else
    cout<<"please enter an odd number ";
    */
    return 0;
}
