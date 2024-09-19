#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float SoDuongDauTien(float[], int);
float GiaTriDuongNhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	LietKe(b, k);
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}

float SoDuongDauTien(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];
	}
	return -1;
}

float GiaTriDuongNhoNhat(float a[], int n)
{
	float lc = SoDuongDauTien(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			if (lc > a[i])
				lc = a[i];
		}
	}
	return lc;
}

void LietKe(float a[], int n)
{
	cout << "Cac vi tri ma gia tri tai do la gia tri duong nho nhat trong mang: ";
	float lc = GiaTriDuongNhoNhat(a, n);
	if (lc == -1)
		cout << "Mang khong co gia tri duong!!!";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == lc)
			cout << i << " ";
	}
}