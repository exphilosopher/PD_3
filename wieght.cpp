#include<iostream>
using namespace std;
main()
{
 string name;
 float target;
 int days;
 cout<<"enter name";
 cin>>name;
 cout<<"enter target weight";
 cin>>target;

 days=target*15;
 cout<<name<<"will need"<<days<<" days to lose"<<target<<"kilograms.";
}