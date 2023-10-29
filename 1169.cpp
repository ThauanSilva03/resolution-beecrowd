//G
#include<bits/stdc++.h>
using namespace std;

int main(){
    int opc;
    unsigned long long graos;
    cin >> opc;
    for(int i = 0;i<opc;i++){
        cin >> graos;
        graos = (pow(2,graos)/12)/1000;
        cout << graos << " kg" << endl;
    }
    return 0;
}
