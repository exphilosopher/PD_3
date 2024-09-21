#include<iostream>
using namespace std;
main()
{ 
int age,moves;

cout<<"enter the person's age: ";
cin>> age;

cout<<"enter the numbers of times they've moved: ";
cin>> moves;
if(moves==0){
  cout<<"average numbers lived in the same house: "<<age<<endl;
 }else{
  int average = age/(moves+1);
 cout<<"average number of years lived in the same house: "<<average<<endl;
 }
}