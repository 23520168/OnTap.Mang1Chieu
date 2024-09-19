#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
int ktSNT(int);
void SapXep(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	SapXep(a, n);
	cout << endl << "Sap xep: ";
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

void HoanVi(int& x, int& y)
{
	float temp = x;
	x = y;
	y = temp;
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

void SapXep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (ktSNT(a[i]) == 1 && ktSNT(a[j]) == 1 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}