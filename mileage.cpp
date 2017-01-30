#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class MPG_log
{
    public:
        double mpg(double last_odometer, double this_odometer, double gallons)
        {
            double milesPerGallon;

            milesPerGallon = (this_odometer - last_odometer) / gallons;

            if (milesPerGallon < 0) milesPerGallon = milesPerGallon * -1;  // If user enters odometer less than the initial. Which shouldn't


            return milesPerGallon;
        }



};



int main()
{
    MPG_log milesPerGallon;
    double odometer_i;   // initial odometer
    double odometer_n;   // odometer now
    double gallons;
    double mpg;


    cout << "Initial odometer: ";
    cin >> odometer_i;

    cout << "Odometer: ";
    cin >> odometer_n;

    while (odometer_n != 0.0)
    {
        cout << "Gallons: ";
        cin >> gallons;

        mpg = milesPerGallon.mpg(odometer_i, odometer_n, gallons);
        cout << "This mpg: " << mpg << endl;

        odometer_i = odometer_n;

        cout << "Odometer: ";
        cin >> odometer_n;

    }


    return 0;
}
