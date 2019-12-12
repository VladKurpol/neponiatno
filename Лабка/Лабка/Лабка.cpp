// Лабка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>

int main()
{
	const int size = 4;
	int arr[size][size];
	setlocale(LC_ALL, "ru");
	srand(time(0));

	for (int i = 0; i < size; i++) // заполнение массива
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 25;
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	int massive_row[size], massive_c[size];

	int sum = 0;
	
	for (int j = 0; j < size; j++) // без использования массива в строках
	{
		for (int i = 0; i < size; i++)
		{
			sum = sum + arr[j][i];
			
		}
		std::cout << "Sum in row " << j << " is: " << sum << "\n";
		sum = 0;
	}
	std::cout << "============" << "\n";
	for (int i = 0; i < size; i++) // без использования массива в столбцах
	{
		for (int j = 0; j < size; j++)
		{
			sum = sum + arr[j][i];

		}
		std::cout << "Sum in col " << i << " is: " << sum << "\n";
		sum = 0;
	}
	std::cout << "============" << "\n";
	for (int j = 0; j < size; j++) // с использованием массива в строках
	{
		for (int i = 0; i < size; i++)
		{
			massive_row[i] = arr[j][i];
			sum = sum + massive_row[i];
		}	
		std::cout << "Sum in row " << j << " is: " << sum << "\n";
		sum = 0;
	}
	std::cout << "============" << "\n"; 
	for (int i = 0; i < size; i++) // с использованием массива в столбцах
	{
		for (int j = 0; j < size; j++)
		{
			massive_row[i] = arr[j][i];
			sum = sum + massive_row[i];
		}
		std::cout << "Sum in col " << i << " is: " << sum << "\n";
		sum = 0;
	}
}

