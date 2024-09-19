#include <iostream>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktCon(float[], int, int, int);
float TinhTong(float[], int, int, int);
int ViTriDuongDau(float a[], int n);
void Tim(float[], int, int&,int&);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	int vtd, vtc;
	Tim(a, n, vtd, vtc);
	cout << endl << "Day con toan duong co tong lon nhat: " << endl;
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

int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
	{
		if (a[vt + i] <= 0)
			flag = 0;
	}
	return flag;
}

float TinhTong(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}

void Tim(float a[], int n, int& vtd,int& vtc)
{
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = -1;
		return;
	}
	int smax = a[vt];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1 && TinhTong(a, n, vt, l) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = TinhTong(a, n, vt, l);
			}

}