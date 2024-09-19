#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriDau(float[], int);
int Tim(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Vi tri gia tri duong nho nhat trong mang: " << Tim(b, k);
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
		if (a[i] > 0)
			return i;
	return -1;
}

int Tim(float a[], int n)
{
	if (n < 1)
		return 0;
	int lc = ViTriDau(a, n);
	if (lc == -1)
		return 0;
	for (int i = lc; i < n; i++)
		if (a[i] > 0 && a[i] < a[lc])
			lc = i;
	return lc;
}