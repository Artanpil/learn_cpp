#include <iostream>
#include <locale>

#define PRINT_JOE
#define MY_FLAG cout<<"Мой флаг, мой флаг\n";
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
#ifdef PRINT_JOE
	cout << "Joe\n";  //Выводит Joe, так как определен макрос принт_джо
#endif

#ifdef PRINT_BOB
	cout << "Bob\n"; // Не выводит Bob, так как не определен макрос Боб
#endif

#if 0
	cout << "0\n"; // Не выводит ничего, можно использовать для комментариев
#endif
#if 1
	cout << "1\n";	// Выводит 1, так как макрос 1 определен всегда, 
#endif
	MY_FLAG  // Выводит Мой флаг, мой флаг
		MY_FLAG
		return 0;
}