#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, x1, y1, x2, y2, x3, y3, x, y;
    char op1, op2, op3;

    cin >> n;
    while(n--){
        cin >> x1 >> op1 >> y1; //1 / 3
        cin >> op2; // + - *
        
        cin >> x2 >> op3 >> y2; // 3 / 6
        switch (op2)
        {
        case '-':
            x3 = x1*y2-x2*y1;
            y3 = y1*y2;
            break;
        case '+':
            x3 = x1*y2+x2*y1;
            y3 = y1*y2;
            break;
        case '*':
            x3 = x1*x2;
            y3 = y1*y2;
            break;
        case '/':
            x3 = x1*y2;
            y3 = x2*y1;
            break;
        }

        x = x3;
        y = y3;

        if( x3 > y3){
            for(int i = x3; i > 1; i--){
                if((y3 % i) == 0 && (x3 % i)==0){
                    x = x3 / i;
                    y = y3 / i;
                    break;
                }
            }
        }else{  
            for(int i = y3; i > 1; i--){
                if((y3 % i) == 0 && (x3 % i)==0){
                    x = x3 / i;
                    y = y3 / i;
                    break;
                }
            }
        }

        printf("%d/%d = %d/%d\n", x3,y3,x,y);
    }
    
    return 0;
}
