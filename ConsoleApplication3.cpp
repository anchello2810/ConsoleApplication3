// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>



int main()
{
    const int N = 5;
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

    struct tm newtime;
    time_t now = time(0);
    localtime_s(&newtime, &now);
    int last_idx = localtime_s(&newtime, &now) % N;
    int** a = new int* [N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        a[i] = new int[N];

        for (int j = 0; j < N; j++)
        {
            sum += a[last_idx][j];
        }
    }
    std::cout << sum;

    }
