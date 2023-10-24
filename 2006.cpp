#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,c,d,e,count=0;
    cin >> n;
    cin >> a >> b >> c >> d >> e;
    if(a == n)
    count = count + 1;
    if(b == n)
    count = count + 1;
    if(c == n)
    count = count + 1;
    if(d == n)
    count = count + 1;
    if(e == n)
    count = count + 1;

    cout << count << endl;
    return 0;
}
