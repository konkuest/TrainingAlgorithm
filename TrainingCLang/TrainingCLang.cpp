#include "stdafx.h"
#include <iostream>
#include <limits>

using namespace std;

const int pend_size = 2; //변수 pend_size를 상수로 사용하기 위해서는 const 필요
int pend_arr[2] = { 2, 3 };
int order = 10;

int main()
{
	

	std::cout << "Press ENTER to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

//연산을 위한 Vector 생산 함수

int create_vector()
{
	int scale[10] = { -5,-4,-3,-2,-1,1,2,3,4,5 };
	int calc_arr[10] = {};
	
	int i = 0;
	for (i = 0; i <= pend_size; i++)
	{
		calc_arr[i] = scale;
	}

	return 0;
}





