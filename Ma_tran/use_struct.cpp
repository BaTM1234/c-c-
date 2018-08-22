#include <iostream>
#include <stdio.h>

using namespace std;

struct MaTran {
	int row, col;
	float *ptr;
};

void Nhap_MT (){
	
	MaTran mt1, mt2;
	cout << "Nhap vao ma tran 1:" << endl << "Row: ";
	cin >> mt1.row ;
	cout << "Col: ";
	cin >> mt1.col ;
	
	
	
}

void Cong ()
{
	
}

void Tru ()
{
	
}

void Nhan ()
{
	
}

void Chia ()
{
	
}

void Display (){


}

void get_input (FILE * input)
{
	int r1, r2, c1, c2;
	cin >> r1;
	cin >> c1;
	cout << "Ma Tran 1:" << endl;
	int array_input1 [r1] [c1];
	for (int a = 0; a < r1; a++)
	{
		for (int b = 0; b < c1; b++)
		{
			cin >>  array_input1[a][b];
			cout << array_input1[a][b];
		}
		cout << endl;
	}
	
	cin >> r2;
	cin >> c2;
	cout << "Ma Tran 2:" << endl;
	int array_input2 [r2] [c2];
	int array_tich [r1] [c2];
	for (int a = 0; a < r2; a++)
	{
		for (int b = 0; b < c2; b++)
		{
			cin >>  array_input2[a][b];
			cout << array_input2[a][b];
		}
		cout << endl;
	}
	
	if ((r1 != r2) || (c1 != c2))
	{
		cerr << "Err = 01";
	}
	else if (c1 != r1)
	{
		cerr << "Err = 02";
	}
	else 
	{
		cout << "Tong 2 ma tran:" << endl;
	
		for (int a = 0; a < r1; a++)
		{
			for (int b = 0; b < c1; b++)
			{
				cout << array_input1[a][b] + array_input2[a][b];
			}
			cout << endl;
		}
		
		cout << "Hieu 2 ma tran:" << endl;
	
		for (int a = 0; a < r1; a++)
		{
			for (int b = 0; b < c1; b++)
			{
				cout << array_input1[a][b] - array_input2[a][b];
			}
			cout << endl;
		}
		
		cout << "Tich 2 ma tran:" << endl;
	
		for (int a = 0; a < r1; a++)
		{
			for (int b = 0; b < c2; b++)
			{
				array_tich [a] [b] = 0;
				for (int c = 0; c < c1; c++)
				{
					array_tich[a][b]+= array_input1[a][c] * array_input2[c][b];
				}
				cout << array_tich[a][b];

			}
			cout << endl;
		}
	}
}

int main ()
{
	Nhap_MT ();
	return 0;
}
