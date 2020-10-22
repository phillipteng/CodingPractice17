//
// Created by Phillip Teng on 2020-09-24.
//
#include <iostream>
#include <vector>
#include <utility>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i < b; ++i)



using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

class Solution {
public:
    int f(int x){
        for (int power = 5; power <= x; power*=5){
            ans += x/ power;
        }
        return ans;
    }
    int preimageSizeFZF(int K) {
        int low = 0, high = INF;
        while(low <= high){
            int x = (low + high) / 2;

            if (f(x) >K){
                high = x - 1;
            }
            else if (f(x) < K ){

            }
        }

        // numb
        //just come up with the exp of 5

    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //read in inputs
    int testCases;
    cin >> testCases;

    while(testCases--){
        int numOfDistricts;
        cin >> numOfDistricts;
        vector<int> gangList;
        while(numOfDistricts--){
            int gangNum;
            cin >> gangNum;
            gangList.PB(gangNum);
        }

        //check if it is possible, if all the numbers are the same then it it not possible
        int firstNum = gangList[0];
        bool answer = false;
        REP (i, 1, gangList.size()){
            if (gangList[i] != firstNum){
                //possible
                answer = true;
                break;
            }
        }

        if (!answer){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

        vector<vector<int>> adjList;
        vector<int> emptyList;
        for(auto i: gangList){
            adjList.PB(emptyList);
        }

        //keep adding districts to the existing node until u have added all of the districts
        while(!gangList.empty()){
            // n^2 solution brute force
        }

    };

    return 0;
}