#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float GTLN(float[], int);
float GTNN(float[], int);
void BienDoi(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	BienDoi(a, n);
	cout << endl << "Bien  doi: ";
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

float GTLN(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

float GTNN(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}

void BienDoi(float a[], int n)
{
	float ln = GTLN(a, n);
	float nn = GTNN(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ln || a[i] == nn)
			a[i] = ln + nn - a[i];
	}
}