#include "../inc/HeadBackend.hpp"

void coordinates::random_coordinates()
{
    const double my_latitudes[3] = {16.61432217, 16.61933274, 16.61151047};
    const double my_longitudes[3] = {80.5415045, 80.54007148, 80.5040995};
    const string my_address[3] = {"B-Colony Kalyana Mandapam, Krishna, AP, India",
                                  "Swargam Restaurant, AP India",
                                  "Novotel, Vijayawada, AP, India"};
    srand(time(0));
    int random = rand() % 3;
    latitude = my_latitudes[random];
    longitude = my_longitudes[random];
    address = my_address[random];
}

void coordinates::print_coordinates()
{
    cout << latitude << ", " << longitude << " (" << address << ")"
         << "\n";
}
