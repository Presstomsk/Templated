#include"Templated.h"


template <typename T1, typename T2> void FillRand(T1 arr[], const T2 n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 256;
        arr[i] /= 10;
    }
}

template <typename T1, typename T2> void FillRand(T1 arr[ROWS][COLS], const T2 m, const T2 n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 256;
            arr[i][j] /= 10;
        }
    }
}

template <typename T1, typename T2> void Print(T1 arr[], const T2 n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

template <typename T1, typename T2> void Print(T1 arr[ROWS][COLS], const T2 m, const T2 n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

template <typename T1, typename T2> void Sort(T1 arr[], const T2 n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                T1 buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}

template <typename T1, typename T2> void Sort(T1 arr[ROWS][COLS], const T2 m, const T2 n)
{
    for (int c = 0; c <= (m * n); c++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    T1 buffer = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = buffer;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (m - 1); j++)
            {
                if (arr[j][i] > arr[j][i + 1])
                {
                    T1 buffer = arr[j][i];
                    arr[j][i] = arr[j][i + 1];
                    arr[j][i + 1] = buffer;
                }
            }
        }
    }

}

template <typename T1, typename T2> T1 Sum(T1 arr[], const T2 n)
{
    T1 sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

