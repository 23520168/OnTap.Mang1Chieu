#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int Dem(float[], int);

int main()
{
	float b[500];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So luong cac phan tu thoa yeu cau trong mang: " << Dem(b, k);
	return 0;
}

void Nhap(float a[], int& n)
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

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(8);
	}
}


int Dem(float a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] * a[1] > 0 && abs(a[1]) > abs(a[0]))
		dem++;
	for (int i = 1; i < n - 1; i++)
		if (a[i + 1] * a[i] > 0 && abs(a[i + 1]) > abs(a[i]))
			dem++;
	if (a[n - 1] * a[n - 2] > 0 && abs(a[n - 1]) > abs(a[n - 2]))
		dem++;
	return dem;
}