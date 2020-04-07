#include <iostream>
using namespace std;


int main(){
    int x;
    while (cin >> x && x != 0){
        if (x % 11 == 0){
            cout << x << " is a multiple of 11." << endl;
        }
        else {
            cout << x << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}