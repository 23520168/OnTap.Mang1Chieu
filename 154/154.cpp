#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void DaoMang(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	DaoMang(a, n);
	cout << endl << "Mang luc sau: ";
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
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

void DaoMang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while(d<c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;			
		d++;
		c--;
	}
}