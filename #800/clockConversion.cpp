//1950C - Clock Conversion

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string time;
        cin >> time;

        int hour = stoi(time.substr(0,2));
        string minute = time.substr(3,2);
        string period;

        if(hour == 0) {
            period = "AM";
            hour = 12;
        }
        else if(hour == 12) {
            period = "PM";
        }
        else if(hour > 12) {
            period = "PM";
            hour -= 12;
        }
        else {
            period = "AM";
        }

        string h;
        if (hour < 10) {
            h = "0" + to_string(hour);
        }
        else {
            h = to_string(hour);
        }

        cout << h << ":" << minute << " " << period << endl;
    }

    return 0;
}