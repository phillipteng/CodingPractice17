#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int n;
    while(cin>> n){
        vector<int> myVec; 
        while (n--){
            int number;
            cin >> number;
            myVec.push_back(number);
        }
        
        // generate unordered map for the answer
        unordered_set<int> mySet;
        
        for (int i = 1; i < myVec.size(); ++i){
            mySet.insert(i);
        }

        // calculate the differences
        unordered_set<int> newSet;
        for (int i = 0; i < myVec.size()-1; ++i){
            int diff = abs(myVec[i+1]-myVec[i]);
            newSet.insert(diff); 
        }

        if (newSet == mySet){
            cout << "Jolly" << endl;
        }
        else {
            cout << "Not jolly" << endl;
        }
    }
    
    return 0;
}