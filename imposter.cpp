#include<iostream>
using namespace std;
main()
{
 int imp;
 int play;
 cout<<"enter imposter count";
 cin>>imp;
 cout<<"enter player count";
 cin>>play;
 float chance = 100*(float(imp)/play);
 cout<<"the chance of being an imposter is "<<chance;
}