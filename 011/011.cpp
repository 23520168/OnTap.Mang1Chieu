#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktLuyThua3(int);
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

int ktLuyThua3(int n)
{
	int flag = 1;
	int t = abs(n);
	while (t > 1)
	{
		if (t%3!=0)
			flag = 0;
		t = t / 3;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	cout << endl << "Cac so nguyen co dang 3^m: ";
	for (int i = 0; i < n; i++)
	{
		if (ktLuyThua3(a[i]) == 1)
			cout << setw(10) << a[i];
	}
}