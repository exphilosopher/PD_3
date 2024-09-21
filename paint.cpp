#include<iostream>
using namespace std;
main()
{ 
 int n,w,h,area_per_wall,num_of_walls;
 cout<<"enter the number of square meters you can paint: ";
 cin>>n;
 
 cout<<"width of the single wall(in meters): ";
 cin>> w;
 cout<<"height of the single wall(in meters): ";
 cin>> h;
 
 area_per_wall=w*h;
 num_of_walls=n/area_per_wall;
 
 cout<<"you can paint"<<num_of_walls<<"complete_walls."<< endl; 
}