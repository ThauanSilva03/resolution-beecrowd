//código pego de outra pessoa
//author: Shohanur Rahaman
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#define N 1000001
 
using namespace std;
 
int split(char ara[],int len,int year)
{
    int long long n=0;
 
    for(int i=0;i<len;i++){
        n=( n*10+ (ara[i]-'0') )%year;
    }
    if(n==0)
        return 0;
    else
        return 1;
 
}
 
 
int main()
{
    char year[N]={0};
    int unsigned  long long len, n=0;
    int l,f,line;
 
line=0;
 
    while(scanf("%s",year)==1){
        n=0;
       len=strlen(year);
 
       if(line==1)
        cout<<endl;
 
        line=1;
        f=0;
        l=0;
 
         if( split(year,len,4)==0 && split(year,len,100) !=0 || split(year,len,400)==0 ){
             printf("This is leap year.\n");
             f=1;
             l=1;
         }
         if(split(year,len,15)==0){
           printf("This is huluculu festival year.\n");
            f=1;
         }
        if(split(year,len,55)==0 && l==1){
            printf("This is bulukulu festival year.\n");
        }
        if(f==0)
           printf("This is an ordinary year.\n");
 
        memset(year,'0',len+1);
    }
 
    return 0;
}
