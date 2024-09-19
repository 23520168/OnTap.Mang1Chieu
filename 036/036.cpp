#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktChinhPhuong(int);
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

int ktChinhPhuong(int n)
{
	for (int i = 0; i < n; i++)
		if (i * i == n)
			return 1;
	return 0;
}

int Tong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktChinhPhuong(a[i]) == 1)
			s = s + a[i];
	}
	return s;
}