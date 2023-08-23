﻿#include <iostream>

int main() {
	int h, a, b;
	std::cin >> h >> a >> b;

	int s = h - a; //расстояние без учета последнего дня
	int v = a - b; //скорость
	int days = ((s + v - 1) / v) + 1;

	std::cout << days;
}

//Улитка ползет по шесту H метров, поднимаясь за день на A метров, 
//а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?