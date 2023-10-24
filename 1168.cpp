#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string x;
    int y;
    int soma = 0;
    int rep;
    cin >> rep;
    for(int j = 0;j<rep;j++){
        cin >> x;
        y = x.size();
        for(int i = 0;i<y;i++){
            if(x[i] == '1'){
                soma += 2;
            }else if(x[i] == '2' or x[i] == '3' or x[i] == '5'){
                soma += 5;
            }else if(x[i] == '4'){
                soma += 4;
            }else if(x[i] == '6' or x[i] == '9' or x[i] == '0'){
                soma += 6;
            }else if(x[i] == '7'){
                soma += 3;
            }else if(x[i] == '8'){
                soma += 7;
            }
            
        }
        cout << soma << " leds" << endl;
        soma = 0;
    }    
        



    return 0;
}
