#include <iostream>
using namespace std;

int main(){
	int n= 1234;
	int reverseOFn= 0;
	
	while( n > 0){
		reverseOFn = reverseOFn * 10 + n % 10;
		n = n/10;
	}
	cout<< "Reverseof of n is: " << reverseOFn;
}
