#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int arr1[6] = {10, 20, 30, 40, 50, 60};
	int arr2[2][3] = {10, 20, 30, 40, 50, 60};
	int arr3[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	cout << "The value of the array element of arr1." << endl;
	cout << arr1[0] << " ";
	cout << arr1[1] << " ";
	cout << arr1[2] << " ";
	cout << arr1[3] << " ";
	cout << arr1[4] << " ";
	cout << arr1[5] << endl;
		
	cout << "The value of the array element of arr2." << endl;
	cout << arr2[0][0] << " ";
	cout << arr2[0][1] << " ";
	cout << arr2[0][2] << " ";
	cout << arr2[1][0] << " ";
	cout << arr2[1][1] << " ";
	cout << arr2[1][2] << endl;

	int arr_col_len, arr_row_len;
	int arr[3][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};
	
	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);				// 2차원 배열의 열의 길이를 계산함 
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);	// 2차원 배열의 행의 길이를 계산함 
			
	cout << "The value of the array element of arr." << endl;
	for (int i = 0; i < arr_row_len; i++)
	{
		for (int j = 0; j < arr_col_len; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}