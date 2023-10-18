#include <iostream>
// #include <string>
using namespace std;

// global variables
 int globalVar = 20;
 //let's declare a constant
 const int age =25;

  void myFunction() {
// we are in the function block 
//lets declare and initialize a local variable for demonstartion
int localVar = 20;
cout << " Local variable inside myFunction() is: " << localVar <<endl;

 }
int main(){

    //invoke/call the function in the main method
    myFunction();

    cout<< globalVar<<endl;
    return 0;
    
}