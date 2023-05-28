#include <iostream>
using namespace std;
main(){
float veg_price_perkg;
float fruit_price_perkg;
int total_veges_sold;
int total_fruits_sold;
float total_veges_earning;
float total_fruits_earning;
float coin_to_rp;
float rp_to_coin;
float earning_in_coins;
float earnings_in_rps;
rp_to_coin = 1.94;
coin_to_rp = 1/1.94;

cout << "Enter the Price of Vegetables Per Kg in Coins: ";
cin >> veg_price_perkg;
cout << "Enter the price of Fruits Per Kg in Coins: ";
cin >> fruit_price_perkg;
cout << "Enter the amount of Vegetables sold in Kgs: ";
cin >> total_veges_sold;
cout << "Enter the amount of Fruits sold in Kgs: ";
cin >> total_fruits_sold;
total_veges_earning = veg_price_perkg * total_veges_sold;
total_fruits_earning = fruit_price_perkg * total_fruits_sold;
earning_in_coins = total_veges_earning + total_fruits_earning;
earnings_in_rps = earning_in_coins * coin_to_rp;

cout << "------------------------------------------------------------" << endl;
cout << "The Total amount generated in Rps is: " << earnings_in_rps << " Rps" << endl;
}