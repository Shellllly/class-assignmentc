#include <iostream>
// #include <string>
using namespace std;

int main(){
    //variable declaration
    float num1,num2;
     cout<<"Enter 2 numbers: ";
     cin>>num1>>num2;

     //addition
     float sum = num1 + num2;
     cout>> "sum: "<<sum<<endl;
     
     //subtraction
     float difference = num1 - num2;
     cout>> "difference: "<<difference<<endl;

     
     //multiplication
     float product = num1 * num2;
     cout>> "product: "<<product<<endl;

     
     //division
     if(num2!=0){
        float quotient =  num1/num2;
         cout>> "quotient: "<<quotient<<endl;

     } else{
         cout>> "cannot be divided by 0 "<<endl;

     }
     

    return 0;
    
}