#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TBC(float[], int, float);

int main()
{
	float b[500];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Nhap x: ";
	cin >> x;
	cout << "Trung binh cong la: " << TBC(b, k, x);
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

float TBC(float a[], int n, float x)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			dem++;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			s = s + a[i];
	if (dem == 0)
		return 0;
	return (float)s / dem;
}