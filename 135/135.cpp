#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	float b[500];
	int k;
	cout << endl << "Mang duoc tao: " << endl;
	XayDung(a, n, b, k);
	Xuat(b, k);
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

void XayDung(float a[], int n, float b[], int& k)
{
	k = 1;
	b[0] = a[1];
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}
	k = n;
	for (int i = 1; i < n - 1; i++)
	{
		b[i] = a[i - 1] + a[i + 1];
	}
	b[k - 1] = a[n - 2];
}