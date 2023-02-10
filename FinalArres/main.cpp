#include <iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	int sum;
	/*
	//Сортировка половины массива
	std::cout<< "задача 1 \n Изначальный массив \n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;
		std::cout << arr1[i] << ' ';

	}
	std::cout << std::endl;
	// пузырьковая сортировка
	//for (int i = 4; i > 0; i--)
	//	for (int j = 0; j < i; j++)
	//		if (arr1[j] > arr1[j + 1])
	//			std::swap(arr1[j], arr1[j + 1]);

	// быстрая сортировка
	std::sort(arr1, arr1 + 5);

	std::cout << " Итоговый массив \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << " \n\n";
	

	//задача 2
	std::cout << "задача 2 \n  Температура в январе \n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % 30 -30;
		std::cout << arr2[i] << ',';
	}
	std::cout << "\b\b.\n";
	sum = 0;
	int counter = 0;
	std::cout << " Введите максимальную границу температуры от -30 до -1 градуса - ";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << " Кол-во дней, когда температура опускалась ниже " << n << " градусов " << counter << '\n';
	std::cout << " Средняя температура за месяц " << (double)sum / size2 << "\n\n";
	*/

	//задача 3
	std::cout << "задача 3 \n  Вхождение в диапозон \n";
	std::cout << " Введите начало диапазона - ";
	std::cin >> n;
	std::cout << " Введите конец диапазона - ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << " Вывод : \n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101;
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << " \n\n";










	return 0;
}