#include<bits/stdc++.h>
using namespace std;

int main(){

    int h1,h2,m1,m2;
    int inicio, fim;
    while(true){
        cin >> h1 >> m1 >> h2 >> m2;
        if((h1 == 0 and m1 == 0) and (h2 == 0 and m2 == 0)){
            break;
        }
        if(h1 == 0){
            inicio = 24*60 + m1;
        }else{
            inicio = h1*60 + m1;
        }
        if(h2 == 0){
            fim = 24*60 + m2;
        }else{
            fim = h2*60 + m2;
        }
        if(fim > inicio){
            cout << fim - inicio << endl;
        }else{
            cout << 24*60 - (inicio - fim) << endl;
        }
    }

    return 0;
}
