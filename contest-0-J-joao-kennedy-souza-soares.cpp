#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--){
        int w, d, h;
        cin >> w >> d >> h;
        int a, b, f, g;
        cin >> a >> b >> f >> g;
        
        int op1 = a + f + abs(b - g); //caminho via parede esquerda
        int op2 = (w - a) + (w - f) + abs(b - g); //caminho via parede direita
        int op3 = b + g + abs(a - f); //caminho via parede frontal
        int op4 = (d - b) + (d - g) + abs(a - f); //caminho via parede traseira
        
        int ans = h + min(min(op1, op2), min(op3, op4)); //soma o min com a altura
        cout << ans << endl;
    }

    return 0;
}