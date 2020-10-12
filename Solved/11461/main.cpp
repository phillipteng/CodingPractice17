#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

int main(){
    int startingNum, endingNum;
    while (cin >> startingNum >> endingNum){
        cin.ignore();
        if (startingNum == 0 && endingNum == 0)
            break;

        int ceilStartingNum = ceil(sqrt(startingNum));    
        int floorEndingNum = floor(sqrt(endingNum)); 
        int difference = floorEndingNum - ceilStartingNum;
        int answer = difference + 1;

        cout << answer << endl;
        
    }
    return 0;
}