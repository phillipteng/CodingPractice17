#include <iostream>

using namespace std;

int main(){
    long long a, b;
    while (cin >> a >> b){
        // keep processing
        if (b - a > 0)
            cout << b - a << endl;
        else
            cout << a - b << endl;

    }

    return 0;
}