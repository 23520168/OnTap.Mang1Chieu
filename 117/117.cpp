#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktKhong(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << ktKhong(b, k);
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

int ktKhong(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != 0)
			flag = 0;
	return flag;
}