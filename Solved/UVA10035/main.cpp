#include <iostream>

using namespace std;

int main(){
    long long a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0){
            break;
        }
        int answer = 0;
        bool lastCarry = false;
        while(a != 0 || b!= 0){
            long long firstInt = a%10;
            long long secondInt = b%10;

            if (firstInt+secondInt >= 10){
                ++answer;
                lastCarry = true;
            }
            else if (lastCarry == true && firstInt + secondInt + 1 >= 10){
                ++answer;
                lastCarry = true;
            }
            else {
                lastCarry = false;
            }
            a = a/10;
            b = b/10;

        }

        if (answer == 0){
            cout << "No carry operation." << endl;
        }
        else if (answer == 1 ){
            cout << "1 carry operation." << endl;
        }
        else {
            cout << answer << " carry operations." << endl;
        }
    }
    return 0;
}