#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriDau(float[], int);
float Tim(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Gia tri am lon nhat trong mang: " << Tim(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	cout << "Nhap mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(8);
	}
}

int ViTriDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return i;
	return -1;
}

float Tim(float a[], int n)
{
	if (n < 1)
		return 0;
	int j = ViTriDau(a, n);
	if (j == -1)
		return 0;
	float lc = a[j];
	for (int i = j; i < n; i++)
		if (a[i] < 0 && a[i] > lc)
			lc = a[i];
	return lc;
}