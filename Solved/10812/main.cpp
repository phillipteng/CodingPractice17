// first line is number of lines
// while being able to read in the two next numbers in the line 
// solve for the two numbers
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    long long numberOfLines;
    cin >> numberOfLines;
    while (numberOfLines--){
        long long sumOfScores, differenceOfScores;
        cin >> sumOfScores >> differenceOfScores;
        long long largerScore = sumOfScores + (differenceOfScores - sumOfScores)/2;
        long long smallerScore = -(differenceOfScores - sumOfScores) / 2;
        if((differenceOfScores-sumOfScores)%2)
            cout << "impossible" << endl;
        else if (largerScore < 0 || smallerScore < 0)
            cout << "impossible" << endl;
        else
            cout << largerScore << " " << smallerScore << endl;
    }
    return 0;
}