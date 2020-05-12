#include <iostream>
#include <map>
#include <unordered_set>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    cin.ignore();
    string location;
    map<string, unordered_set<string>> myMap;

    for (int i = 0; i < n; ++i) {
        char * myLine;
        cin >> location;
        string name; 
        getline(cin, name);
        
        if (myMap.find(location) != myMap.end()){
            // found country 
            if (myMap[location].find(name) == myMap[location].end()){
                //look for name and not found
                myMap[location].insert(name);
            }
        } 
        else{
            unordered_set<string> newSet;
            newSet.insert(name);
            
            myMap.insert(pair<string, unordered_set<string>>(location, newSet)); 
        }
        

    }
    
    for (auto i = myMap.begin(); i != myMap.end(); ++i){
        cout << i->first << " " << i->second.size() << endl; 
    }
    
    return 0;
}