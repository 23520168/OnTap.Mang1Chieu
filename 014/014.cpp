#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktChinhPhuong(int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	LietKe(b, k);
	return 0;
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

int ktChinhPhuong(int n)
{
	for (int i = 1; i <= n; i++)
		if (i * i == n)
			return 1;
	return 0;
}

void LietKe(int a[], int n)
{
	cout << endl << "Cac tri tri ma gia tri tai do la so chinh phuong: ";
	for (int i = 0; i < n; i++)
	{
		if (ktChinhPhuong(a[i]) == 1)
			cout << setw(10) << i;
	}
}