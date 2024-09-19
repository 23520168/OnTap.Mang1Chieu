#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktSNT(int);
void XayDung(int[], int n, int[], int&);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int b[500];
	int k;
	cout << endl << "Mang duoc tao: " << endl;
	XayDung(a, n, b, k);
	Xuat(b, k);
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
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktSNT(a[i]) == 1)
		{
			b[k] = a[i];
			k++;
		}
	}
}