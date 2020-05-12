// extract to string
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main ()
{
    int n; 
    cin >> n;
    while(n--){
        int N;
        double p;
        int I;
        cin >> N >> p >> I;
        double firstTerm = p;
        double secondTerm = pow(1-p, I-1);
    
        double thirdTermLower = 1 - pow(1-p, N);
        double answer;
        if (thirdTermLower == 0){
            answer = 0;
        }
        else {
            double thirdTerm = 1/thirdTermLower;
            answer = firstTerm * secondTerm * thirdTerm;
        }
        printf("%.4lf\n", answer);
        }
    return 0;
}