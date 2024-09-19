#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaX(float[], int&, int);

int main()
{
	float a[500];
	int n;
	float x;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << endl <<"Nhap x: ";
	cin >> x;
	XoaX(a, n, x);
	cout << "Mang luc sau: ";
	Xuat(a, n);
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

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaX(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}