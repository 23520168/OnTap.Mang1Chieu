#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void GanNhat(float[], int, float&, float&);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	float x = b[0];
	float y = b[1];
	GanNhat(b, k, x, y);
	cout << endl << "Cap gia tri gan nhau nhat trong mang: (" << x << ", " << y << ")" << endl;
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

void GanNhat(float a[], int n, float& x, float& y)
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