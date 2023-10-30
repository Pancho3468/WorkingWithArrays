
#include <iostream>
#include <ctime>

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

	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int Day = newtime.tm_mday;
	std::cout << "Day: " << Day << "\n";

	int index = Day % size;
	std::cout << "index: " << index << "\n";
	
	int sum = 0;
	for (int i = 0; i < size; ++i) 
	{
			sum += array[index][i];
		
	}
	std::cout << "Sum: " << sum;

	
}

int main()
{
	TwoDimensionalArray();
	return 0;
}
