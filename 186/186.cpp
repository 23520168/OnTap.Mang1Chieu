#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TinhTong(int[], int, int, int);
void Tim(int[], int, int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int M;
	cout << endl << "Nhap M: ";
	cin >> M;
	Tim(a, n, M);
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

int TinhTong(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

void Tim(int a[], int n, int M)
{
	for (int l = 0; l <= n; l++)
	{
		for (int vt = 0; vt < n; vt++)
		{
			if(TinhTong(a,n,vt,l)==M)
			{
				for (int i = 0; i < l; i++)
					cout << " " << a[vt + i];
				cout << endl;
			}
		}
	}
}