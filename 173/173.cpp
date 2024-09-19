#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatCon(float[], int, int vt, int l);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int vt;
	int l;
	cout << endl <<"Nhap do dai mang con: ";
	cin >> l;
	cout << "Nhap vi tri bat dau xuat: ";
	cin >> vt;
	XuatCon(a, n, vt, l);
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

void XuatCon(float a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
	{
		cout << a[vt + i] << "  ";
	}
}