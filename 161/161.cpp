#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaSoAm(float[], int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	XoaSoAm(a, n);
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

void XoaSoAm(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0)
			XoaViTri(a, n, i);
}