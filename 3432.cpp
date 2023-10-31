#include<bits/stdc++.h>
using namespace std;

int main(){
        int bits;
        string res = "S";
        for(int i = 0;i<8;i++){
                cin >> bits;
                if(bits == 9){
                        res = "F";
                }
        }
        
        cout << res << endl;

        return 0;
}
