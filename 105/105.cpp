#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktToanLe(int);
int TimSoToanLeDauTien(int[], int);
int Tim(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So toan chu so le va lon nhat trong mang: " << Tim(b, k);
	return 0;
}

void Nhap(int a[], int& n)
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

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(8);
	}
}

int ktToanLe(int n)
{
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	return flag;
}


int TimSoToanLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) == 1)
			return a[i];
	return -1;
}

int Tim(int a[], int n)
{
	int lc = TimSoToanLeDauTien(a, n);
	if (lc == -1)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) == 1 && a[i] > lc)
			lc = a[i];
	return lc;
}