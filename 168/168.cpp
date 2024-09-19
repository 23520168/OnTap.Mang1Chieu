#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaX(float[], int&, float);
float TanSuatX(float[], int, float);
void XoaPhanTu(float[], int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	XoaPhanTu(a, n);
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

void XoaX(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}

float TanSuatX(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void XoaPhanTu(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (TanSuatX(a, n, a[i]) > 1)
			XoaX(a, n, a[i]);
}
