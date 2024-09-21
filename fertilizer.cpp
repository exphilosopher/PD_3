#include<iostream>
using namespace std;
main()
{ 
int weight;
int cost;
int area;
 
cout<<"enter weight in pounds";
cin>> weight;
cout<<"enter cost of the bag";
cin>> cost;
cout<<"enter area covered in sq feet";
cin>> area;
int COST=cost/weight ;
cout<<"cost of the bag per pound is "<<COST<<endl;
int AREA=cost/area ;
cout<<"cost of fertilizing per sq feet is "<<AREA;
}