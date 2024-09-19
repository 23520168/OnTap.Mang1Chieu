#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ViTriGTNN(float[], int);

int main()
{
	float b[500];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Vi tri gia tri nho nhat trong mang: " << ViTriGTNN(b, k);
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


int ViTriGTNN(float a[], int n)
{
	int lc = 0;
	for (int i = 1; i < n; i++)
		if (a[i] < a[lc])
			lc = i;
	return lc;
}