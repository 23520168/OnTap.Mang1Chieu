#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktSNT(int);
void BienDoi(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	BienDoi(a, n);
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

int ktSNT(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return 1;
	return 0;
}

void BienDoi(int a[], int n)
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0 ; i--)
	{
		if (ktSNT(a[i]) == 1)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
	}
}