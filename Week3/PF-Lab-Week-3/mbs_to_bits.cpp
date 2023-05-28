#include <iostream>
using namespace std;
main(){

double onemb_to_kb;
onemb_to_kb = 1024;

double onekb_to_byte;
onekb_to_byte = 1024;

double onebyte_to_bits;
onebyte_to_bits = 8;



double value_in_mbs;
double value_in_kbs;
double value_in_bytes;
double value_in_bits;



cout << "Enter the value in MBs: ";
cin >> value_in_mbs;
value_in_kbs = value_in_mbs * onemb_to_kb;
value_in_bytes = value_in_kbs * onekb_to_byte;
value_in_bits = value_in_bytes * onebyte_to_bits;

cout << "The value in Bits: " << value_in_bits << endl;
}