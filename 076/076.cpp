#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriGanNhat(float[], int, float);

int main()
{
	float b[500];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Nhap x: ";
	cin >> x;
	cout << "Vi tri cua gia tri gan gia tri x nhat trong mang: " << ViTriGanNhat(b, k, x);
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


int ViTriGanNhat(float a[], int n, float x)
{
	int lc = 0;
	for (int i = 1; i < n; i++)
		if (abs(a[i] - x) < abs(a[lc] - x))
			lc = i;
	return lc;
}