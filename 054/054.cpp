#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int);
int Dem(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So luong gia tri doi xung trong mang: " << Dem(b, k);
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
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (n == dn)
		return 1;
	return 0;
}


int Dem(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]) == 1)
			dem++;
	return dem;
}