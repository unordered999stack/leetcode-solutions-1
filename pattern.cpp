#include <iostream>
using namespace std;

void pypart2(int n)
{
	int i = 0, j = 0, k = 0;
	while (i < n) {
	
		while (k <= n - i - 2) {
			cout << " ";
			k++;
		}
		k = 0;
	
		while (j < 2 * i - 1) {
			cout << "*";
			j++;
		}
		j = 0;
		i++;
		cout << endl;
	}
}

int main()
{
	int n = 5;

	pypart2(n);
	return 0;
}
