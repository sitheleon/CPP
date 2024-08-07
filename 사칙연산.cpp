#include <iostream>

using namespace std;




int add(int i_a, int i_b) {
	return i_a + i_b;
}

int sub(int i_a, int i_b) {
	return i_a - i_b;
}

int mul(int i_a, int i_b) {
	return i_a * i_b;
}
int div(int i_a, double i_b) {
	return i_a / i_b;
}

double lftover(int i_a, int i_b) {
	return i_a % i_b;
}

int main() {
	int a;
	double b;

	cout << "Input A: ";
	cin >> a;

	if (a >= 1) {
		cout << "Input B: ";
		cin >> b;
		if (b <= 10000) {
			cout << "A + B = " << add(a, b) << endl;
			cout << "A - B = " << sub(a, b) << endl;
			cout << "A x B = " << mul(a, b) << endl;
			cout << "A / B = " << div(a, b) << endl;
			cout << "A % B = " << lftover(a, b) << endl;
		}
		else {
			cout << "B must be less than 10,000" << endl;
			return 0;
		}
	}
	else {
		cout << "A must be bigger than 1" << endl;
		return 0;
	}

}