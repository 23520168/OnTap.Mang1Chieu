#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int kt(int[], int n, int[], int);

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
	cout << endl << kt(a, n, b, k);
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int kt(int a[], int n, int b[], int k)
{
	int flag = 1;
	for (int i = 1; i < n; i++)
	{
		if (TanSuat(b, k, a[i]) == 0)
			flag = 0;
	}
	return flag;
}