#include <iostream>
using namespace std;

unsigned int iterativefact(unsigned int n){
	int rc=1;
	for(int i=n;i>=1;i--){
		rc=rc*i;
	}
	return rc;
}
unsigned int fact(unsigned int n){
	int rc=1;
	if(n>1){
		rc = n * fact(n-1);
	}
	return rc;
}
/*this function returns the nth fibonacci number.
fib(0) = 0
fib(1) = 1
fib(2) = 0 + 1 = 1
fib(3) = 1 + 1 = 2
fib(4) = fib(3) + fib(2) = 2 + 1 = 3
fib(n) = sum of the two previous fibonacii
*/
unsigned iterativeFib(unsigned int n){
    unsigned int rc;
    unsigned int nMinus1;
    unsigned int nMinus2;
	if(n == 0){
	   rc=0;
    }
    else if(n==1){
    	rc=1;
    }
    else{
    	nMinus1=1;
    	nMinus2=0;
    	for(int i=2;i<=n;i++){
    		rc=nMinus1 + nMinus2;
    		nMinus2=nMinus1;
    		nMinus1=rc;
    	}
    }
    return rc;
}
unsigned fib(unsigned int n){
	if(n == 0){
		return 0;		
	}
	else if(n==1){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}
/*the following solution used the idea
that base^n = base * base^n-1*/
double power(double base, int n){
	double rc =1;
	if(n>=1){
		rc=base*power(base,n-1);
	}
	return rc;
}
/*

	base^n = base^(n/2) * base^(n/2)          if n is even
	base^n = base^(n/2) * base^(n/2) * base   if n is odd

*/
double pow(double base, int n){
	double rc=1;
	if(n>0){
		double tmp=pow(base,n/2);
		if(n%2 == 0){
			rc=tmp*tmp;
		}
		else{
			rc=tmp*tmp*base;
		}
	}
	return rc;
}
/*Let n represent exponent we are finding base of
  Let T(n) represent number of operations needed to find base^n

T(0) = 3;

T(1) = 9 + number of ops needed to calculate base^0
     = 9 + T(0) = 9 + 3

T(2) = 8 + T(1) = 8 + 9 + T(0) 
T(3) = 9 + T(1) = 9 + 9 + T(0)

T(4) = 8 + T(2) = 8 + 8 + T(1) = 8 + 8 + 9 + T(0)
T(5) = 9 + T(2) = 9 + 8 + T(1) 
T(6) = 8 + T(3) = 8 + 9 + T(1)
T(7) = 9 + T(3) = 9 + 9 + T(1)

T(8) = 8 + T(4) = 8 + 8 + 8 + 9 + T(0)
T(15)= 9 + T(7) = 9 + 9 + 9 + 9 + T(0)

T(16) = 8 + T(8)= 8 + 8 + 8 +8 + 9 + T(0)
T(n) = 9 * (floor(log(n))+1) + T(0)
*/


double iterativePower(double base, int n){
	double rc=1;
	for(int i=0;i<n;i++){
		rc=rc*base;
	}
	return rc;
}
int main(void){
	unsigned int v1 = iterativeFib(45);
	cout << "iterative fib(45) "<< v1 << endl;

	unsigned int v2 = fib(45);
	cout << "fib(45) "<< v2 << endl;
}






