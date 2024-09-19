#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemCucTieu(float[], int);
int DemCucDai(float[], int);
int DemCucTri(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "So phan tu cuc tri trong mang la: " << DemCucTri(b, k);
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

int DemCucTieu(float a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			dem++;
	}
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}

int DemCucDai(float a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] > a[1])
		dem++;
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i + 1] && a[i] > a[i - 1])
			dem++;
	}
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem;
}

int DemCucTri(float a[], int n)
{
	float d1 = DemCucDai(a, n);
	float d2 = DemCucTieu(a, n);
	return d1 + d2;
}