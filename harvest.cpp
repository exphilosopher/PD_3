#include<iostream>
using namespace std;
main()
{ 
 float coins_per_rp = 1.94;
 float veg_price_per_kg, fruit_price_per_kg;
 int total_veg_kg, total_fruit_kg;
 cout<<"Enter vegetable price per kilogram(in coins): ";
 cin>>veg_price_per_kg;
 cout<<"Enter fruit price per kilogram(in coins): ";
 cin>>fruit_price_per_kg;
 cout<<"Enter total kilograms of vegetables: ";
 cin>>total_veg_kg;
 cout<<"Enter total kilograms of fruits: ";
 cin>>total_fruit_kg;
 
 float total_veg_earnings = veg_price_per_kg*total_veg_kg;
 float total_fruit_earnings = fruit_price_per_kg*total_fruit_kg;
 float total_earnings_in_coins = total_veg_earnings+total_fruit_earnings;

 float total_earnings_in_rp = total_earnings_in_rp = total_earnings_in_coins/coins_per_rp;
 cout<<"Total earnings in Rupees(Rps): "<<total_earnings_in_rp;
}