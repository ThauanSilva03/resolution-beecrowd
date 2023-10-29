#include<bits/stdc++.h>
using namespace std;

int main(){
    int numero;
    long long fato=1;
    cin >> numero;
    
    for(int i = numero;i>0;i--){
        fato*=i;
    }
    cout << fato << "\n";
}
