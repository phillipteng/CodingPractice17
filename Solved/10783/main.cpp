//read in the number of lines that i need to read

//calculate whether or not there are odd cases or even cases

// if odd then add the first and last numbers together plus n/2 times + n 

// if even then add the first and last numbers together plus n/2 times

// return

#include <iostream>

using namespace std;

bool isOdd(int number){
    if (number % 2){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int numberOfLines;
    cin >> numberOfLines;
    int caseNum = 1;
    while(numberOfLines--){
        int startingNum, endingNum;
        cin >> startingNum >> endingNum;
        int answer = 0;
        for(int i = startingNum; i <= endingNum; ++i){
            if (isOdd(i)){
                answer+= i; 
            }
        }
        cout << "Case " << caseNum << ": ";
        cout << answer << endl;
        ++caseNum;
        
    }
    return 0;
}