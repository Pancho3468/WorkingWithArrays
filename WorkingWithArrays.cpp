
#include <iostream>

void TwoDimensionalArray()
{
	const int size = 5;
	int array[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) 
		{
			array[i][j] = i + j; 
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{			
			std::cout << array[i][j];			
		}
		std::cout << '\n';
	}
}

int main()
{
	TwoDimensionalArray();
	return 0;
}
