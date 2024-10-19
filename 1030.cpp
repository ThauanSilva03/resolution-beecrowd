#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, c = 1;
    cin >> t;
    int g = 0;
    while(t--){
        cin >> n >> k;
        int v[n];
        for(int i=0;i<n;i++){
            v[i] = i+1;
        }
        int j = n, i = 0;
        while(j > 1){
            while(v[i] == 0){
                i++;
                if(i >= n){
                    i -= n;
                }
            }
            if(v[i] != 0 && c != k){
                i++;
                c++;
                if(i >= n)
                    i-=n;
            }else if(v[i] != 0 && c == k){
                v[i] = 0;
                c = 1;
                j--;
            }
        }
        g++;
        for(int i = 0;i<n;i++){
            if(v[i] != 0){
                cout << "Case " << g << ": " << v[i] << '\n';
                break;
            }
        }
    }
    return 0;
}
