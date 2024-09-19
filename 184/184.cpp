#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int Dem(int[], int, int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int b[500];
	int k;
	cout << endl;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << Dem(a, n, b, k);
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

int Dem(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem=0;	
	for (int vt = 0; vt <= m - n; vt++)
	{
		int c = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				c = 0;
		if (c == 1)
			dem++;
	}
	return dem;
}