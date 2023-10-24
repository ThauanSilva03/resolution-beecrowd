#include<bits/stdc++.h>
using namespace std;

int main(){
    int rep;
    cin >> rep;
    for(int t=0;t<rep;t++){    
        string a, b;
        int tamanhoA,tamanhoB,soma=0;
        cin >> a >> b;
        tamanhoA = a.size();
        tamanhoB = b.size();
        int auxA = tamanhoA;
        int auxB = tamanhoB;
        for(int i = tamanhoB-1;i>=0;i--){
            if(a[auxA-1] == b[auxB-1])
                soma++;
            auxA--;
            auxB--;
        }
        if(soma == tamanhoB){
            cout << "encaixa" << endl;
        }else{
            cout << "nao encaixa" << endl;
        }
    }


}
