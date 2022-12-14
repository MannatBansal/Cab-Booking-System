#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <time.h>
#include <fstream>
#include <sstream>

using namespace std;

class vehicle
{
public:
    string vehicleType;
    string model;
    string cDetails;
    string Dname;
    string age;
    int fare;
    string phn;
    vehicle(string vt, string md, string cD, string Dn, string ag, int fr, string pn)
    {
        vehicleType = vt;
        cDetails = cD;
        model = md;
        Dname = Dn;
        age = ag;
        fare = fr;
        phn = pn;
    }

    void display();
    // int closest_vehicle(int vehicle_choice);
    static vector<vehicle> vehicle_data(int vehicle_choice);
};
int closest_vehicle(int vehicle_choice);