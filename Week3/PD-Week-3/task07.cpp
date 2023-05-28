#include <iostream>
using namespace std;
main(){
string movie_name;
int adult_ticket_price;
int child_ticket_price;
int adult_tickets_sold;
int child_tickets_sold;
int donation_percentage;
int total_amount;
int donation_amount;
int amount_after_donation;


cout << "Enter Movie Name : ";
cin >> movie_name;
cout << "Enter Adult Ticket Price: ";
cin >> adult_ticket_price;
cout << "Enter Child Ticket Price: ";
cin >> child_ticket_price;
cout << "Enter Number of Adult Tickets Sold: ";
cin >> adult_tickets_sold;
cout << "Enter Number of Child Tickets Sold: ";
cin >> child_tickets_sold;
cout << "Enter the Donation Percentage: ";
cin >> donation_percentage;

total_amount = (adult_ticket_price * adult_tickets_sold) + (child_ticket_price * child_tickets_sold);
donation_amount = total_amount * 0.1;
amount_after_donation = total_amount - donation_amount;

cout << "--------------------------------------------------------------------" << endl;
cout << "Total Amount Generated: " << total_amount << endl;
cout << "Amount After Donation: " << amount_after_donation << endl;
}