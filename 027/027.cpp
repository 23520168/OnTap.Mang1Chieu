#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);
void LietKe(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
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

float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

void LietKe(float a[], int n)
{
	float ad = AmDau(a, n);
	if (ad == 0)
		cout << endl << "Khong co gia tri am!!!";
	for (int i = 0; i < n; i++)
		if (a[i] == ad)
			cout << i << " ";
}