#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DichTrai(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	DichTrai(a, n);
	cout << endl << "Mang luc sau: ";
	Xuat(a, n);
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

void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i < n - 1; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}