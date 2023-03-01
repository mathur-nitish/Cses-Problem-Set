#include<iostream>
using namespace std;

int main() {
	int n; int Total = 0, SumOfGiven = 0;
	cin >> n;
	int A[n];
	int size = n - 1;
	int B[size];
	for (int i = 0; i < size; i++) {
		cin >> A[i];
		SumOfGiven += A[i];
	}
	for (int i = 0; i <= n; i++) {
		Total += i;
	}
	cout << Total - SumOfGiven << endl;
}
