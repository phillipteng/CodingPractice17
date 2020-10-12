#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){    
    ios::sync_with_stdio(0);
    cin.tie();
    int numbersToRead; 
    int numberOfEntries = 0;

    while(cin >> numbersToRead){
        vector<int> vectorOfNums; 
        bool answer = true; 
        int lastNum = 0;
        for(int i = 0; i < numbersToRead; ++i){
            int someNum;
            cin >>  someNum;
            if (lastNum >= someNum){
                answer = false;
            }
            lastNum = someNum;
            vectorOfNums.push_back(someNum); 
        }

        cin.ignore();
        unordered_set<int> prevSums;
        for (int i = 0; i < numbersToRead; ++i){
            for (int j = i; j < numbersToRead; ++j){
                int sum = vectorOfNums[i] + vectorOfNums[j];
                if (prevSums.find(sum)!= prevSums.end()){
                    //found
                    answer = false;
                }
                else{
                    //not found
                    prevSums.insert(sum);
                }
            }
        }
        numberOfEntries++;
        if (answer){
           cout << "Case #" << numberOfEntries << ": It is a B2-Sequence." << endl << endl;
        }
        else{
            cout << "Case #" << numberOfEntries << ": It is not a B2-Sequence." << endl << endl;
        }

    }
    
    return 0;
}