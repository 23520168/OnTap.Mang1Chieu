#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
int ktSCP(int);
void XoaSCP(int[], int&);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	XoaSCP(a, n);
	cout << endl << "Mang luc sau: ";
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

int ktSCP(int n)
{
	for (int i = 1; i < n; i++)
		if (i * i == n)
			return 1;
	return 0;
}

void XoaSCP(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktSCP(a[i]) == 1)
			XoaViTri(a, n, i);
}