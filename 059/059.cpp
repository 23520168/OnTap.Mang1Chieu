#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int Dem(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So luong cac phan tu ke nhau ma ca hai deu chan trong mang: " << Dem(b, k);
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

int Dem(int a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;
	for (int i = 1; i < n - 1; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				dem++;
	if (a[n-1] % 2 == 0 && a[n-2] % 2 == 0)
		dem++;
	return dem;
}