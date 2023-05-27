#include<iostream>
using namespace std;

int factorialRecursion(int n) {
	if (n == 1)
		return 1;

	else
		return n * factorialRecursion(n - 1);
}

int main() {
	int n;
	cout << "what is number?";
	cin >> n;

	cout << n << "=" << factorialRecursion(n);




	return 0;
}