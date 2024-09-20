#include<iostream>
using namespace std;
main()
{
 float metre=0;
 int second=0;
 cout<<"the distance is";
 cin>> metre;
 cout<<"the time is";
 cin>>second;
 float v = metre/second;
 cout<<"the intial velocity is "<<v<<endl;
 float a = metre/(second*second);
 cout<<"the acceleration is "<<a<<endl;
 float u = metre/(second*second)*(second)+(metre/second);
 cout<<"the final velocity is "<<u<<endl;
}