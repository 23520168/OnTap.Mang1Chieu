#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
float TimSLN(float[], int);
void XoaSLN(float[], int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	XoaSLN(a, n);
	cout << endl << "Mang luc sau: ";
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

float TimSLN(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void XoaSLN(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == TimSLN(a,n))
			XoaViTri(a, n, i);
}