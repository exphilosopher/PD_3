#include<iostream>
using namespace std;
main()
{ 
 int numbers[15];
 cout<<"Enter 15 numbers:\n";
 for(int i=0;i<15;i++){ cin>>numbers[i];}
 int sum1 = numbers[0]+numbers[1]+numbers[2]+numbers[3]+numbers[4];
 int product2 = numbers[5]*numbers[6]*numbers[7]*numbers[8]*numbers[9];
 int difference3 = numbers[10]- numbers[11]- numbers[12]- numbers[13]- numbers[14];
 int sum4 = sum1 + product2;
 int final_result = sum4 - difference3;
 cout<<"\nFinal result:"<< final_result<<endl;
}