#include"Templated.h"

void FillRand(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 50;
    }
}
void FillRand(double arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 50;
        arr[i] /= 10;
    }
}
void FillRand(char arr[], const int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 127;



    }
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 50;
        }
    }

}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 50;
            arr[i][j] /= 10;
        }
    }
}
void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 127;
        }
    }
}