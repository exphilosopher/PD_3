#include<iostream>
using namespace std;
main()
{ 
int sum = 0,num;
for (int i=0;i<5;i++){
cout<<"enter an integer: ";
cin>>num;
sum +=num;//sum = sum+num;
}
cout<<"the sum of the integers is: "<<sum<<endl;
}