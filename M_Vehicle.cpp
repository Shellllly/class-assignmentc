#include <iostream>
// #include <string>
using namespace std;

int main()
{
    double sellingprice,buyingprice,profit;
    cout<< "Enter the selling price"<<endl;
    cin>>sellingprice;
    cout<<"Enter the buying price"<<endl;
    cin>>buyingprice;
    //logical calculation
    profit= sellingprice-buyingprice;
    cout<<"The profit is:"<<profit<<"\n"<<endl;

    return 0;
}