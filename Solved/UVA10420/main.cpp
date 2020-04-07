#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
/*
Test case
3
Spain Donna Elvira
England Jane Doe
Spain Donna Anna


Sample Output
England 1
Spain 2

*/
int main(){
    int lines;
    cin >> lines; 
    
    unordered_map<string, int> myMap;
    for (int i = 0; i < lines; ++i){
        string location;
        cin >> location;
        string firstname, lastname;
        cin >> firstname;
        cin >> lastname;

        if (myMap.find(location)!= myMap.end()){
           myMap[location] = myMap[location] + 1;
        } 
        else {
            myMap.insert(pair<string, pair<int, unordered_set<string>>(location, pair<int,unordered_set<string>>(firstname.append(" " + lastname))));
        }
    }
    for (auto i: myMap){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}