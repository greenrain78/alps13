#include <iostream>
using namespace std;

int main(void)
{
	int n, g, ki = 0;		//n=데이터 수, g=한묶음안의 수, ki=k배열의 현재 인덱스
	int len;				//len = 묶음의 수
	bool div = false;		//div=데이터수가 g의 배수인지
	cin >> n >> g;
	int* k = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> k[i];
	}
	if (n % g == 0)
	{
		len = n / g;
		div = true;
	}
	else len = n / g + 1;
	int** arrg = new int* [len];
	int* min = new int[len];
	for (int i = 0; i < len; i++)
	{
		arrg[i] = new int[g];
	}
	for (int i = 0; i < len; i++)
	{
		for (int s = 0; s < g; s++)
		{
			if (ki != n)
			{
				arrg[i][s] = k[ki];
				ki++;
			}
			else {
				arrg[i][s] = 1001;
			}
		}

	}
	for (int i = 0; i < len; i++)
	{
		min[i] = arrg[i][0];
		for (int s = 0; s < g; s++)
		{
			if (min[i] > arrg[i][s])min[i] = arrg[i][s];
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << min[i] << ' ';
	}
}