#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TinhTong(float[], int, int, int);
void Tim(float[], int, int&, int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int vtd, vtc;
	Tim(a, n, vtd, vtc);
	cout << endl << "Mang con co tong lon nhat: " << endl;
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << " ";
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

float TinhTong(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

void Tim(float a[], int n, int& vtd, int& vtc)
{
	float smax = 0;
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TinhTong(a, n, vt, l) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = TinhTong(a, n, vt, l);
			}

}