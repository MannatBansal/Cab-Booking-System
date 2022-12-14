#include "../inc/HeadBackend.hpp"
#include "../inc/HeadFrontend.hpp"

int main(void)
{
    system("clear");
    coordinates myLocation;
    myLocation.random_coordinates();
    start(myLocation);
    int flag = 0;
    do
    {
        map<string, string> dict = {{"moin", "1234"},
                                    {"sehab", "1234"},
                                    {"rishav", "1234"},
                                    {"divya", "1234"},
                                    {"mannat", "1234"}};
        string username;
	char *password;
        cout << "\tEnter Username: ";
        cin >> username;
        password = getpass("\tEnter Password: ");
        if (dict.find(username) != dict.end() && dict[username] == password)
        {
            cout << "\n\tLogin Successful\n\n";
            system("clear");
            int vehicle_choice = booking();

            vector<vehicle> booked_cab = vehicle::vehicle_data(vehicle_choice);

            cabBooked(booked_cab, myLocation);
            flag++;
        }
        else
        {
            system("clear");
            cout << "\n\tInvalid Credentials. Try again..." << endl
                 << endl;
        }
    } while (flag == 0);

    return 0;
}
