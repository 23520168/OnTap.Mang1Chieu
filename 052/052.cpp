#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoTanCung(int);
int Dem(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So luong gia tri co chu so tan cung bang 5 trong mang: " << Dem(b, k);
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

int ChuSoTanCung(int n)
{
	int t = abs(n);
	return t % 10;
}


int Dem(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ChuSoTanCung(a[i]) == 5)
			dem++;
	return dem;
}