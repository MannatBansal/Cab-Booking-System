#include "../inc/HeadVehicle.hpp"

int closest_vehicle(int vehicle_choice)
{
    srand(time(0));
    int random = rand() % 3;
   
    if (vehicle_choice == 1)
        return random;
    else if (vehicle_choice == 2)
        return random + 3;
    else if (vehicle_choice == 3)
        return random + 6;
    else if (vehicle_choice == 4)
        exit(0);
    else
    {
        cout << "\tNo vehicle available";
        exit(0);
    }
}

void vehicle::display()
{
    cout << endl
         << endl
         << "\tVehicle Type: " << vehicleType << endl
         << "\tModel: " << model << endl
         << "\tCar Details: " << cDetails << endl
         << "\tDriver Name: " << Dname << endl
         << "\tAge: " << age << endl
         << "\tFare: " << fare << endl
         << "\tPhone Number: " << phn << endl;
}

vector<vehicle> vehicle::vehicle_data(int vehicle_choice)
{
    ifstream f;
    f.open("../Car_details.csv");
    vector<vehicle> dr;
    string line = "";
    getline(f, line);
    while (getline(f, line))
    {
        int fare;
        string vehicleType;
        string model;
        string cDetails;
        string Dname;
        string age;
        string phn;
        string temp = " ";
        stringstream inputString(line);

        getline(inputString, vehicleType, ',');
        getline(inputString, model, ',');
        getline(inputString, cDetails, ',');
        getline(inputString, Dname, ',');
        getline(inputString, age, ',');
        getline(inputString, temp, ',');
        fare = atoi(temp.c_str());
        getline(inputString, phn, ',');
        vehicle vh(vehicleType, model, cDetails, Dname, age, fare, phn);

        dr.push_back(vh);
        line = "";
    }

    int cab = closest_vehicle(vehicle_choice);
    dr[cab].display();
    int booking_choice;

    cout << endl
         << "\t[Press 1 to book the cab | "
         << "Press 0 to cancel]" << endl
         << "\tPress: ";
    cin >> booking_choice;
    if (booking_choice == 1)
    {
        vector<vehicle> booked_cab;
        booked_cab.push_back(dr[cab]);
        return booked_cab;
    }
    else if (booking_choice == 0)
    {
        exit(0);
    }
    else
    {
        cout << "\tWrong keyword";
        exit(0);
    }
}
