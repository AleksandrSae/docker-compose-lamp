

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int N = 2000;
    char str[] { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+,-./|\\\"':;<=>?@[]^_`{}~" };
    int strN = 94; // индекс последнего элемента в массиве
    srand(time(NULL)); //инициализируем генератор случайных чисел
    char* pass = new char[N + 1]; //выделяем память для строки пароля
    for (int i = 0; i < N; i++)
    {
        pass[i] = str[rand() % strN]; //вставляем случайный символ
    }
    pass[N] = 0; //записываем в конец строки признак конца строки
    cout << pass; //выводим пароль на экран
    return 0;
}


