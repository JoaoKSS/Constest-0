#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){    
        int a, b, c;
        cin >> a >> b >> c;
        bool possivel = false; 
        if((b == c && a % 2 == 0) || a == b + c)
            possivel = true;   
        if((a == c && b % 2 == 0) || b == a + c)
            possivel = true;
        if((a == b && c % 2 == 0) || c == a + b)
            possivel = true;

        cout << (possivel ? "YES" : "NO") << endl;
    }
    return 0;
}
