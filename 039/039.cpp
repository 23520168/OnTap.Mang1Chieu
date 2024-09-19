#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDauTien(int);
int Tong(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Tong la: " << Tong(b, k);
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

int ChuSoDauTien(int n)
{
	int t = abs(n);
	while (t >= 10)
	{
		t = t / 10;
	}
	return t;
}

int Tong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (ChuSoDauTien(a[i]) % 2 == 0)
			s = s + a[i];
	}
	return s;
}