#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	float x;
	cout << endl << "Nhap gia tri can them: ";
	cin >> x;
	ThemBaoToan(a, n, x);
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

void ThemBaoToan(float a[], int& n, float x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}