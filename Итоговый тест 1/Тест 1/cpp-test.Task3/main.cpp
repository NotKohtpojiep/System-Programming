// ConsoleApplication.AndWhat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "io.cpp"

int calculate(char symbol, int firstNumber, int secondNumber) {
	switch (symbol) {
	case '+':
		return  firstNumber + secondNumber;
	case '-':
		return firstNumber - secondNumber;
	case '*':
		return firstNumber * secondNumber;
	case '/':
		return firstNumber / secondNumber;
	default:
		throw "wtf";
	}
}

int main() {
	std::cout << "Simple calculator" << std::endl << std::endl;
	char symbol;
	std::cout << "Type a symbol for operation: + - * /" << std::endl;
	std::cin >> symbol;
	if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {
		return -1;
	}

	int firstNumber = readNumber();
	int secondNumber = readNumber();
	int result = calculate(symbol, firstNumber, secondNumber);
	writeAnswer(result);
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
