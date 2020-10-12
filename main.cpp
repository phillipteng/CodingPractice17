//
// Created by Phillip Teng on 2020-09-24.
//
#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;


int main(){
    int d, sumTime;

    cin >> d >> sumTime;
    int totalMax = 0;
    int totalMin = 0;
    //calculate the max and keep track the number of days that i can study less.
    //if the answer is between the possible numbers then, we take the max and keep subtracting max from the first day
    //until we get to the end

    vector<int> runningMin;
    vector<int> runningMax;

    while(d--){
        int minDay, maxDay;
        cin >> minDay >> maxDay;
        runningMin.push_back(minDay);
        runningMax.push_back(maxDay);
        totalMin+=minDay;
        totalMax+=maxDay;
    }

    vector<int> minSums;
    minSums.push_back(0);
    int runningSum = 0;
    for (int i = runningMin.size() - 1; i >= 0; --i){
        runningSum += runningMin[i];
        minSums.push_back(runningSum);
    }

    if (sumTime >= totalMin && sumTime <= totalMax){
        // begin with the max, then subtract until i get to the sum then print it
        cout << "YES" << endl;
        int maxSum = 0;
        for (int i = 0; i < runningMax.size(); ++i){
            maxSum += runningMax[i];
            if (maxSum + minSums[i] <= sumTime){
                cout << runningMax[i] << " ";
            }
            else {
                int diff = sumTime - maxSum;
                int answer = runningMax[i] + diff;
                cout << answer << " ";
            }
        }
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}