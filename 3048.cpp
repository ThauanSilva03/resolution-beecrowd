//G
#include<bits/stdc++.h>
using namespace std;

int main(){
    int rep,i=0,cont=0;
    cin >> rep;
    int numero[rep];
    while(rep!=0){
        cin >> numero[i];
        if(i > 0){
            if(numero[i] != numero[i-1]) cont++;
        }        
        i++;
        rep--;
    }
    cout << cont + 1 << "\n";
}
