#include "ArithmeticMethods.h"
#include <iostream>

using namespace std;

bool IsOdd(int i){
	return i  % 2 == 1;
};

bool IsPrime(unsigned int i){
	if(i <=1){return false;}

	for(int k=2; k < i; k++){
		if(i % k == 0){return false;}
	}

	return true;
}

int Factorial(unsigned int n){
	if(n==0){return 1;}

	return n*Factorial(n-1);
}

int FactorialNoRecursion(unsigned int n)
{
	int result = 1;
	for(int i=1; i <= n; i++){
		result *= i;
	}
	return result;
}

int GreatestPrimeFactor(unsigned int n){
	int maxPrime =1;
	for(int i=1; i <= n; i++){
		if(n % i==0 && IsPrime(i))
		{
			maxPrime = i;
		}
	}
	return maxPrime;
}

void Pythagorician(void){
	int a=0;
	int b=0;
	while(a+b <=1000){
		int c = 1000- a - b;
		if(a*a + b*b == c*c){
			cout << "a = " << a <<"b = " << a << "c = " << a <<endl;
		}
		a++;
		b++;
	}
}