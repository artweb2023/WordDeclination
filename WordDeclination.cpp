#include <iostream>
#include <Windows.h> 

void WordDeclination(int n)
{
	if ((n >= 5 && n <= 20) || (n % 10 == 5 || n % 10 == 6 || n % 10 == 7 || n % 10 == 8 || n % 10 == 9 || n % 10 == 0))
	{
		std::cout << "компьютеров" << std::endl;
	}
	else if (n == 1 || (n >= 21 && n % 10 == 1))
	{
		std::cout << "компьютер" << std::endl;
	}
	else if ((n > 1 && n < 5) || (n >= 21 && (n / 10 != 1 && (n % 10 == 2 || n % 10 == 3 || n % 10 == 4))))
	{
		std::cout << "компьютера" << std::endl;
	}
}

int main()
{
	system("chcp 1251>null");
	int n;
	std::cin >> n;
	WordDeclination(n);
	return 0;
}
