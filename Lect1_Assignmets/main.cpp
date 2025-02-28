#include <iostream>
using namespace std;
int uoc_max(int a, int b)
{
	int n = a % b;
	if (n == 0)
	{
		return b;
	}
	else {
		uoc_max(b, n);
	}
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << uoc_max(a, b);
	return 0;
}
