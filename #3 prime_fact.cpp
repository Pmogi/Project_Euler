// largest prime factor of 600851475143
// Wrote this while on a lunchbreak without wifi, really proud of myself

#include <iostream>
using namespace std;

int fact(){
	// I had to give a lot of room for the number becuase of how big it is
	int long unsigned number = 600851475143;
	
	for (int i = 2; number > 1; i++){
		// check the remainder of the number by the current i value
		
		int primeCheck = number % i;
		// if there is no remainder, it's a factor of the current number
		
		if (primeCheck == 0){
			// factor the number by the current factoring number
			
			number /= i;
			// output the factors
			// makes a tree of all the factors with this output
			cout << number << "\t" << i << endl;
		}
		
	}
	// I ran into some issues with my compilier involving the scope of i, but after using -fpermissive flag in g++ it compiled correctly
	// returns the value of the largest prime factor to print in main function
	return i;
}

int main(){
	int fact_num = fact();
	cout << "The largest prime factor of 600851475143 is " << fact_num << endl;
	return 0;
}

