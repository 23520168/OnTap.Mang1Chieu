#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucDai(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Tong la: " << TongCucDai(b, k);
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

float TongCucDai(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s = s + a[0];
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i + 1] && a[i] > a[i - 1])
			s = s + a[i];
	}
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}