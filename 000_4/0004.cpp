#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Nhap(string, float[], int&);
void Xuat(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap("floatdata01.txt", b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void Nhap(string filename, float a[], int& n)
{
	fstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}