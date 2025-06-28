#include <iostream>
using namespace std;

int tam_ciclo(int n){
    int count = 1; 
    while (n != 1){
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int main(){
    int i, j;
    while (cin >> i >> j){
        int ini = i;
        int fim = j;
        if (i > j) {
            swap(i, j);
        }

        int max_ciclo = 0;

        for (int k = i; k <= j; k++){
            int ciclo_atual = tam_ciclo(k);
            if (ciclo_atual > max_ciclo)
                max_ciclo = ciclo_atual;
        }

        cout << ini << " " << fim << " " << max_ciclo << endl;
    }
    return 0;
}

