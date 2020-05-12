#include <iostream>
#include <string>
#include <vector> 
#include <stack>

using namespace std;

int main(){
    string myLine;
    int lineNum = 0;
    vector<string> myVec;
    int maxLetters = 0;
    while(getline(cin, myLine))
    {
        if (maxLetters < myLine.size()){
            maxLetters = myLine.size();
        }
        myVec.push_back(myLine);
        ++lineNum;
    }
    //pad the max letters with spaces
    for (int i = 0; i < lineNum; ++i){
        if (myVec[i].size() < maxLetters){
            int prevSize = myVec[i].size();
            for (int j = 0; j < maxLetters - prevSize; ++j){
                myVec[i].push_back(' ');
            }
        }
    }

    
    for (int i = 0; i < maxLetters; ++i){
        for (int j = lineNum - 1; j >= 0; --j){
            cout << myVec[j][i]; 
        }
        cout << endl;
    }
    return 0;
}