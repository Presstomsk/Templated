#include"Templated.h"

template <typename T> void Print(T arr[], const int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
template <typename T> void Print(T arr[ROWS][COLS], const int m, const int n)
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

template <typename T> void Sort(T arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                T buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
}
template <typename T> void Sort(T arr[ROWS][COLS], const int m, const int n)
{
    for (int c = 0; c <= (m * n); c++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < (n - 1); j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    T buffer = arr[i][j];
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
                    T buffer = arr[j][i];
                    arr[j][i] = arr[j][i + 1];
                    arr[j][i + 1] = buffer;
                }
            }
        }
    }

}

template <typename T> T Sum(T arr[], const int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
template <typename T> T Sum(T arr[ROWS][COLS], const int m, const int n)
{
    T sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

template <typename T> double Avg(T arr[], const int n)
{
    return (double)Sum(arr, n) / n;
}
template <typename T> double Avg(T arr[ROWS][COLS], const int m, const int n)
{
    return (double)Sum(arr, m, n) / (m * n);
}

template <typename T> T minValueIn(T arr[], const int n)
{
    Sort(arr, n);
    return arr[0];
}
template <typename T> T minValueIn(T arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[0][0];

}

template <typename T> T maxValueIn(T arr[], const int n)
{
    Sort(arr, n);
    return arr[n - 1];
}
template <typename T> T maxValueIn(T arr[ROWS][COLS], const int m, const int n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];

}




