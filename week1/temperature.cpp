#include <iostream>
using namespace std;

int main() {
   double temperature;
   char unit;
   cout<<"Enter the temperature in this format(12.0): \n";
   cin>>temperature;
   if(cin.fail()) {
    cout << "Error: invalid temperature input\n";
    return 1;
}
   cout<<"Enter the unit of the temperature(C or F): \n";
   cin>>unit;
   if(unit=='C'|| unit=='c'){
    double f;
     f=((9.0/5.0)*temperature)+32;
     cout<<"In farenheit = "<<f<<"\n";
   }
   else if (unit=='F'|| unit=='f'){
    double c;
        c=(5.0/9.0)*(temperature-32);
        cout<<"In celsius = "<<c<<"\n";
   }
   else{
    cout<<"Invalid Input\n";
   }
    return 0;
}