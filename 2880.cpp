#include<bits/stdc++.h>
using namespace std;

int main(){
        string a,b; 
        cin >> a >> b;
        int tmnA = a.size();
        int tmnB = b.size();
        int cont=0;
        for(int i = 0;tmnA-i>=tmnB;i++){
                int j;
                //a cada teste passa um pro lado
                for(j = 0;j<tmnB;j++){
                        //vai passar em toda a string B
                        if(a[i+j] == b[j]){//se os caracteres forem iguais, vai parar
                                break;
                        }
                        
                }
                //se j for percorrido por completo conta mais um
                if(j == tmnB){
                        cont++;
                }
                
        }
        cout << cont << endl;
        
        return 0;
}
