#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float GTLN(float[], int);
int Dem(float[], int);

int main()
{
	float b[500];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So luong gia tri lon nhat trong mang la: " << Dem(b, k);
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

float GTLN(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
		if (lc < a[i])
			lc = a[i];
	return lc;
}
 

int Dem(float a[], int n)
{
	int dem = 0;
	float lc = GTLN(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			dem++;
	return dem;
}