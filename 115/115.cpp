#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void GanNhat(int[], int, int&, int&);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int x = b[0];
	int y = b[1];
	cout << endl << "Cac cap gia tri gan nhau nhat trong mang: " << endl;
	LietKe(b, k);
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

void GanNhat(int a[], int n, int& x, int& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
}

void LietKe(int a[], int n)
{
	int x;
	int y;
	GanNhat(a, n, x, y);
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if ((i != j) && abs(a[i] - a[j]) == abs(x - y))
				cout << "(" << a[i] << ", " << a[j] << ")" << endl;
}
