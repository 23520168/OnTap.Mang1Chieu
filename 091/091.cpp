#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int);
int Tim(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So doi xung dau tien trong mang: " << Tim(b, k);
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

int ktDoiXung(int n)
{
	int s = 0;
	int t = abs(n);
	while (t != 0)
	{
		s = s * 10 + t % 10;
		t = t / 10;
	}
	if (s == n)
		return 1;
	return 0;
}


int Tim(int a[], int n)
{
	if (n < 1)
		return 10;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]) == 1)
			return a[i];
	return 10;
}