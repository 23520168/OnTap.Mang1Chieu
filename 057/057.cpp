#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemChan(int[], int);
int DemLe(int[], int);
void TuongQuan(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Tuong quan giua gia tri le va chan trong mang: " << endl;
	TuongQuan(b, k);
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

int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}

void TuongQuan(int a[], int n)
{
	int x = DemChan(a, n);
	int y = DemLe(a, n);
	if (x > y)
		cout << "Chan nhieu hon le!!!";
	else
	{
		if (x == y)
			cout << "Chan bang le!!!";
		else
			cout << "Chan it hon le!!!";
	}
}