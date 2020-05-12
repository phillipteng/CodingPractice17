#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string firstLine, secondLine;
    
    while(getline(cin, firstLine)){
        unordered_map<char, int> map; 
        vector<char> myWord;
        getline(cin, secondLine);
        for (auto i: firstLine){
            if (map.find(i) != map.end()){
                //found and increment
                map[i] = map[i] + 1;
            }
            else{
                //not found
                map[i] = 1;
            }
        } 
        for (auto i: secondLine){
            if (map.find(i)!= map.end()){
                //found and decrement if not zero
                if (map[i] != 0){
                    //decrement
                    map[i] = map[i] - 1;
                    myWord.push_back(i);
                }
                
            }
        } 
        sort(myWord.begin(), myWord.end());
        
        for (auto i : myWord){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}