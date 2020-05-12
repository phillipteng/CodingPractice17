#include <iostream>
#include <numeric>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int month;
        int day;
        cin >> month >> day;
        // convert month and day to days out of 365
        int monthDays[12] = {0, 31, 31+28, 31+28+31,31+28+31+30, 31+28+31+30+31,31+28+31+30+31+30, 31+28+31+30+31+30+31, 31+28+31+30+31+30+31+31, 31+28+31+30+31+30+31+31+30, 31+28+31+30+31+30+31+31+30+31,31+28+31+30+31+30+31+31+30+31+30};
        int daysInYear = monthDays[month - 1] + day;
        string week[7] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        int modded = daysInYear%7;
        cout << week[modded] << endl;
    } 
    
    return 0;
}