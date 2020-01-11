#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Dice{
private:
    int size, lastR;
public:
    Dice();
    Dice(int size1, int lastR1);
    int getSize()const{
    return size;
    }
    int getLastR()const{
    return lastR;
    }

    void setSize(int size1){
    size = size1;
    }
    void setLastR(int lastR1){
    lastR=lastR1;
    }

    int Roll();




};
// default nadolu
Dice::Dice{

size=6;
lastR=-1;
}
Dice::Dice(int size1,int lastR1){
size=size1;
lastR=lastR1;

}
int Dice::Roll(){

lastR=rand()%size+1}
int main(){





return 0;
}
