#include <iostream>

using namespace std;

struct MaTran {
	int row, col;
	float **a;
};

MaTran Nhap ()
{
	
}

MaTran init (int row, int col)
{
	MaTran kq;
	kq.row = row;
	kq.col = col;
	kq.a = new float * [row];
	for (int i = 0; i < col; i++)
	{
		kq.a[i] = new float (col);
		if (kq.a[i] == NULL)
		{
			cerr << "Khong cap phat du bo nho";
			kq.row = kq.col = 0;
		}
	}
	return kq;
}

void delMT (MaTran &mt)
{
	delete[] mt.a;
}

int main ()
{
	
	
	
}

