#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktNguyenTo(int);
float TBC(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Trung binh cong la: " << TBC(b, k);
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

int ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

float TBC(int a[], int n)
{
	int s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]) == 1)
			dem++;
	for (int i = 0; i < n; i++)
	{
		if (ktNguyenTo(a[i]) == 1)
			s = s + a[i];
	}
	if (dem == 0)
		return 0;
	return (float)s/dem;
}