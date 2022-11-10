#include<iostream>
#include<Windows.h>

using namespace std;

int Fact(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;

	return N * Fact(N - 1);
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a;

	cout << "Введіть число: ";

	cin >> a;

	cout << Fact(a) << endl;
}

