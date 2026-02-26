#include <iostream>
using namespace std;

//Temperature conversion program in C++ using if statements 
int main(){
    double val;
    double output;
    string unit;
    cout<<"Enter your unit:";
    cin>>unit;
    cout<<"Enter your value:";
    cin>>val;
    if(unit=="C"){
        output = (val*1.8)+32.0; 
        cout<<"Your celscius converted value:"<<output<<endl;
    }
    else if(unit=="F"){

        output = (val-32.0)*(double)5/9;
        cout<< "Your Fahrenheit converted value:"<<output<<endl;
    }
    else{
        cout<<"Invalid unit";
    }
    return 0;
}