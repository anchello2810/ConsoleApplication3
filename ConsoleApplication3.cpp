// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <time.h>



int main()
{
    const int N = 3;
    int array[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;

            std::cout << array[i][j];
        }
        std::cout << "\n";
    }

    time_t t;
    time(&t);
    int x = (localtime(&t)->tm_mday) % N;

    time_t now = time(0);
    tm* localtm = localtime(&now);
    std::cout << "The local date and time is: " << asctime(localtm);

 
    
}