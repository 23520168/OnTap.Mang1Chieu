#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int n, float[], int&);

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
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[k] = a[i];
			k++;
		}
	}
}