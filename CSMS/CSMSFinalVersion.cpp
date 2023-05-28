#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
using namespace std;
// Global Variables
const int arrsize = 30;
int carcount = 0;
int admincount = 1;
int clientcount = 0;
int employeecount = 0;
int bookingidcount = 0;
int appointmentcount = 0;
string menu, addagain, user_accessing;
string adminname = "Sajjad", adminusername = "Admin", adminpassword = "admin";
string employeesname[arrsize];
string employeesid[arrsize];
string employeespassword[arrsize];
string clientusernames[arrsize];
string clientpasswords[arrsize];
string carsname[arrsize];
string carcolors[arrsize];
string enginespecs[arrsize];
string tagline[arrsize];
string appointmentnames[arrsize];
string appointmenttype[arrsize];
int prices[arrsize];
int pricessortedlowtohigh[arrsize];
bool carAvailable[arrsize];
int bookingIds[arrsize];
string bookingNames[arrsize];
string bookingCarNames[arrsize];
string bookingCarColors[arrsize];
string bookingStatus[arrsize];
// Prototypes
void header();
void menuheader();
int MainMenu();
void returnPrevious();
bool addAnother();
bool delConfirmation();
string getCarName();
void showCar(int carnumber);
int LoginAuth(string userid, string password);
bool IncorrectInfo();
int findCar(string name);
int findSpecificCar(string carname, string carcolor);
void addCar(string carname, string color, int carnumber);
void showBooking(int bookingidindex);
void removeCar(int carnumber);
void adminInterface();
void AdminHeader(int option);
int adminMainMenu();
int checkEmployeeID(string id);
void addEmployee(string name, string id, string pass);
void showEmployee(int employeenumber);
void delEmployee(int employeenumber);
void updateCarAvailability(int carnumber);
int findBookingIDIndex(int bookingid);
void IncorrectInput();
void carNotFound();
void employeeInterface();
void employeeHeader(int option);
int employeeMainMenu(int option);
int checkBookingDuplication(string bookingname, string bookingcarname, string bookingcarcolor);
void saveBooking(string bookingname, string bookingcarname, string bookingcarcolor, int option);
void duplicateBooking(int bookingidindex, string bookingname, string bookingcarname, string bookingcarcolor, int option);
int calculateGrossPrice(int carnumber);
int checkFilerStatus();
int calculateFinalPrice(int grossprice, int filerstatus);
void showPrice(int price, int carnumber, int filerstatus);
void requestBookingCancellation(int bookingidnumber);
void updateCarInfo(int carnumber);
void createBookingId();
void showEmployeeDatabase();
void completeBooking();
bool checkVehicleAvailability(string carname, string carcolor);
void processVehicleAvailability(string available, int carnumber);
char getCharAtxy(short int x, short int y);
int bookingidgenerator();
void showAllCars();
int takeBookingId();
int intValidation(int number);
int usermenuinterface();
void saveUser(string username, string password);
bool checkclientUsername(string username);
void userSignUp();
void deleteBooking(int bookingidindex);
void processBookingdeletion(int bookingidindex);
void calculatePrice();
void sortprice();
int usersigninInterface();
bool usersigninauth(string username, string password);
bool userSignin();
void createBooking(int option);
void findshowBooking();
void saveAppointment(string name, int service);
void createAppointment();
string getField(string record, int field);
void userHeader();
void loadCarsData();
void storeCarsData();
void loadBookingData();
void storeBookingData();
void loadEmployeeData();
void storeEmployeeData();
void storeClientData();
void loadClientData();
void loadAppointmentData();
void storeAppointmentData();
void updateAppointmentData();
void updateBookingData();
void updateClientData();
void updateCarsData();
void updateEmployeeData();
void showCars();
string checkstringvalidation(string check);
main()
{
    loadEmployeeData();
    loadCarsData();
    loadAppointmentData();
    loadBookingData();
    loadClientData();
    int mainmenuoption;
    while (mainmenuoption != 7)
    {
        menu = "Main Menu";
        user_accessing = " ";
        header();
        mainmenuoption = MainMenu();
        mainmenuoption = intValidation(mainmenuoption);
        if (mainmenuoption == 1)
        {
            header();
            showAllCars();
            returnPrevious();
        }
        else if (mainmenuoption == 2)
        {
            header();
            calculatePrice();
            cout << endl;
            returnPrevious();
        }
        else if (mainmenuoption == 3)
        {
            header();
            string carname, carcolor, bookingname;
            int carnumber;
            cout << "Enter Car Name : ";
            getline(cin.ignore(), carname);
            carname = checkstringvalidation(carname);
            cout << "Enter " << carname << " Color : ";
            getline(cin, carcolor);
            carcolor = checkstringvalidation(carcolor);
            carnumber = findSpecificCar(carname, carcolor);
            cout << endl;
            if (carnumber < carcount)
            {
                showCar(carnumber);
            }
            else
            {
                carNotFound();
            }
            cout << endl;
            returnPrevious();
        }
        else if (mainmenuoption == 4)
        {
            header();
            createAppointment();
            cout << endl;
            cout << "Your Appointment has been created and is valid for 24 Hours" << endl;
            returnPrevious();
        }
        else if (mainmenuoption == 5)
        {
            userHeader();
            int useroption = usermenuinterface();
            useroption = intValidation(useroption);
            if (useroption == 1)
            {
                userHeader();
                cout << endl;
                userSignUp();
                cout << endl;
            }
            else if (useroption == 2)
            {
                userHeader();
                bool signinsuccess = userSignin();
                if (signinsuccess == true)
                {
                    int usersigninmenu = 1;
                    while (usersigninmenu != 4)
                    {
                        userHeader();
                        usersigninmenu = usersigninInterface();
                        usersigninmenu = intValidation(usersigninmenu);
                        if (usersigninmenu == 1)
                        {
                            userHeader();
                            findshowBooking();
                            cout << endl;
                            returnPrevious();
                        }
                        else if (usersigninmenu == 2)
                        {
                            userHeader();
                            createBooking(2);
                            cout << endl;
                            returnPrevious();
                        }
                        else if (usersigninmenu == 3)
                        {
                            userHeader();
                            int bookingid, bookingidnumber;
                            bookingid = takeBookingId();
                            bookingid = intValidation(bookingid);
                            bookingidnumber = findBookingIDIndex(bookingid);
                            if (bookingidnumber < bookingidcount)
                            {
                                showBooking(bookingidnumber);
                                requestBookingCancellation(bookingidnumber);
                            }
                            else
                            {
                                cout << "Booking Not Found" << endl;
                            }
                            returnPrevious();
                        }
                    }
                }
                else
                {
                    cout << "You've Entered Incorrect ID or Password" << endl;
                }
            }
        }
        else if (mainmenuoption == 6)
        {
            bool signin = true;
            while (signin == true)
            {
                menu = "Staff Login";
                menuheader();
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    exit;
                }
                int signinoption;
                string tempid, temppass;
                cout << "Enter User ID : ";
                getline(cin.ignore(), tempid);
                tempid = checkstringvalidation(tempid);
                cout << "Enter Password : ";
                getline(cin, temppass);
                temppass = checkstringvalidation(temppass);
                signinoption = LoginAuth(tempid, temppass);
                if (signinoption == 1)
                {
                    employeeInterface();
                    break;
                }
                else if (signinoption == 2)
                {
                    adminInterface();
                    break;
                }
                else
                {
                    signin = IncorrectInfo();
                }
            }
        }
    }
}
int usersigninInterface()
{
    int option;
    cout << "Welcome" << endl;
    cout << "1. Check Booking" << endl;
    cout << "2. Apply Booking" << endl;
    cout << "3. Request Booking Cancellation" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter option : ";
    cin >> option;
    return option;
}
void userHeader()
{
    header();
    cout << "                                               Honda : The Power of Dreams" << endl;
    cout << "User Menu" << endl;
    cout << "User Accessing : " << user_accessing << endl;
}
void header()
{

    system("cls");
    cout << "                                     ***********************************************************************************" << endl;
    cout << "                                     ***********************************************************************************" << endl;
    cout << "                                     ******                 CAR SHOWROOM MANAGEMENT SYSTEM                        ******" << endl;
    cout << "                                     ***********************************************************************************" << endl;
    cout << "                                     ***********************************************************************************" << endl;
    cout << endl;
}
void menuheader()
{
    header();
    cout << menu << endl;
    cout << "User Accessing : " << user_accessing << endl;
    cout << endl;
}
int MainMenu()
{
    int mainoption;
    cout << "Welcome. Please Select an option to proceed." << endl;
    cout << endl;
    cout << "1. See the latest models." << endl;
    cout << "2. See the pricing for the car you like." << endl;
    cout << "3. Check the availability of vehicles." << endl;
    cout << "4. Book an appointment" << endl;
    cout << "5. Login as customer to Book, track, and manage your bookings." << endl;
    cout << "6. Staff Login." << endl;
    cout << "7. Exit" << endl;
    cout << endl;
    cout << "Please Select an option.: ";
    cin >> mainoption;
    return mainoption;
}
int LoginAuth(string userid, string password)
{
    int userrole = 3;
    for (int i = 0; i < employeecount; i++)
    {
        if ((userid == employeesid[i]) && (password == employeespassword[i]))
        {
            userrole = 1;
            user_accessing = employeesname[i];
            return userrole;
            break;
        }
    }
    for (int i = 0; i < admincount; i++)
    {
        if ((userid == adminusername) && (password == adminpassword))
        {
            userrole = 2;
            user_accessing = adminname;
            return userrole;
            break;
        }
    }
    return userrole;
}
bool IncorrectInfo()
{
    bool tryagain;
    int tryagainoption;
    cout << "\nYou Have Entered Incorrect Info." << endl;
    cout << "1. Try Again" << endl;
    cout << "2. Return To Previous Menu" << endl;
    cin >> tryagainoption;
    if (tryagainoption == 1)
    {
        tryagain = true;
    }
    else
    {
        tryagain = false;
    }
    return tryagain;
}
void adminInterface()
{
    int adminmainmenuoption;
    while (adminmainmenuoption != 13)
    {
        AdminHeader(0);
        adminmainmenuoption = adminMainMenu();
        adminmainmenuoption = intValidation(adminmainmenuoption);
        if (adminmainmenuoption == 1)
        {
            bool addemployee = true;
            int employeenumber;
            string employeename, employeeid, employeepass;
            while (addemployee == true)
            {
                AdminHeader(adminmainmenuoption);
                cout << "Enter Employee Name : ";
                getline(cin.ignore(), employeename);
                employeename = checkstringvalidation(employeename);
                cout << "Enter Employee ID : ";
                cin >> employeeid;
                employeeid = checkstringvalidation(employeeid);
                cout << "Enter Employee Password : ";
                cin >> employeepass;
                employeepass = checkstringvalidation(employeepass);
                employeenumber = checkEmployeeID(employeeid);
                if (employeenumber > employeecount)
                {
                    addEmployee(employeename, employeeid, employeepass);
                    cout << "Employee Added" << endl;
                    cout << endl;
                }
                else if (employeenumber < employeecount)
                {
                    cout << "User ID Already Exists" << endl;
                    cout << endl;
                }
                addemployee = addAnother();
            }
        }
        else if (adminmainmenuoption == 2)
        {
            AdminHeader(adminmainmenuoption);
            string employeeid;
            int employeenumber;
            bool deletionconfirmation;
            cout << "Enter Employee ID : ";
            cin >> employeeid;
            employeeid = checkstringvalidation(employeeid);
            employeenumber = checkEmployeeID(employeeid);
            if (employeenumber < employeecount)
            {
                cout << "User Found" << endl;
                showEmployee(employeenumber);
                cout << endl;
                deletionconfirmation = delConfirmation();
                if (deletionconfirmation == true)
                {
                    delEmployee(employeenumber);
                    cout << "\nEmployee Removed" << endl;
                }
            }
            else if (employeenumber > employeecount)
            {
                cout << "Employee Not Found" << endl;
            }
            returnPrevious();
        }
        else if (adminmainmenuoption == 3)
        {
            AdminHeader(adminmainmenuoption);
            showEmployeeDatabase();
            returnPrevious();
        }
        else if (adminmainmenuoption == 4)
        {
            bool addcar = true;
            while (addcar == true)
            {
                AdminHeader(adminmainmenuoption);
                string carname, carcolor, enginespce, price;
                int carnumber;
                cout << "Enter Car Name : ";
                getline(cin.ignore(), carname);
                carname = checkstringvalidation(carname);
                cout << "Enter " << carname << " Color : ";
                getline(cin, carcolor);
                carcolor = checkstringvalidation(carcolor);
                carnumber = findSpecificCar(carname, carcolor);
                if (carnumber < carcount)
                {
                    cout << "\nCar Already Exists" << endl;
                    cout << endl;
                }
                else
                {
                    addCar(carname, carcolor, carcount);
                    carcount++;
                    cout << "\nCar Has Been Added" << endl;
                    cout << endl;
                }
                addcar = addAnother();
            }
        }
        else if (adminmainmenuoption == 5)
        {
            AdminHeader(adminmainmenuoption);
            string carname, carcolor;
            int carnumber;
            cout << "Enter Car Name : ";
            getline(cin.ignore(), carname);
            carname = checkstringvalidation(carname);
            cout << "Enter " << carname << " Color : ";
            getline(cin, carcolor);
            carcolor = checkstringvalidation(carcolor);
            carnumber = findSpecificCar(carname, carcolor);
            cout << endl;
            if (carnumber < carcount)
            {
                showCar(carnumber);
                updateCarInfo(carnumber);
                cout << "Car Info Has Been Updated" << endl;
                cout << endl;
            }
            else
            {
                cout << "Car Not Found" << endl;
                cout << endl;
            }
            returnPrevious();
        }
        else if (adminmainmenuoption == 6)
        {
            AdminHeader(adminmainmenuoption);
            string carname, carcolor, rmoption;
            int carnumber;
            cout << "Enter Car Name : ";
            getline(cin.ignore(), carname);
            carname = checkstringvalidation(carname);
            cout << "Enter " << carname << " Color : ";
            getline(cin, carcolor);
            carcolor = checkstringvalidation(carcolor);
            carnumber = findSpecificCar(carname, carcolor);
            if (carnumber < carcount)
            {
                showCar(carnumber);
                cout << "Do You Want to remove this car? ";
                cout << "Enter (Y/N) : ";
                cin >> rmoption;
                rmoption = checkstringvalidation(rmoption);
                if (rmoption == "Y" || rmoption == "y")
                {
                    removeCar(carnumber);
                    cout << "Car Has Been Removed" << endl;
                    cout << endl;
                }
            }
            else
            {
                cout << "Car Not Found" << endl;
                cout << endl;
            }
            returnPrevious();
        }
        else if (adminmainmenuoption == 7)
        {
            bool checkbookings = true;
            while (checkbookings == true)
            {
                AdminHeader(adminmainmenuoption);
                int bookingcheckoption;
                cout << "1. Check a Single Booking" << endl;
                cout << "2. Check all Bookings" << endl;
                cout << "Enter : ";
                cin >> bookingcheckoption;
                bookingcheckoption = intValidation(bookingcheckoption);
                cout << endl;
                if (bookingcheckoption == 1)
                {
                    findshowBooking();
                }
                else if (bookingcheckoption == 2)
                {
                    if (bookingidcount > 0)
                    {
                        for (int i = 0; i < bookingidcount; i++)
                        {
                            showBooking(i);
                            cout << endl;
                        }
                    }
                    else
                    {
                        cout << "No Bookings Filed" << endl;
                    }
                }
                else
                {
                    IncorrectInput();
                }
                checkbookings = addAnother();
            }
        }
        else if (adminmainmenuoption == 8)
        {
            int bookingid, bookingidindex;
            string updatestatus;
            bookingid = takeBookingId();
            bookingid = intValidation(bookingid);
            bookingidindex = findBookingIDIndex(bookingid);
            if (bookingidindex < bookingidcount)
            {
                showBooking(bookingidindex);
                cout << "\nUpdate Status : ";
                getline(cin.ignore(), updatestatus);
                updatestatus = checkstringvalidation(updatestatus);
            }
            else
            {
                cout << "Booking Not Found" << endl;
            }
            returnPrevious();
        }
        else if (adminmainmenuoption == 9)
        {
            AdminHeader(adminmainmenuoption);
            int bookingid, bookingidindex;
            bool deletion;
            bookingid = takeBookingId();
            bookingid = intValidation(bookingid);
            bookingidindex = findBookingIDIndex(bookingid);
            cout << endl;
            if (bookingidindex < bookingidcount)
            {
                showBooking(bookingidindex);
                cout << endl;
                processBookingdeletion(bookingidindex);
            }
            else
            {
                cout << "Booking Not Found" << endl;
            }
            returnPrevious();
        }
        else if (adminmainmenuoption == 10)
        {
            bool updateavailstatus = true;
            while (updateavailstatus == true)
            {
                AdminHeader(adminmainmenuoption);
                int carnumber;
                string carname, carcolor, availbility;
                cout << "Enter Car Name : ";
                getline(cin.ignore(), carname);
                carname = checkstringvalidation(carname);
                cout << "Enter " << carname << " Color : ";
                getline(cin, carcolor);
                carcolor = checkstringvalidation(carcolor);
                carnumber = findSpecificCar(carname, carcolor);
                if (carnumber < carcount)
                {
                    updateCarAvailability(carnumber);
                }
                else
                {
                    carNotFound();
                }
                cout << endl;
                updateavailstatus = addAnother();
            }
        }
        else if (adminmainmenuoption == 11)
        {
            AdminHeader(adminmainmenuoption);
            showAllCars();
            cout << endl;
            returnPrevious();
        }
        else if (adminmainmenuoption == 12)
        {
            employeeInterface();
        }
    }
}
int adminMainMenu()
{
    int adminmenu;
    cout << "Welcome. Please select an option." << endl;
    cout << endl;
    cout << "1. Add New Employee" << endl;
    cout << "2. Remove Employee" << endl;
    cout << "3. Check Employee DataBase." << endl;
    cout << "4. Add New Information" << endl;
    cout << "5. Edit Information" << endl;
    cout << "6. Remove Information" << endl;
    cout << "7. Check Booking Orders" << endl;
    cout << "8. Update Booking Order Status" << endl;
    cout << "9. Remove Booking" << endl;
    cout << "10. Update Availablity Status" << endl;
    cout << "11. Show All Cars" << endl;
    cout << "12. Access Employee Menu" << endl;
    cout << "13. Logout" << endl;
    cout << "Enter : ";
    cin >> adminmenu;
    return adminmenu;
}
void AdminHeader(int option)
{
    menu = "Admin";
    if (option == 1)
    {
        menu = "Admin > Add New Employee";
        addagain = "Add Another Employee";
    }
    else if (option == 2)
    {
        menu = "Admin > Remove Employee";
    }
    else if (option == 3)
    {
        menu = "Admin > Check Employee DataBase";
    }
    else if (option == 4)
    {
        menu = "Admin > Add New Vehicle";
        addagain = "Add Another Vehicle";
    }
    else if (option == 5)
    {
        menu = "Admin > Edit Vehicle Info";
        addagain = "Edit Another Vehicle's Info";
    }
    else if (option == 6)
    {
        menu = "Admin > Remove Vehicle Information";
    }
    else if (option == 7)
    {
        menu = "Admin > Check Bookings";
        addagain = "Check Another Booking";
    }
    else if (option == 8)
    {
        menu = "Admin > Update Bookings";
        addagain = "Update Another Booking";
    }
    else if (option == 9)
    {
        menu = "Admin > Remove Booking";
    }
    else if (option == 10)
    {
        menu = "Admin > Update Availability Status";
        addagain = "Update Another Availabilty Status";
    }
    else if (option == 11)
    {
        menu = "Admin > Show All Cars";
    }
    else if (option == 12)
    {
        menu = "Admin > Accessing Employee Menu";
    }
    else
    {
        menu = "Admin";
    }
    cout << "User Accessing : " << user_accessing << endl;
    menuheader();
}
int checkEmployeeID(string id)
{
    bool employeeduplication = false;
    int employeenumber;
    for (employeenumber = 0; employeenumber < employeecount; employeenumber++)
    {
        if (id == employeesid[employeenumber])
        {
            employeeduplication = true;
            break;
        }
    }
    if (employeeduplication == true)
    {
        return employeenumber;
    }
    else
    {
        employeenumber = employeecount + 1;
    }
    return employeenumber;
}
void addEmployee(string name, string id, string pass)
{
    employeesname[employeecount] = name;
    employeesid[employeecount] = id;
    employeespassword[employeecount] = pass;
    storeEmployeeData();
    employeecount = employeecount + 1;
}
bool addAnother()
{
    bool addanother;
    int option;
    cout << "1. " << addagain << endl;
    cout << "2. Return to Previous Menu" << endl;
    cout << "Enter : ";
    cin >> option;
    option = intValidation(option);
    if (option == 1)
    {
        addanother = true;
    }
    else
    {
        addanother = false;
    }
    return addanother;
}
void showEmployee(int employeenumber)
{
    cout << "Employee Name : " << employeesname[employeenumber] << endl;
    cout << "Employee ID : " << employeesid[employeenumber] << endl;
    cout << "Employee Password : " << employeespassword[employeenumber] << endl;
}
void returnPrevious()
{
    cout << "Press Any Key to return to previous menu" << endl;
    getch();
}
bool delConfirmation()
{
    string confirmation;
    bool deletion = false;
    cout << "Continue with Deletion?" << endl;
    cout << "Enter (Y/N) : ";
    cin >> confirmation;
    confirmation = checkstringvalidation(confirmation);
    if (confirmation == "Y" || confirmation == "y")
    {
        deletion = true;
    }
    return deletion;
}
void delEmployee(int employeenumber)
{
    for (int i = employeenumber; i < employeecount; i++)
    {
        employeesid[i] = employeesid[i + 1];
        employeesname[i] = employeesname[i + 1];
        employeespassword[i] = employeespassword[i + 1];
    }
    updateEmployeeData();
    employeecount = employeecount - 1;
}
int findCar(string carname)
{
    int carnumber;
    bool carfound = false;

    for (carnumber = 0; carnumber < carcount; carnumber++)
    {
        if (carname == carsname[carnumber])
        {
            carfound = true;
            break;
        }
    }
    if (carfound == true)
    {
        return carnumber;
    }
    else
    {
        carnumber = carcount + 1;
        return carnumber;
    }
}
void addCar(string name, string color, int carnumber)
{

    carsname[carnumber] = name;
    carcolors[carnumber] = color;
    string available;
    cout << "Enter Engine Size : ";
    getline(cin, enginespecs[carnumber]);
    cout << "Enter " << carsname[carnumber] << " price : PKR ";
    cin >> prices[carnumber];
    cout << "Enter Availablity Status : Is " << carsname[carnumber] << " available? (Y/N) : ";
    cin >> available;
    available = checkstringvalidation(available);
    processVehicleAvailability(available, carnumber);
    cout << "Enter a Tag Line : ";
    getline(cin.ignore(), tagline[carnumber]);
    tagline[carnumber] = checkstringvalidation(tagline[carnumber]);
    storeCarsData();
}
string getCarName()
{
    string carname;
    cout << "Enter Car Name & Variant : ";
    getline(cin.ignore(), carname);
    carname = checkstringvalidation(carname);
    return carname;
}
void showCar(int carnumber)
{
    cout << endl;
    cout << "Car Name  & Variant : " << carsname[carnumber] << endl;
    cout << "Color : " << carcolors[carnumber] << endl;
    cout << "Current Price : PKR " << prices[carnumber] << "/-" << endl;
    if (carAvailable[carnumber] == true)
    {
        cout << "Current Availabilty Status : Currently Available" << endl;
    }
    else
    {
        cout << "Current Availabilty Status : Currently UnAvailable" << endl;
    }
}
void removeCar(int carnumber)
{
    for (int i = carnumber; i < carcount; i++)
    {
        carsname[i] = carsname[i + 1];
        enginespecs[i] = enginespecs[i + 1];
        prices[i] = prices[i + 1];
        carcolors[i] = carcolors[i + 1];
        carAvailable[i] = carAvailable[i + 1];
    }
    carcount--;
    updateCarsData();
}
int findBookingIDIndex(int bookingid)
{
    bool bookingidfound = false;
    int i;
    for (i = 0; i < bookingidcount; i++)
    {
        if (bookingid == bookingIds[i])
        {
            bookingidfound = true;
            break;
        }
    }
    if (bookingidfound == true)
    {
        return i;
    }
    else
    {
        i = bookingidcount + 1;
        return i;
    }
}
void showBooking(int bookingidindex)
{
    cout << "Booking Name : " << bookingNames[bookingidindex] << endl;
    cout << "Booked Car Name : " << bookingCarNames[bookingidindex] << endl;
    cout << "Booked Car Color : " << bookingCarColors[bookingidindex] << endl;
    cout << "Current Status : " << bookingStatus[bookingidindex] << endl;
}
void IncorrectInput()
{
    cout << "You Have Given Incorrect Input" << endl;
}
int findSpecificCar(string carname, string carcolor)
{
    int carnumber;
    bool carfound = false;

    for (carnumber = 0; carnumber <= carcount; carnumber++)
    {
        if ((carname == carsname[carnumber]) && (carcolor == carcolors[carnumber]))
        {
            carfound = true;
            break;
        }
    }
    if (carfound == true)
    {
        return carnumber;
    }
    else
    {
        carnumber = carcount + 1;
        return carnumber;
    }
}
void updateCarAvailability(int carnumber)
{
    string available;
    cout << endl;
    showCar(carnumber);
    cout << "Availability Status : Is " << carsname[carnumber] << " available? (Y/N): ";
    cin >> available;
    available = checkstringvalidation(available);
    processVehicleAvailability(available, carnumber);
}
void carNotFound()
{
    cout << "Car or Color Not Found / Available" << endl;
}
void employeeInterface()
{
    int employeemenuoption = 0;
    while (employeemenuoption != 8)
    {
        employeemenuoption = employeeMainMenu(0);
        employeemenuoption = intValidation(employeemenuoption);
        if (employeemenuoption == 1)
        {
            employeeHeader(employeemenuoption);
            createBooking(1);
            cout << endl;
            returnPrevious();
        }
        else if (employeemenuoption == 2)
        {
            bool checkbookingstatus = true;
            while (checkbookingstatus == true)
            {
                employeeHeader(employeemenuoption);
                findshowBooking();
                cout << endl;
                checkbookingstatus = addAnother();
            }
        }
        else if (employeemenuoption == 3)
        {
            bool getcostestimations = true;
            while (getcostestimations == true)
            {
                employeeHeader(employeemenuoption);
                calculatePrice();
                getcostestimations = addAnother();
            }
        }
        else if (employeemenuoption == 4)
        {
            bool checkavailability = true;
            while (checkavailability == true)
            {
                employeeHeader(employeemenuoption);
                string carname, carcolor, bookingname;
                int carnumber;
                cout << "Enter Car Name : ";
                getline(cin.ignore(), carname);
                carname = checkstringvalidation(carname);
                cout << "Enter " << carname << " Color : ";
                getline(cin, carcolor);
                carcolor = checkstringvalidation(carcolor);
                carnumber = findSpecificCar(carname, carcolor);
                cout << endl;
                if (carnumber < carcount)
                {
                    showCar(carnumber);
                }
                else
                {
                    carNotFound();
                }
                cout << endl;
                checkavailability = addAnother();
            }
        }
        else if (employeemenuoption == 5)
        {
            employeeHeader(employeemenuoption);
            int bookingid, bookingidnumber;
            bookingid = takeBookingId();
            bookingid = intValidation(bookingid);
            bookingidnumber = findBookingIDIndex(bookingid);
            if (bookingidnumber < bookingidcount)
            {
                showBooking(bookingidnumber);
                requestBookingCancellation(bookingidnumber);
            }
            else
            {
                cout << "Booking Not Found" << endl;
            }
            returnPrevious();
        }
        else if (employeemenuoption == 6)
        {
            employeeHeader(employeemenuoption);
            showAllCars();
            cout << endl;
            returnPrevious();
        }
        else if (employeemenuoption == 7)
        {
            employeeHeader(employeemenuoption);
            for (int i = 0; i < appointmentcount; i++)
            {
                cout << "Name : " << appointmentnames[i] << endl;
                cout << "Type : " << appointmenttype[i] << endl;
                cout << endl;
            }
            returnPrevious();
        }
    }
}
void employeeHeader(int option)
{
    menu = "Employee ";
    if (option == 1)
    {
        menu = "Employee > Create a New Booking";
        addagain = "Create Another Booking";
    }
    else if (option == 2)
    {
        menu = "Employee > Check Booking Status";
        addagain = "Check Another Status";
    }
    else if (option == 3)
    {
        menu = "Employee > Get Cost Estimation";
        addagain = "Get Another Cost Estimation";
    }
    else if (option == 4)
    {
        menu = "Employee > Check Availability";
        addagain = "Check Another Vehicle's Availability";
    }
    else if (option == 5)
    {
        menu = "Employee > Request Booking Cancellation";
    }
    else if (option == 6)
    {
        menu = "Employee > Showing all cars";
    }
    else if (option == 7)
    {
        menu = "Employee > Showing All Appointments";
    }
    menuheader();
}
int employeeMainMenu(int option)
{
    employeeHeader(option);
    int employeemainmenu;
    cout << "Please Select an Option to proceed" << endl;
    cout << "1. Create a new booking" << endl;
    cout << "2. Check Status of a vehicle booking" << endl;
    cout << "3. Get Cost Estimation of a vehicle" << endl;
    cout << "4. Check Availability of a vehicle" << endl;
    cout << "5. Request for booking cancellation" << endl;
    cout << "6. Show All Cars" << endl;
    cout << "7. Show All Appointments" << endl;
    cout << "8. Logout" << endl;
    cout << "Enter : ";
    cin >> employeemainmenu;
    employeemainmenu = intValidation(employeemainmenu);
    return employeemainmenu;
}
int checkBookingDuplication(string bookingname, string bookingcarname, string bookingcarcolor)
{
    bool duplicatebooking = false;
    int bookingidindex;
    for (bookingidindex = 0; bookingidindex < bookingidcount; bookingidindex++)
    {
        if ((bookingname == bookingNames[bookingidindex]) && (bookingcarname == bookingCarNames[bookingidindex]) && (bookingcarcolor == bookingCarColors[bookingidindex]))
        {
            duplicatebooking = true;
            break;
        }
    }
    if (duplicatebooking == true)
    {
        return bookingidindex;
    }
    else
    {
        bookingidindex = bookingidcount + 1;
        return bookingidindex;
    }
}
void saveBooking(string bookingname, string bookingcarname, string bookingcarcolor, int option)
{
    bookingNames[bookingidcount] = bookingname;
    bookingCarNames[bookingidcount] = bookingcarname;
    bookingCarColors[bookingidcount] = bookingcarcolor;
    if (option == 1)
    {
        bookingStatus[bookingidcount] = "Booking Filed";
    }
    else
    {
        bookingStatus[bookingidcount] = "Booking Created By User";
    }

    bookingidgenerator();
    storeBookingData();
    bookingidcount++;
}
void duplicateBooking(int bookingidindex, string bookingname, string bookingcarname, string bookingcarcolor, int option)
{
    string duplicateoption;
    cout << "Duplicate Booking Found. Booking ID : " << bookingIds[bookingidindex] << endl;
    cout << "Save Booking Anyways? (Y/N) : ";
    cin >> duplicateoption;
    duplicateoption = checkstringvalidation(duplicateoption);
    if (duplicateoption == "Y" || duplicateoption == "y")
    {
        saveBooking(bookingname, bookingcarname, bookingcarcolor, option);
    }
}
void calculatePrice()
{
    string carname, carcolor;
    int grossprice, netprice, carnumber, filerstatus;
    cout << "Enter Car Name : ";
    getline(cin.ignore(), carname);
    carname = checkstringvalidation(carname);
    cout << "Enter " << carname << " Color : ";
    getline(cin, carcolor);
    carcolor = checkstringvalidation(carcolor);
    carnumber = findSpecificCar(carname, carcolor);
    cout << endl;
    if (carnumber < carcount)
    {
        filerstatus = checkFilerStatus();
        cout << endl;
        if (filerstatus == 1)
        {
            netprice = calculateFinalPrice(carnumber, filerstatus);
        }
        else
        {
            netprice = calculateFinalPrice(carnumber, filerstatus);
        }
        showPrice(netprice, carnumber, filerstatus);
    }
    else
    {
        carNotFound();
    }
    cout << endl;
}
int calculateGrossPrice(int carnumber)
{
    int grossprice = prices[carnumber];
    return grossprice;
}
int checkFilerStatus()
{
    int option;
    string filer;
    cout << "Are You a Filer (Y/N): ";
    cin >> filer;
    filer = checkstringvalidation(filer);
    if (filer == "Y" || filer == "y")
    {
        option = 1;
    }
    else
    {
        option = 2;
    }
    return option;
}
int calculateFinalPrice(int carnumber, int filerstatus)
{
    int finalprice;
    if (filerstatus == 1)
    {
        finalprice = prices[carnumber] + 50000;
    }
    else if (filerstatus == 2)
    {
        finalprice = prices[carnumber] + 150000;
    }
    return finalprice;
}
void showPrice(int price, int carnumber, int filerstatus)
{
    cout << "Car Name : " << carsname[carnumber] << endl;
    cout << "Gross Price : " << prices[carnumber] << endl;
    if (filerstatus == 1)
    {
        cout << "Net Price (Filer) : " << price << endl;
    }
    else if (filerstatus == 2)
    {
        cout << "Net Price (Non Filer) : " << price << endl;
    }
}
void requestBookingCancellation(int bookingidnumber)
{
    cout << "Request for Cancellation submitted" << endl;
    bookingStatus[bookingidnumber] = "Cancellation Requested";
    cout << endl;
}
void updateCarInfo(int carnumber)
{
    cout << "Enter Car Name : ";
    getline(cin, carsname[carnumber]);
    carsname[carnumber] = checkstringvalidation(carsname[carnumber]);
    cout << "Enter " << carsname[carnumber] << " Colors : ";
    getline(cin, carcolors[carnumber]);
    cout << "Enter " << carsname[carnumber] << " Price : PKR ";
    cin >> prices[carnumber];
    cout << "Enter Engine Specs : ";
    getline(cin.ignore(), enginespecs[carnumber]);
}
void showEmployeeDatabase()
{
    for (int i = 0; i < employeecount; i++)
    {
        showEmployee(i);
        cout << endl;
    }
}
bool checkVehicleAvailability(int carnumber)
{
    bool caravailable = false;
    if (carnumber < carcount)
    {
        if (carAvailable[carnumber] == true)
        {
            caravailable = true;
        }
    }
    return caravailable;
}
void completeBooking()
{
    cout << "Booking Has Been Saved" << endl;
    cout << "Booking ID : " << bookingIds[bookingidcount - 1] << endl;
}
void processVehicleAvailability(string available, int carnumber)
{
    if (available == "Y" || available == "y" || available == "yes" || available == "Yes" || available == "YES")
    {
        carAvailable[carnumber] = true;
    }
    else
    {
        carAvailable[carnumber] = false;
    }
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
int bookingidgenerator()
{
    int bookingid;
    if (bookingidcount % 2 == 0)
    {
        bookingid = 110 * 12 + bookingidcount;
    }
    else if (bookingidcount % 2 != 0)
    {
        bookingid = 130 * 12 + bookingidcount;
    }
    bookingIds[bookingidcount] = bookingid;
}
void showAllCars()
{
    if (carcount > 0)
    {
        for (int i = 0; i < carcount; i++)
        {
            showCar(i);
            cout << endl;
        }
    }
    else
    {
        cout << "No Cars Found / Registered" << endl;
    }
}
void processBookingdeletion(int bookingidindex)
{
    bool deletion;
    deletion = delConfirmation();
    if (deletion == true)
    {
        deleteBooking(bookingidindex);
        cout << "Booking has been deleted" << endl;
    }
}
void deleteBooking(int bookingidindex)
{
    for (int i = bookingidindex; i < bookingidcount; i++)
    {
        bookingNames[i] = bookingCarNames[i + 1];
        bookingCarNames[i] = bookingCarNames[i + 1];
        bookingCarColors[i] = bookingCarColors[i + 1];
        bookingStatus[i] = bookingStatus[i + 1];
        bookingIds[i] = bookingIds[i + 1];
    }
    updateBookingData();
    bookingidcount--;
}
string checkstringvalidation(string check)
{
    cout << endl;
    for (int d = 0; check[d] != '\0'; d++)
    {
        if (!((check[d] >= 'A' && check[d] <= 'Z') || (check[d] >= 'a' && check[d] <= 'z') || check[d] == '-' || check[d] == '/'))
        {
            cout << "Please Enter Alphabets Only !!: ";
            getline(cin.ignore(), check);
        }
        return check;
    }
}
void userSignUp()
{
    bool userduplication;
    string username, password;
    cout << "Enter Username : ";
    getline(cin.ignore(), username);
    cout << "Enter Password : ";
    getline(cin, password);
    userduplication = checkclientUsername(username);
    if (userduplication == false)
    {
        saveUser(username, password);
        cout << "Sign Up Successful!" << endl;
    }
    else
    {
        cout << "Duplicate User" << endl;
    }
}
bool checkclientUsername(string username)
{
    bool flag = false;
    for (int i = 0; i < clientcount; i++)
    {
        if (username == clientusernames[i])
        {
            flag = true;
            break;
        }
    }
    return flag;
}
void saveUser(string username, string password)
{
    clientusernames[clientcount] = username;
    clientpasswords[clientcount] = password;
    storeClientData();
    clientcount++;
}
int usermenuinterface()
{
    int option;
    cout << "1. Sign Up" << endl;
    cout << "2. Sign In" << endl;
    cout << "Choose : ";
    cin >> option;
    return option;
}
int intValidation(int number)
{
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << endl;
        cout << "Invalid input. Please put a number as an input: ";
        cin >> number;
        cout << endl;
    }
    if (number < 0)
    {
        cout << "Please Enter non Negative Numbers. Enter : ";
        cin >> number;
    }
    return number;
}
int takeBookingId()
{
    int bookingid;
    cout << "Enter Booking ID : ";
    cin >> bookingid;
    return bookingid;
}
void createAppointment()
{
    string name;
    int service;
    cout << "Enter Name : ";
    getline(cin.ignore(), name);
    cout << "Choose Service" << endl;
    cout << "1. Car Inspection / Servicing" << endl;
    cout << "2. New Car Shopping" << endl;
    cin >> service;
    service = intValidation(service);
    saveAppointment(name, service);
}
void saveAppointment(string name, int service)
{
    appointmentnames[appointmentcount] = name;
    if (service == 1)
    {
        appointmenttype[appointmentcount] = "Car Inspection / Servicing";
    }
    else if (service == 2)
    {
        appointmenttype[appointmentcount] = "New Car Shopping";
    }
    storeAppointmentData();
    appointmentcount++;
}
void findshowBooking()
{
    int bookingid, bookingidindex;
    bookingid = takeBookingId();
    bookingid = intValidation(bookingid);
    bookingidindex = findBookingIDIndex(bookingid);
    if (bookingidindex < bookingidcount)
    {
        showBooking(bookingidindex);
    }
    else
    {
        cout << "Booking Not Found" << endl;
    }
}
void createBooking(int option)
{
    string bookingname, bookingcarname, bookingcarcolor;
    int bookingidindex, carnumber;
    bool vehicleaavailable;
    cout << "Enter Booking Name : ";
    getline(cin.ignore(), bookingname);
    cout << "Enter Car Name : ";
    getline(cin, bookingcarname);
    cout << "Enter Car Color : ";
    getline(cin, bookingcarcolor);
    carnumber = findSpecificCar(bookingcarname, bookingcarcolor);
    if (carAvailable[carnumber] == true)
    {
        bookingidindex = checkBookingDuplication(bookingname, bookingcarname, bookingcarcolor);
        if (bookingidindex > bookingidcount)
        {
            saveBooking(bookingname, bookingcarname, bookingcarcolor, option);
            completeBooking();
        }
        else
        {
            duplicateBooking(bookingidindex, bookingname, bookingcarname, bookingcarcolor, option);
        }
    }
    else
    {
        carNotFound();
    }
}
bool userSignin()
{
    bool signin;
    string password;
    cout << "Enter Username : ";
    getline(cin.ignore(), user_accessing);
    cout << "Enter Password : ";
    getline(cin, password);
    signin = usersigninauth(user_accessing, password);
    return signin;
}
bool usersigninauth(string username, string password)
{
    bool flag = false;
    for (int i = 0; i < clientcount; i++)
    {
        if (username == clientusernames[i] && password == clientpasswords[i])
        {
            flag = true;
        }
    }
    return flag;
}
string getField(string record, int field)
{
    int commaCount = 1;
    string item = "";
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void storeEmployeeData()
{
    fstream employeedata;
    employeedata.open("employee_data.txt", ios ::app);
    employeedata << employeesname[employeecount] << ",";
    employeedata << employeesid[employeecount] << ",";
    employeedata << employeespassword[employeecount] << "\n";
    employeedata.close();
}
void storeBookingData()
{
    fstream bookingdata;
    bookingdata.open("booking_data.txt", ios ::app);
    bookingdata << bookingNames[bookingidcount] << ",";
    bookingdata << bookingCarNames[bookingidcount] << ",";
    bookingdata << bookingCarColors[bookingidcount] << ",";
    bookingdata << bookingIds[bookingidcount] << ",";
    bookingdata << bookingStatus[bookingidcount] << "\n";
    bookingdata.close();
}
void storeCarsData()
{
    fstream carsdata;
    carsdata.open("cars_data.txt", ios::app);
    carsdata << carsname[carcount] << ",";
    carsdata << carcolors[carcount] << ",";
    carsdata << enginespecs[carcount] << ",";
    carsdata << prices[carcount] << ",";
    carsdata << carAvailable[carcount] << ",";
    carsdata << tagline[carcount] << "\n";
    carsdata.close();
}
void storeClientData()
{
    fstream clientdata;
    clientdata.open("clientdata.txt", ios::app);
    clientdata << clientusernames[clientcount] << ",";
    clientdata << clientpasswords[clientcount] << "\n";
    clientdata.close();
}
void storeAppointmentData()
{
    fstream appointmentdata;
    appointmentdata.open("appoint_data.txt", ios::app);
    appointmentdata << appointmentnames[appointmentcount] << ",";
    appointmentdata << appointmenttype[appointmentcount] << "\n";
    appointmentdata.close();
}
void loadCarsData()
{
    string record;
    fstream carsdata;
    carsdata.open("cars_data.txt", ios::in);
    while (getline(carsdata, record))
    {
        carsname[carcount] = getField(record, 1);
        carcolors[carcount] = getField(record, 2);
        enginespecs[carcount] = getField(record, 3);
        prices[carcount] = stoi(getField(record, 4));
        carAvailable[carcount] = stoi(getField(record, 5));
        tagline[carcount] = getField(record, 6);
        carcount = carcount + 1;
    }
    carsdata.close();
}
void loadBookingData()
{
    string record;
    fstream bookingdata;
    bookingdata.open("booking_data.txt", ios::in);
    while (getline(bookingdata, record))
    {
        bookingNames[bookingidcount] = getField(record, 1);
        bookingCarNames[bookingidcount] = getField(record, 2);
        bookingCarColors[bookingidcount] = getField(record, 3);
        bookingIds[bookingidcount] = stoi(getField(record, 4));
        bookingStatus[bookingidcount] = getField(record, 5);
        bookingidcount = bookingidcount + 1;
    }
    bookingdata.close();
}
void loadAppointmentData()
{
    string record;
    fstream appointmentdata;
    appointmentdata.open("appoint_data.txt", ios::in);
    while (getline(appointmentdata, record))
    {
        appointmentnames[appointmentcount] = getField(record, 1);
        appointmenttype[appointmentcount] = getField(record, 2);
        appointmentcount = appointmentcount + 1;
    }
    appointmentdata.close();
}
void loadClientData()
{
    string record;
    fstream clientdata;
    clientdata.open("clientdata.txt", ios::in);
    while (getline(clientdata, record))
    {
        clientusernames[clientcount] = getField(record, 1);
        clientpasswords[clientcount] = getField(record, 2);
        clientcount++;
    }
    clientdata.close();
}
void loadEmployeeData()
{
    string record;
    fstream employeedata;
    employeedata.open("employee_data.txt", ios::in);
    while (getline(employeedata, record))
    {
        employeesname[employeecount] = getField(record, 1);
        employeesid[employeecount] = getField(record, 2);
        employeespassword[employeecount] = getField(record, 3);
        employeecount = employeecount + 1;
    }
    employeedata.close();
}
void updateBookingData()
{
    fstream bookingdata;
    bookingdata.open("booking_data.txt", ios ::out);
    for (int i = 0; i < bookingidcount - 1; i++)
    {
        bookingdata << bookingNames[i] << ",";
        bookingdata << bookingCarNames[i] << ",";
        bookingdata << bookingCarColors[i] << ",";
        bookingdata << bookingIds[i] << ",";
        bookingdata << bookingStatus[i] << "\n";
    }
    bookingdata.close();
}
void updateCarsData()
{
    fstream carsdata;
    carsdata.open("cars_data.txt", ios::out);
    for (int i = 0; i < carcount - 1; i++)
    {
        carsdata << carsname[i] << ",";
        carsdata << carcolors[i] << ",";
        carsdata << enginespecs[i] << ",";
        carsdata << prices[i] << ",";
        carsdata << carAvailable[i] << ",";
        carsdata << tagline[i] << "\n";
    }
    carsdata.close();
}
void updateEmployeeData()
{
    fstream employeedata;
    employeedata.open("employee_data.txt", ios ::out);
    for (int i = 0; i < employeecount - 1; i++)
    {
        employeedata << employeesname[i] << ",";
        employeedata << employeesid[i] << ",";
        employeedata << employeespassword[i] << "\n";
    }
    employeedata.close();
}
void showCars()
{
    for (int i = 0; i < carcount; i++)
    {
        cout << "Honda " << carsname[i] << endl;
        cout << "Color : " << carcolors[i] << endl;
        cout << "Starting Price : " << prices[i] << endl;
        cout << tagline[i] << endl;
        cout << endl;
    }
}