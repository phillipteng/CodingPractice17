#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;
/*
Sample input:

2
2 2 4
3 2 4 6

Sample output:
2
4

*/
class Solution{
public:
    int minSum(vector<int> input){
        // sort the vector

        sort(input.begin(), input.end());
        int median = input[input.size()/2];
        int sum = 0;
        
        for (unsigned int i = 0; i < input.size(); i++){
            // if the median is less than
            if (input[i] - median > 0){
               sum += input[i] - median;
            }
            else{
                sum += median - input[i];
            }
        }
        return sum;
    };

    void printVec(vector<int> input){
        for (auto i : input){
            cout << i << endl;
        }
    };

};

int main(){
    int testcases;
    scanf("%d", &testcases);

    for (int i = 0; i < testcases; i++){
        int relatives, streetNumbers;
        cin >> relatives;
        vector<int> lineInput;

        for (int j = 0; j < relatives; j++){
           cin >> streetNumbers;
           lineInput.push_back(streetNumbers);
        }

       // call function
       cout << Solution().minSum(lineInput) << endl;
       //Solution().printVec(lineInput);


    }



    return 0;
}


