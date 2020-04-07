#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a, b;
    while (cin >> a >> b){
        int maxLoops = 0;
        cout << a << " " << b << " ";
        if (a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        for (int i = a; i <= b; ++i){
            int currLoops = 1;
            int n = i;

            while ( n != 1){

                if (n % 2 == 1){
                    // odd
                    n = 3 * n + 1;
                }

                else {
                    // even
                    n = n / 2;
                }

                ++currLoops;

                if (currLoops > maxLoops){
                    maxLoops = currLoops;
                }
            }



        }
        cout << maxLoops << endl;
    }

    return 0;
}