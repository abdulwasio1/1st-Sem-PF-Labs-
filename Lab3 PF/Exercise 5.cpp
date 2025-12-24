#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float joystick = 240.99999;
    float disk = 180.88888;
    float keyboard = 570.77777;

    // Header
    cout << setw(40) << "====================================" << endl;
    cout << setw(30) << "TECHNO ELECTRONICS" << endl;
    cout << setw(40) << "====================================" << endl;

    cout << fixed << setprecision(2); // 2 decimal places for all

    // Items and prices
    cout << setw(20) << "Joystick"  << " : " << setw(8) << joystick << endl;
    cout << setw(20) << "Disk"      << " : " << setw(8) << disk << endl;
    cout << setw(20) << "Keyboard"  << " : " << setw(8) << keyboard << endl;

    cout << setw(40) << "------------------------------------" << endl;

    return 0;
}

