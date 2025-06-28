#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> esq_min(n);
        esq_min[0] = 0;
        for (int i = 1; i < n; i++)
            esq_min[i] = (a[i] < a[esq_min[i - 1]]) ? i : esq_min[i - 1];
        
        bool encontrado = false;
        for (int j = 1; j < n - 1 && !encontrado; j++){
            if(a[esq_min[j - 1]] < a[j]){
                for (int k = j + 1; k < n; k++){
                    if(a[k] < a[j]){
                        cout << "YES" << endl << esq_min[j - 1] + 1 << " " << j + 1 << " " << k + 1 << endl;
                        encontrado = true;
                        break;
                    }
                }
            }
        }
        if(!encontrado)
            cout << "NO" << endl;
    }

    return 0;
}

