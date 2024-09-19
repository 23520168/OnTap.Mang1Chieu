#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatCon(float[], int, int vt, int l);
void XuatTatCaMangConDoDail(float[], int, int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int l;
	cout << endl << "Nhap do dai mang con: ";
	cin >> l;
	XuatTatCaMangConDoDail(a, n, l);
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

void XuatTatCaMangConDoDail(float a[], int n, int l)
{
	for (int vt = 0; vt <= n - l; vt++)
	{
		cout << endl;
		XuatCon(a, n, vt, l);
	}
}