// for loop 2 - 62 to find a base that % with 0 of n - 1 value
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string R;

    while(cin >> R){
        int largestNum = 0;
        vector<long long> fullNumber;
        for(int i = R.length()-1; i >= 0; --i){
            char letter = R[i];
            int numInBase62;
            
            if(isdigit(letter)){
                numInBase62 = (int)(letter) - (int) '0'; 
            }
            else if (isupper(letter)){
                numInBase62 = (int)(letter) - (int) 'A' + 10;
            }
            else if (islower(letter)){
                numInBase62 = (int) letter - (int) 'a' + 10 + 26;
            }
            else{
                break;
            }
            fullNumber.push_back(numInBase62);
            if (numInBase62 > largestNum){
                largestNum = numInBase62;
            }
        } 

        
        bool answerExists = false;
        int answer = 0;
        
        for (long long base = largestNum + 1; base < 63; ++base){
            long long multiplier = 1; 
            long long runningSum = 0;
            for (int place = 0; place < fullNumber.size();++place){
                runningSum+=fullNumber[place]*multiplier;
           }
        }
        
        if (answerExists){
            cout << answer << endl;
        }
        else{
            cout << "such number is impossible!" << endl;
        }
    }
    
    return 0;
}