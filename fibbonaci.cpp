#include <iostream>

//Fibbonaci function , returns the nth number in the fibbonaci sequence
using namespace std;
int fibb(int term);
int main(){
    int test = fibb(20);
    cout<<test;
    return 0;
}


int fibb(int term){
    if(term>1){
        return fibb(term-1) + fibb(term-2);
    }
    else if(term==1){
        return 1;
    }
    else{
        return 0;
    }
}