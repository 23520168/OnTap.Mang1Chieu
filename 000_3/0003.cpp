#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Nhap(string, int[], int&);
void Xuat(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap("intdata01.txt", b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void Nhap(string filename, int a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1 ; i++)
		cout << setw(10) << a[i];
}