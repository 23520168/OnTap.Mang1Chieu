#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int b[500];
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

void LietKe(int a[], int n, int x, int y)
{
	cout << "Cac gia tri chan trong khoang [" << x << "," << y << "]: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x && a[i] <= y && a[i] % 2 == 0)
			cout << setw(10) << a[i];
	}

}