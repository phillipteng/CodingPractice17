#include <iostream>
#include <vector>
#include <stack>
#include <string>


using namespace std;
// test cases
// 45897458973958
//
// Answer:
// 2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
int main(){
    long long input;
    vector<string> names = {" shata", " hajar", " lakh", " kuti"};
    vector<int> sizes = {10,100,100,100};
    stack <string> myStack; 

    int queries = 0;
    while(cin >> input){
        ++queries;
        string printThis = to_string(queries);
        while (printThis.size()<4){
            string space = " ";
            printThis = space.append(printThis);
        }
        cout << printThis << ".";

        string space = " ";
        if (input%100 != 0){
            myStack.push(space.append(to_string(input%100)));
        }
        else if (input == 0){
            cout << " 0";
        }
        input = input/100;
        int iterator = 0; 
        while(input > 0){
            if (input%sizes[iterator]!=0){
                space = " ";
                myStack.push(space.append(to_string(input%sizes[iterator]).append(names[iterator])));
            }

            input = input/sizes[iterator];
            if (iterator == 3){
                iterator = 0;
            }
            else {
                ++iterator;
            }
        }
        while(!myStack.empty()){
            cout << myStack.top();
            myStack.pop();
        }
        cout << endl;
    }

    return 0;
}
