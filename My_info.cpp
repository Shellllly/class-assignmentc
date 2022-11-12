#include <iostream>
// #include <string>
using namespace std;

int main()
{
    string Fname,Lname,Funame,Fav_Meal,Fav_Movie;
    
    Fname="Kim"; 
    cout<<"Enter first name:"<<Fname<<endl;

    Lname="Boyeom";
    cout<<"Enter last name:"<<Lname<<endl;
    Funame= Fname+ Lname;
    cout<<"Enter full name:"<<Funame<<endl;
    Fav_Meal="Kirtoffen";
    cout<<"Enter favourite meal:"<<Fav_Meal<<endl;
    Fav_Movie= "its okay not to be okay";
    cout<<"Enter favourite movie:"<<Fav_Movie<<endl;
    return 0;
}