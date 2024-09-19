#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
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
	cout << endl << "Cac gia tri chi xuat hien 1 lan trong 2 mang: " << Dem(a, n, b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	cout << "Nhap mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(8);
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

int Dem(int a[], int n, int b[], int k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, k, a[i]) == 0 && flag == 1)
			dem++;
	}
	for (int i = 0; i < k; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag == 1)
			dem++;
	}
	return dem;
}