#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float NhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl << "Vi tri ma gia tri tai do nho nhat: ";
	LietKe(b, k);
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (lc > a[i])
			lc = a[i];
	}
	return lc;
}

void LietKe(float a[], int n)
{
	float lc = NhoNhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == lc)
			cout << i << " ";
	}
}