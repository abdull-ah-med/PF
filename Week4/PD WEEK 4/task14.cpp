#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

string name1, name2;
double option, matricmarks1, intermarks1, ecatmarks1, matricmarks2, intermarks2, ecatmarks2;
double aggregate1, aggregate2;
void optionone();
void optiontwo();
void optionthree();
void optionfour();
void optionfive();

main() {
	while (true)
	{
		system("cls");
		cout << "************************************" << endl;
		cout << "        University Admission        " << endl;
		cout << "          Management System         " << endl;
		cout << "************************************" << endl;
		cout << endl;
		cout << endl;
		cout << "1. Enter Details of Student 1" << endl;
		cout << "2. Enter Details of Student 2" << endl;
		cout << "3. Calculate Aggregate of Student 1" << endl;
		cout << "4. Calculate Aggregate of Student 2" << endl;
		cout << "5. Show Student with higher aggregate" << endl;
		cout << endl;
		cout << "Select Option: ";
		cin >> option;
		if (option == 1)
		{
			optionone();
		}
		if (option == 2)
		{
			optiontwo();
		}

		if (option == 3)
		{		
			optionthree();
		}
		if (option == 4)
		{
			optionfour();
		}
		if (option == 5)
		{
			optionfive();
		}
	}
}
void optionone()
{
	system("cls");
	cout << endl;
	cout << "You have chosen option " << option << endl;
	cout << "Enter Name: ";
	cin.ignore();
	getline(std::cin, name1);
	cout << "Enter your matric marks(out of 1100): ";
	cin >> matricmarks1;
	cout << "Enter your Inter Marks(out of 550): ";
	cin >> intermarks1;
	cout << "Enter your ECAT Marks(out of 400): ";
	cin >> ecatmarks1;
	system("pause");
}
void optiontwo()
{
	system("cls");
	cout << endl;
	cout << "You have chosen option " << option << endl;
	cout << "Enter Name: ";
	cin.ignore();
	getline(std::cin, name2);
	cout << "Enter your matric marks(out of 1100): ";
	cin >> matricmarks2;
	cout << "Enter your Inter Marks(out of 550): ";
	cin >> intermarks2;
	cout << "Enter your ECAT Marks(out of 400): ";
	cin >> ecatmarks2;
	system("pause");

}
void optionthree()
{
	cout << "You have chosen option " << option << endl;
	double matricpercentage, interpercentage, ecatpercentage;
	system("cls");
	matricpercentage = (matricmarks1 / 1100) * 30;
	interpercentage = (intermarks1 / 1100) * 30;
	ecatpercentage = (ecatmarks1 / 400) * 40;
	aggregate1 = matricpercentage + interpercentage + ecatpercentage;
	cout << name1 << "'s Aggregate is " << aggregate1 << "%" << endl;
	cout << endl;
	system("pause");
}
void optionfour()
{
	cout << "You have chosen option " << option << endl;
	double matricpercentage, interpercentage, ecatpercentage;
	system("cls");
	matricpercentage = (matricmarks2 / 1100) * 30;
	interpercentage = (intermarks2 / 1100) * 30;
	ecatpercentage = (ecatmarks2 / 400) * 40;
	aggregate2 = matricpercentage + interpercentage + ecatpercentage;
	cout << name2 << "'s Aggregate is " << aggregate2 << "%" << endl;
	cout << endl;
	system("pause");
}
void optionfive()
{
	system("cls");
	cout << "You have chosen option " << option << endl;
	cout << endl;
	if (aggregate1 > aggregate2)
	{
		cout << name1 << " has more aggregate then " << name2 << endl;
	}
	if (aggregate1 < aggregate2)
	{
		cout << name2 << " has more aggregate then " << name1 << endl;
	}
	cout << endl;
	system("pause");
}