#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Duasochiahetcho3vedau(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	Duasochiahetcho3vedau(a, n);
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

void Duasochiahetcho3vedau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0)
		{
			float temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
	}
}