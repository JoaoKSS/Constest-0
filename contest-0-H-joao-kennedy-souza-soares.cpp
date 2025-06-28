#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, x;
    cin >> n >> k >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int tempoTotal = 0;
    for (int i = n - 1; i >= 0; i--){
        if (k > 0 && a[i] > x) {
            tempoTotal += x;
            k--;
        } else {
            tempoTotal += a[i];
        }
    }
    
    cout << tempoTotal << endl;
    return 0;
}
