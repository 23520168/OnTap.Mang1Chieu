#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void Duaso1vedau(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	Duaso1vedau(a, n);
	cout << endl << "Mang luc sau: ";
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void Duaso1vedau(float a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			float temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
	}
}