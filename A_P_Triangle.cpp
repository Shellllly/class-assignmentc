#include <iostream>
// #include <string>
using namespace std;

int main(){
    //variable declaration
    int base,height,hypotenus,area,perimeter;
    //capture input from the user
    base=10;
    cin>>base;
    height=7;
    cin>>height;
    hypotenus=12;
    cin>>hypotenus;
    //logic calculations/processing
    perimeter = base+height+hypotenus;
    cout <<"Perimeter of triangle where B is" <<base<<"H is"<<height<<"Hy is"<<hypotenus<<"="<<perimeter<<endl;
    area= 1/2*base*height;
    cout << "Area of a triangle whose height is " <<height<< " and whose base is "<<base<<"="<< perimeter <<endl;

    return 0;
    
}