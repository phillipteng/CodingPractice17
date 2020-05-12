#include <iostream>

using namespace std;

int main(){
    long long S, D;
    // where S is the initial size of the group
    // D is the group size staying in the hotel at Dth day starting from 1

    while(cin>> S >> D){
        while (D > 0){
            D = D-S;
            ++S;
        }
        cout << --S << endl;
    }
    return 0;
}