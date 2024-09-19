#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCapSoCong(int[], int n);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << ktCapSoCong(b, k);
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

int ktCapSoCong(int a[], int n)
{
	int flag = 1;
	for (int i = 1; i < n - 1; i++)
	{
		if ((a[i + 1] + a[i - 1]) / 2 != a[i])
			flag = 0;
	}
	return flag;
}