#include<bits/stdc++.h>
using namespace std;

int main(){
    int maiorDivisor=0,ric,vic,qt;
    scanf("%d",&qt);
    for(int i = 0;i<qt;i++){
        scanf("%d %d",&ric,&vic);
        while(vic != 0){
            maiorDivisor = ric % vic;
            ric = vic;
            vic = maiorDivisor;
        }
        printf("%d\n",ric);
    }     
    return 0;
}