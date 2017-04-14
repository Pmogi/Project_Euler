// Even fib numbers up to 4million

#include <iostream>
using namespace std;

int fib(){
	// starting values of the fib sequence
	int i = 0;
	int j = 1;
	
	int sum = 0;
	// do the fib sequence until the sum
	while (i <= 4000000 || j <= 4000000){
		i += j;
		// if this current value is divisible by 2, even, add them to the sum
		if ( i%2 == 0 ){
			sum += i;
	}
		j += i;
		if (j%2 == 0){
			// samething as the last if statement
			sum += j;
		}
	}
	return sum;
}


int main()
{
	// to keep things modular and clean I kept the math function out of main
	int fibNum = fib();
	cout << "The value of even fib values up to 4,000,000 is " << fibNum << endl;
	return 0;
}
