#include <iostream>
#include <string>


using namespace std;


int main(){
    string input;
    bool firstQuote = true;
    while(getline(cin, input)){
        int position = input.find('\"');
        while (position != string::npos){
            if (firstQuote){
                input.erase(position, 1); 
                input.insert(position, "``");
                firstQuote = false;
            }
            else{
                input.erase(position, 1);
                input.insert(position, "\'\'");
                firstQuote = true;
            }
            position = input.find("\"");
        }
        if (input != "\n"){
            cout << input << endl;
        }
    }
    return 0;
}