#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TBN(float[], int);

int main()
{
	float b[500];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "Trung binh nhan la: " << TBN(b, k);
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

float TBN(float a[], int n)
{
	float T = 1;
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			T = T * a[i];
	if (dem == 0)
		return 0;
	return pow(T, (float)1 / dem);
}