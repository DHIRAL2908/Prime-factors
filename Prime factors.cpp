#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	cout << "Let's calculate the prime factors/L.C.M. of any number!" << endl;
	cout << "Enter any number: ";
	int a; cin >> a;
	int num = a;
	cout << "The prime factors are: ||";
	for (int i = 2; i < 1000; i++) {
		for (int j = 2; j < 1000; j++) {
			if (i % j == 0 && i != j) { i++; } //Checks if i is prime. Returns true if i is not prime and increases i by 1...
			else {
				int b = 0;
				while (a % i == 0 && a > 0) { a -= i; b++; }
				a = num;
				if (b != 0) {
					cout << i << " X " << b << "||";
				}
				j += 999; //Fixes a 499 times occuring loop.
			}
		}

	}
	cout << endl; system("pause");
}