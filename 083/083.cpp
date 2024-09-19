#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int Tim(int[], int, int, int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int x;
	int y;
	cout << endl << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Gia tri dau tien trong mang nam trong doan (x,y): " << Tim(b, k, x, y);
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


int Tim(int a[], int n, int x, int y)
{
	if (n < 1)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return 0;
}