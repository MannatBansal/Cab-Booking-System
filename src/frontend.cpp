#include "../inc/HeadBackend.hpp"
#include "../inc/HeadFrontend.hpp"
//#include "../inc/HeadVehicle.hpp"

void cabBooked(vector<vehicle> booked_cab, const coordinates myLocation)
{
//	int fare ;
	string model;
	string vehicleType;
	system("clear");
	srand(time(NULL));
	int number = rand() % 10000;

	string f_name, l_name, destination;
	cout << endl << endl <<"\tWrite your first name:: ";
	cin >> f_name;
	cout << "\tWrite your Last name:: ";
	cin >> l_name;
	cout << "\tWrite your destination address:: ";
	cin >> destination;

	string line;
	ofstream file;
	file.open("../bin/receipt.txt");
	file << "\n\n\t\t************************ Cab Booking System ************************\n"
		 << "\t\t                             RECEIPT                         \n";
	file << "\t\tCustomer name: " << f_name << " " << l_name << endl;
	file << "\t\tDestination: " << destination << endl;
	file << "\t\t__________________________________________________\n";
	file << "\t\tVehicle Type\tModel\t\tTotal\n";
	file << "\t\t__________________________________________________\n";
	file << "\t\t" << booked_cab[0].vehicleType << "\t\t" << booked_cab[0].model << "\t" << booked_cab[0].fare*100 << "\n";

	std::cout << endl << endl
		  << "\t\t\t\tBooked Successfully" << endl
		  << "\tBill Generated" << endl
		  << "\tYour OTP is: " << number << endl;
	file.close();
	/*cout << "\nPress Enter to exit.....";
	cin.get();
	if (cin.get() == '\n')
		exit(0);*/
}

void start(coordinates myLocation)
{
	std::cout << "######################################################################################################################";
	std::cout << "\n";
	std::cout << "\t"
			  << "   				Cab Booking System   ";
	std::cout << "\n"
			  << "######################################################################################################################";
	std::cout << "\n\n";
	std::cout << "\tMy Location :: ";
	myLocation.print_coordinates();
	std::cout << "______________________________________________________________________________________________________________________\n";
	//system("clear");
}

int booking()
{
	int vehicle_choice;
	cout << "\t\t\tVehicle type" << endl
		 << "\t1. Mini" << endl
		 << "\t2. Sedan" << endl
		 << "\t3. Prime" << endl
		 << "\t4. Exit" << endl;

	do
	{
		cout << endl << "\tEnter the type of Vehicle you want to book:: ";
		cin >> vehicle_choice;

		switch (vehicle_choice)
		{
		case 1:
			return vehicle_choice;
			break;
		case 2:
			return vehicle_choice;
			break;
		case 3:
			return vehicle_choice;
			break;
		default:
			cout << "\tWrong choice!" << endl;
			break;
		}
	} while (vehicle_choice != 4);
	return vehicle_choice;
}



