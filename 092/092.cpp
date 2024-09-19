#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int kt(int);
int Tim(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So co chu so dau tien la chu so le DAU TIEN trong mang: " << Tim(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	cout << "Nhap mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(8);
	}
}

int kt(int n)
{
	int t = abs(n);
	while (t >= 10)
	{
		t = t / 10;
	}
	if (t % 2 != 0)
		return 1;
	return 0;
}


int Tim(int a[], int n)
{
	if (n < 1)
		return 0;
	for (int i = 0; i < n; i++)
		if (kt(a[i]) == 1)
			return a[i];
	return 0;
}