#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, int&);
void SapTang(float[], int);
int ktHoanVi(float[], int, float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang a ban dau: ";
	Xuat(a, n);
	float b[500];
	int m;
	cout << endl;
	Nhap(b, m);
	cout << "Mang b ban dau: ";
	Xuat(b, m);
	int kt = ktHoanVi(a, n, b, m);
	cout << endl << kt;
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

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void SapTang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}

int ktHoanVi(float a[], int n, float b[], int m)
{
	if (n != m)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}
