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
double power(double base, int n){
//	this function calculate base ^ n
}
double iterativePower(double base, int n){

}
int main(void){
	unsigned int v1 = iterativeFib(45);
	cout << "iterative fib(45) "<< v1 << endl;

	unsigned int v2 = fib(45);
	cout << "fib(45) "<< v2 << endl;
}






