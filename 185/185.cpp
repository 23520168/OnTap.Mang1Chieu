#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&,int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << endl;
	int vtd, vtc;
	DuongDaiNhat(a, n, vtd, vtc);
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << " ";
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

int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
	{
		if (a[vt + i] <= 0)
			flag = 0;
	}
	return flag;
}

void DuongDaiNhat(float a[], int n, int& vtd, int& vtc)
{
	for (int l = n; l >= 1; l--)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
		}
	}
	vtd = vtc = -1;
}