#include<iostream>
using namespace std;

int main(){
    int C;
    cout<<"Enter the Temperature in Celcius : ";
    cin>>C;

    // Here we use formula to convert Celcius int Farenheit
    // F = (C*9/5)+32;

    int F;
    F = (C*9/5)+32;
    cout<<"Temperature in Farenheit is : "<<F<<endl;
}