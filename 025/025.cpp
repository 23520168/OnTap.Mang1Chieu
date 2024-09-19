#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	LietKe(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

void LietKe(int a[], int n)
{
	cout << endl;
	if (n <= 1)
	{
		return;
	}
	if (a[0] > a[1])
		cout << a[0] << " ";
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			cout << a[i] << " ";
	}
	if (a[n - 1] > a[n - 2])
		cout << a[n - 1];
}