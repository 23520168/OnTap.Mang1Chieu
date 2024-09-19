#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktHoanThien(int n);
int ktTonTai(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << ktTonTai(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return 1;
	return 0;
}

int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1 && a[i] > 256)
			flag = 1;
	return flag;
}