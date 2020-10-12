#include <iostream>

using namespace std;

int main(){
    int first, second;
    while (cin >> first >> second){
        int answer = first * second;
        answer*=2;
        cout << answer << endl;
    }
    
    return 0;
}