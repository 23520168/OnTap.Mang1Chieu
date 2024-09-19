#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatCon(float[], int, int vt, int l);
void XuatTatCaMangConDoDaiLonHon2(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	XuatTatCaMangConDoDaiLonHon2(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void XuatCon(float a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
	{
		cout << a[vt + i] << "  ";
	}
}

void XuatTatCaMangConDoDaiLonHon2(float a[], int n)
{
	for (int l = 3; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			cout << endl;
			XuatCon(a, n, vt, l);
		}
	}
}