#include <iostream>
using namespace std;

int addArray(int *, int);
//is this int * can be used for the array of integer as well?
int main() {
	int x[] = {1,2,3,4,5};
	int size = sizeof(x)/sizeof(x[0]);
	cout << size << "C++ version... The sum is:" << endl;
	cout <<  addArray(x, size);
	cin.get();
	return 0;
}

int addArray(int * a, int n) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	return sum;

}
