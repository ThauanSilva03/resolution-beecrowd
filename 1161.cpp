#include<bits/stdc++.h>
using namespace std;

long long fato(int x){
    long long fato = 1;
    for(int i = x;i>0;i--){
        fato*=i;
    }
    return fato;
}

int main(){
    int n1,n2;
    long long fato1, fato2,somaFato;
    while(cin >> n1 >> n2){
        somaFato = 0;
        if(n1 == 0){
            fato1 = 1;
        }else{
            fato1 = fato(n1);
        }
        if(n2 == 0){
            fato2 = 1;
        }else{
            fato2 = fato(n2);
        }
        somaFato = fato1 + fato2;
        std::cout << somaFato << "\n";
    }
    return 0;
}
