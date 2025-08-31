#include <iostream>
using namespace std;
void symmetric(int a[][100], int row, int col)
{
	int diagonal[100] = {2, 1, 4, 0};
	int symelement[100] = {4, 6, 0, 9, 5, 7};
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i < j || i > j)
			{
				a[i][j] = symelement[i + j - 1];
			}
			else
			{
				a[i][j] = diagonal[i];
			}
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int a[100][100];
	int row;
	int col;
	cout << "Enter rows:" << endl;
	cin >> row;
	cout << "Enter columns:" << endl;
	cin >> col;
	symmetric(a, row, col);
}