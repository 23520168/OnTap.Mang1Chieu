#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int[], int, int[], int);

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
	cout << endl << "So lan xuat hien cua mang thu nhat trong mang thu hai: "<<DemXuatHien(a, n, b, k);
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

int DemXuatHien(int a[], int n, int b[], int k)
{
	if (n > k)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= k - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}