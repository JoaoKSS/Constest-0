#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0;
    string plv;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> plv;
        string saida = "";
        if(plv.length() <= 10)
            cout << plv << endl;
        else{
          saida += plv[0];
          saida += to_string(plv.length()-2);
          saida += plv[plv.length()-1];  
          cout << saida << endl;
        }   
    }

    return 0;
}

