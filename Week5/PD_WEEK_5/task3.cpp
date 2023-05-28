#include <iostream>
#include <windows.h>
using namespace std;
float taxcalculator(char vehiclecode, float vehicleprice);
main()
{
	float vehicleprice, priceaftertax;
	char vehiclecode;
	cout << "Enter Vehicle Price:$ ";
	cin >> vehicleprice;
	cout << "Enter Vehicle Code: ";
	cin >> vehiclecode;
	priceaftertax = taxcalculator(vehiclecode, vehicleprice);
	cout << "Price after tax will be:$ " << priceaftertax << endl;	

}
float taxcalculator(char vehiclecode, float vehicleprice)
{
	float taxpercentage, taxamount, taxedprice;
	if (vehiclecode == 'M')
	{
	 taxpercentage = 0.06;
	 taxamount = vehicleprice * taxpercentage;
	 taxedprice = vehicleprice + taxamount;
	 return taxedprice;
	}

	if (vehiclecode == 'E')
	{
	 taxpercentage = 0.08;
	 taxamount = vehicleprice * taxpercentage;
	 taxedprice = vehicleprice + taxamount;
	 return taxedprice;
	}
		if (vehiclecode == 'S')
	{
	 taxpercentage = 0.1;
	 taxamount = vehicleprice * taxpercentage;
	 taxedprice = vehicleprice + taxamount;
	 return taxedprice;
	}
		if (vehiclecode == 'V')
	{
	 taxpercentage = 0.12;
	 taxamount = vehicleprice * taxpercentage;
	 taxedprice = vehicleprice + taxamount;
	 return taxedprice;
	}
		if (vehiclecode == 'T')
	{
	 taxpercentage = 0.15;
	 taxamount = vehicleprice * taxpercentage;
	 taxedprice = vehicleprice + taxamount;
	 return taxedprice;
	}
}
