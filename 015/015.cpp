#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int, int, int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	int x, y;
	cout << endl << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	LietKe(b, k, x, y);
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}

void LietKe(float a[], int n, int x, int y)
{
	cout << "Cac gia tri trong khoang [" << x << "," << y << "]: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x && a[i] <= y)
			cout << setw(10) << a[i];
	}
}