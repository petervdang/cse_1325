#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class MPG_log
{
    public:
        double get_current_mpg(double odometer_i, double odometer_n, double gallons)
        {
            double milesPerGallon;
            milesPerGallon = (odometer_n - odometer_i) / gallons;

            if (milesPerGallon < 0) milesPerGallon = milesPerGallon * -1;

            return milesPerGallon;
        }

        double get_total_mpg(double initial, double odometer_n, double total_gallons)
        {
            double total_mpg = (odometer_n - initial) / total_gallons;

            if (total_mpg < 0) total_mpg = total_mpg * -1;

            return total_mpg;
        }
};



int main()
{
    MPG_log milesPerGallon;
    double initial;
    double odometer_i;
    double odometer_n;
    double gallons;
    double mpg;
    double total_mpg;
    double total_gallons = 0;


    cout << "Initial odometer: ";
    cin >> odometer_i;
    initial = odometer_i;

    cout << "Odometer: ";
    cin >> odometer_n;

    while (odometer_n != 0.0)
    {
        cout << "Gallons: ";
        cin >> gallons;
        total_gallons += gallons;

        mpg = milesPerGallon.get_current_mpg(odometer_i, odometer_n, gallons);
        cout << "This mpg: " << mpg << endl;

        total_mpg = milesPerGallon.get_total_mpg(initial, odometer_n, total_gallons);
        cout << "Ave  mpg: " << total_mpg << endl;

        odometer_i = odometer_n;

        cout << "Odometer: ";
        cin >> odometer_n;
    }

    return 0;
}
