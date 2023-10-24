#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){

	double a,b,c,delta,x1,x2,raizDelta;
	cin >> a >> b >> c;
	delta =  (b*b) - 4 * a * c;
	raizDelta = sqrt(delta);
	x1 =  ((-b + raizDelta) / (2*a));
	x2 = ((-b - raizDelta) / (2*a));
	if(delta < 0 or a == 0){
		cout << "Impossivel calcular" << endl;
	}
	else{
		cout << fixed << setprecision(5);
		cout << "R1 = " << x1 << endl;
		cout << "R2 = " << x2 << endl;
	}
	
	return 0;
}
