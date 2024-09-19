#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktHoanThien(int);
int Tim(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So hoan thien cuoi cung trong mang: " << Tim(b, k);
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

int ktHoanThien(int n)
{
	int s = 0;
	if (n < 2)
		return 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return 1;
	return 0;
}


int Tim(int a[], int n)
{
	if (n < 1)
		return -1;
	for (int i = n-1; i >= 0; i--)
		if (ktHoanThien(a[i]) == 1)
			return a[i];
	return -1;
}