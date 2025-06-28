#include <iostream>
#include <cmath>
using namespace std;

bool primo(int num){
    if(num < 2)
        return false;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--){
        int x, y;
        cin >> x >> y;     
        for (int i = x; i <= y; i++){  
            if(primo(i))
                cout << i << endl;
        }
    }

    return 0;
}
