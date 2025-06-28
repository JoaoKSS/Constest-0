#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N = 1500;
    vector<int> feio(N);
    feio[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    int prox2 = 2, prox3 = 3, prox5 = 5;

    for (int i = 1; i < N; i++){
        int prox_feio = min(prox2, min(prox3, prox5));
        feio[i] = prox_feio;
        
        if (prox_feio == prox2){
            i2++;
            prox2 = feio[i2] * 2;
        }
        if (prox_feio == prox3){
            i3++;
            prox3 = feio[i3] * 3;
        }
        if (prox_feio == prox5){  
            i5++;
            prox5 = feio[i5] * 5;
        }
    }
    
    cout << "The " << N << "'th ugly number is " << feio[N - 1] << "." << endl;
    return 0;
}
