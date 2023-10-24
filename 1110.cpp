#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    queue <int> myqueue;    //criação da fila
 
    while(cin>>n){   //enquanto ler um numero que não seja zero vai ficar rodando
            if(n==0)
             break;
 
        for(int i=0;i<n;i++){   //int i criado apenas dentro do for
            myqueue.push(i+1);  //i+1 para começar do valor 1
        }
 
        int i = myqueue.size(); //variável i virou o tamanho da fila
 
        cout<<"Discarded cards: ";
 
        while(i!=1){    //enquanto o tamanho da fila for diferente de 1
            int dis = myqueue.front();  //criação da varável para descartar as cartas
            cout<<dis;
            if(i>2){ cout<<", "; }  //se o tamanho da fila for maior que 2 vai criar essas virgulas antes de mostrar o numero
            myqueue.pop();
            i--;    //reduzir o valor de i sempre que algum numero sair da fila
 
            int top = myqueue.front();  //variavel pra armazenar a carta que deve ir pro final da fila
            myqueue.push(top);  //colocando a variavel no final da fila
            myqueue.pop();  //e removendo o numero da variavel do começo da fila para ficar apenas no final
 
        }
            cout<<"\n"<<"Remaining card: "<<myqueue.front()<<endl;
            myqueue = queue<int>();
    }
 
 
    return 0;
}
