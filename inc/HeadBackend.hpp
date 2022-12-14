#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <time.h>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <map>
#include <unistd.h>

using namespace std;

class coordinates
{
    double latitude;
    double longitude;
    string address;

public:
    coordinates(double lat = 0, double lon = 0, string add = "")
    {
        latitude = lat;
        longitude = lon;
        address = add;
    }
    void random_coordinates();
    void print_coordinates();
};
