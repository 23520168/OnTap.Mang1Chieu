#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int SoChanDauTien(int[], int);
int GiaTriChanLonNhat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	LietKe(b, k);
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int SoChanDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return a[i];
	}
	return 0;
}

int GiaTriChanLonNhat(int a[], int n)
{
	int lc = SoChanDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && lc < a[i])
		{
				lc = a[i];
		}
	}
	return lc;
}

void LietKe(int a[], int n)
{
	cout << "Cac vi tri ma gia tri tai do la gia tri chan lon nhat trong mang: ";
	int lc = GiaTriChanLonNhat(a, n);
	if (lc == 0)
		cout << "Mang khong co so chan!!!";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == lc)
			cout << i << " ";
	}
}