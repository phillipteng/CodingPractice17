#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string inputLine;
    unordered_map<char, char> map;
    //26 lines of translation
    map.insert(pair<char,char>('e', 'q'));
    map.insert(pair<char,char>('r', 'w'));
    map.insert(pair<char,char>('t', 'e'));
    map.insert(pair<char,char>('y', 'r'));
    map.insert(pair<char,char>('u', 't'));
    map.insert(pair<char,char>('i', 'y'));
    map.insert(pair<char,char>('o', 'u'));
    map.insert(pair<char,char>('p', 'i'));
    map.insert(pair<char,char>('[', 'o'));
    map.insert(pair<char,char>(']','p'));
    map.insert(pair<char,char>('d','a'));
    map.insert(pair<char,char>('f','s'));
    map.insert(pair<char,char>('g','d'));
    map.insert(pair<char,char>('h','f'));
    map.insert(pair<char,char>('j','g'));
    map.insert(pair<char,char>('k','h'));
    map.insert(pair<char,char>('l','j'));
    map.insert(pair<char,char>(';','k'));
    map.insert(pair<char,char>('\'','l'));
    map.insert(pair<char,char>('c','z'));
    map.insert(pair<char,char>('v','x'));
    map.insert(pair<char,char>('b','c'));
    map.insert(pair<char,char>('n','v'));
    map.insert(pair<char,char>('m','b'));
    map.insert(pair<char,char>(',','n'));
    map.insert(pair<char,char>('.','m'));
    map.insert(pair<char,char>('/',','));
    map.insert(pair<char, char>(' ', ' '));
    while (getline(cin, inputLine)){
        
        for (int i = 0; i < inputLine.size(); ++i){
            char inputLetter = tolower(inputLine[i]); 
            cout << map[inputLetter];
        }
        cout << endl;
    }
    return 0;
}