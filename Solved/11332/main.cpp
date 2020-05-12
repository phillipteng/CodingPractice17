#include <iostream>
#include <ctype.h>

using namespace std;

string sumDigits(string input){
    int sum = 0;
    for (int i = 0; i < input.size(); ++i){
        sum = sum + (int) input[i] - (int) '0'; 
    } 
    
    return to_string(sum);
}
int main(){
    string inputLine;
    while (getline(cin, inputLine)){
        if (inputLine == "0"){
            return 0;
        }
        string sum = sumDigits(inputLine);
        while (sum.size()!= 1){
            sum = sumDigits(sum);
        }
        cout << sum << endl;
    }
    return 0;
}