#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang a ban dau: ";
	Xuat(a, n);
	int b[500];
	int m;
	cout << endl;
	Nhap(b, m);
	cout << "Mang b ban dau: ";
	Xuat(b, m);
	int c[500];
	int p;
	cout << endl << "Tron: ";
	Tron(a, n, b, m, c, p);
	Xuat(c, p);
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

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}