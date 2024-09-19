#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TB(float[], int);

int main()
{
	float b[500];
	int k;
	float x;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Trung binh la: " << TB(b, k);
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

float TB(float a[], int n)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		for(int j =0;j<n;j++)
			if (i != j)
			{
				s = s + abs(a[i] - a[j]);
				dem++;
			}
	if (dem == 0)
		return 0;
	return s / dem;
}