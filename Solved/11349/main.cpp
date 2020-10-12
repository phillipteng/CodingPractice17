#include <iostream>
#include <vector>
#include <sstream>
#define ll long long

using namespace std;

int main(){
    int numberOfEntries;
    cin >> numberOfEntries;
    cin.ignore();
    int testNum = 1;
    while(numberOfEntries--){
        string nElementsRow;
        getline(cin, nElementsRow);
        char N, equalsSign;
        int nElements;
        stringstream ssElementsRow(nElementsRow);
        ssElementsRow >> N >> equalsSign >> nElements;
        // actually read in the matrix
        vector<vector<ll>> matrix;
        while(nElements--){
            // row
            string row;
            getline(cin, row);
            //turn the row into stringstream to extract elements into vector
            stringstream ssRow(row);
            ll individualElement;
            vector<ll> rowToInsert;
            while (ssRow >> individualElement){
                rowToInsert.push_back(individualElement);
            }
            matrix.push_back(rowToInsert);

        }
        bool isSymmetric = true;
        //error checking empty matrices 
        if (matrix.size() == 0)
            isSymmetric = false;
        else{
            // now check whether or not it is symmetrical in n time
            for (int row = 0; row < matrix.size(); ++row){
                //assume that matrix at least has on row otherwise will seg fault
                for(int column = 0; column < matrix[0].size(); ++column){
                    ll frontPointer = matrix[row][column];
                    ll backPointer = matrix[matrix.size()-1-row][matrix.size()-1-column];
                    //cout << "comparing " << frontPointer << " " << backPointer << endl;
                    if (frontPointer != backPointer){
                        isSymmetric = false;
                    }
                    if(frontPointer < 0){
                        isSymmetric = false;
                    }
                    
                }
            }

        }

        if (isSymmetric)
            cout << "Test #" << testNum << ": Symmetric." << endl;
        else
            cout << "Test #" << testNum << ": Non-symmetric." << endl;

        ++testNum;  
    }

    return 0;
}