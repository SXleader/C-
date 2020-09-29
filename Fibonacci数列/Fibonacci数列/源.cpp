#include<iostream>

using namespace std;

int Fib(int n)//ตÝน้
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int i;
	cin >> i;
	for (int j = 1;j <= i;j++) {
		cout << Fib(j) << '\n';
	}
	return 0;
}