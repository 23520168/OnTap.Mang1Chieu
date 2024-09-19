#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TB(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Trung binh cong cac so duong la: " << TB(b, k);
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

float TB(float a[], int n)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			s = s + a[i];
	return s/dem;
}
