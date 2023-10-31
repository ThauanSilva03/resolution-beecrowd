#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,y;
    while(cin >> x >> y){
        
        if(x > y){
            cout << x - y << endl;
        }else if(x < y){
            cout << y - x << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}
