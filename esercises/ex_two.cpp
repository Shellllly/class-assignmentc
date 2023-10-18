#include <iostream>
// #include <string>
using namespace std;

int main(){
    //variable declaration
    float num1,num2, sum,difference, product,quotient;
     cout<<"Enter 2 numbers: ";
     cin>>num1>>num2;

     //addition
     sum = num1 + num2;
     cout<<"sum: "<<sum<<endl;
     
     //subtraction
     difference = num1 - num2;
     cout<< "difference: "<<difference<<endl;

     
     //multiplication
     product = num1 * num2;
     cout<< "product: "<<product<<endl;

     
     //division
     if(num2!=0){
        quotient =  num1/num2;
         cout<<"quotient: "<<quotient<<endl;

     } else{
         cout<<"cannot be divided by 0 "<<endl;

     }
     

    return 0;
    
}