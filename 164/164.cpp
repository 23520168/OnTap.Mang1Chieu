#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
int ktSNT(int);
void XoaSNT(int[], int&);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	XoaSNT(a, n);
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

int ktSNT(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

void XoaSNT(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktSNT(a[i]) == 1)
			XoaViTri(a, n, i);
}