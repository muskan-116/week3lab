#include <iostream>
using namespace std;
int main()
{
string name;
float matric;
float A;
float inter;
float B;
float ecat;
float C;
float aggregate;
cout<<"enter name: ";
cin>>name;
cout<<"enter matric number: ";
cin>>matric;
A=0.1*(matric/1100.0)*100;
cout<<"A: "<<A;
cout<<"enter inter number : ";
cin>>inter;
B=0.4*(inter/550.0)*100;
cout<<"B: "<<B;
cout<<"enter ecat number: ";
cin>>ecat;
C=0.5*(ecat/400.0)*100;
cout<<"C: "<<C;
aggregate=A+B+C;
cout<<"aggregate is: "<<aggregate;
}


