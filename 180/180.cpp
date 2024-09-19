#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int, int);
int Dem(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << endl << "So luong mang con tang co do dai lon hon 1: "<< Dem(a, n);
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

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
	{
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	}
	return flag;
}

int Dem(int a[], int n)
{
	int dem = 0;
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				dem++;
			}
		}
	}
	return dem;
}