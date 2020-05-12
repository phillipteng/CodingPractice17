#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <map>

using namespace std;
bool compare(pair<int, char> i , pair<int, char> j){
    return (int) i.first > (int) j.first;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    int letters[26] = {0};
    while (n--){
        string myLine;
        getline(cin, myLine);
        for (int i = 0; i < myLine.size(); ++i){
            int number = (int) myLine[i];

            if (isupper(number)){
                int indice = (int) number - (int)'A';
                letters[indice] = letters[indice] + 1;
            }
            else if (islower(number)){
                int indice = (int) number - (int)'a';
                letters[indice] = letters[indice] + 1;
            }
        }
    }
    // flip the numbers with the letters and add it to a vector then perform stable sort
    vector<pair<int, char>> lastVec;
    char letter = 'A';
    for (int i = 0; i < 26; ++i){
        lastVec.push_back(pair<int, char>(letters[i], letter));
        ++letter;
    }
    stable_sort(lastVec.begin(), lastVec.end(), compare);
    
    for (auto i: lastVec){
        if (i.first != 0)            
            cout << i.second << " " << i.first << endl;
    }
    return 0;
}