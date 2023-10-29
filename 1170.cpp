//G
#include<bits/stdc++.h>
using namespace std;

int main(){
    int qnt;
    double sup;
    cin >> qnt;
    while(qnt!=0){
        int i = 0;
        cin >> sup;
        while(sup > 1){
            sup = sup/2;
            i++;
        }
        cout << i << " dias\n";
        qnt--;
    }

    return 0;
}
