
#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 10;

template <typename T1, typename T2> void FillRand(T1 arr[], const T2 n);
template <typename T1, typename T2> void FillRand(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> void Print(T1 arr[], const T2 n);
template <typename T1, typename T2> void Print(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> void Sort(T1 arr[], const T2 n);
template <typename T1, typename T2> void Sort(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> T1 Sum(T1 arr[], const T2 n);
template <typename T1, typename T2> T1 Sum(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> double Avg(T1 arr[], const T2 n);
template <typename T1, typename T2> double Avg(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> T1 minValueIn(T1 arr[], const T2 n);
template <typename T1, typename T2> T1 minValueIn(T1 arr[ROWS][COLS], const T2 m, const T2 n);

template <typename T1, typename T2> T1 maxValueIn(T1 arr[], const T2 n);
template <typename T1, typename T2> T1 maxValueIn(T1 arr[ROWS][COLS], const T2 m, const T2 n);

void main()
{
    setlocale(LC_ALL, "");
    /*���������� ������ ���� int*/
    const int n = 10;
    int arr[n];

    FillRand(arr, n);
    Print(arr, n);
    cout << endl;
    Sort(arr, n);
    Print(arr, n);
    cout << endl;
    cout << "����� ��������� �������: " << Sum(arr, n) << endl;
    cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
    cout << "����������� ������� �������: " << minValueIn(arr, n) << endl;
    cout << "������������ ������� �������: " << maxValueIn(arr, n) << endl;
    cout << endl;
    /*���������� ������ ���� double*/
    double arr_double[n];
    FillRand(arr_double, n);
    Print(arr_double, n);
    cout << endl;
    Sort(arr_double, n);
    Print(arr_double, n);
    cout << endl;
    cout << "����� ��������� �������: " << Sum(arr_double, n) << endl;
    cout << "������� �������������� ��������� �������: " << Avg(arr_double, n) << endl;
    cout << "����������� ������� �������: " << minValueIn(arr_double, n) << endl;
    cout << "������������ ������� �������: " << maxValueIn(arr_double, n) << endl;
    cout << endl;
    /*���������� ������ ���� char*/

    char arr_char[n];
    FillRand(arr_char, n);
    Print(arr_char, n);
    cout << endl;
    Sort(arr_char, n);
    Print(arr_char, n);
    cout << endl;
    cout << "����� ASCII-����� ��������� �������: " << (int)Sum(arr_char, n) << endl;
    cout << "������� �������������� ASCII-����� ��������� �������: " << Avg(arr_char, n) << endl;
    cout << "����������� ASCII-��� �������� �������: " << (int)minValueIn(arr_char, n) << endl;
    cout << "������������ ASCII-��� �������� �������: " << (int)maxValueIn(arr_char, n) << endl;
    cout << endl;

    /*��������� ������ ���� int*/
    int int_arr_2[ROWS][COLS];
    FillRand(int_arr_2, ROWS, COLS);
    Print(int_arr_2, ROWS, COLS);
    Sort(int_arr_2, ROWS, COLS);
    Print(int_arr_2, ROWS, COLS);
    cout << endl;
    cout << "����� ��������� �������: " << Sum(int_arr_2, ROWS, COLS) << endl;
    cout << "������� �������������� ��������� �������: " << Avg(int_arr_2, ROWS, COLS) << endl;
    cout << "����������� ������� �������: " << minValueIn(int_arr_2, ROWS, COLS) << endl;
    cout << "������������ ������� �������: " << maxValueIn(int_arr_2, ROWS, COLS) << endl;
    cout << endl;

    /*��������� ������ ���� double*/
    double double_arr_2[ROWS][COLS];
    FillRand(double_arr_2, ROWS, COLS);
    Print(double_arr_2, ROWS, COLS);
    Sort(double_arr_2, ROWS, COLS);
    Print(double_arr_2, ROWS, COLS);
    cout << endl;
    cout << "����� ��������� �������: " << Sum(double_arr_2, ROWS, COLS) << endl;
    cout << "������� �������������� ��������� �������: " << Avg(double_arr_2, ROWS, COLS) << endl;
    cout << "����������� ������� �������: " << minValueIn(double_arr_2, ROWS, COLS) << endl;
    cout << "������������ ������� �������: " << maxValueIn(double_arr_2, ROWS, COLS) << endl;
    cout << endl;

    /*��������� ������ ���� char*/
    char char_arr_2[ROWS][COLS];
    FillRand(char_arr_2, ROWS, COLS);
    Print(char_arr_2, ROWS, COLS);
    Sort(char_arr_2, ROWS, COLS);
    Print(char_arr_2, ROWS, COLS);
    cout << endl;
    cout << "����� ASCII-����� ��������� �������: " << (int)Sum(char_arr_2, ROWS, COLS) << endl;
    cout << "������� �������������� ASCII-����� ��������� �������: " << Avg(char_arr_2, ROWS, COLS) << endl;
    cout << "����������� ASCII-��� �������� �������: " << (int)minValueIn(char_arr_2, ROWS, COLS) << endl;
    cout << "������������ ASCII-��� �������� �������: " << (int)maxValueIn(char_arr_2, ROWS, COLS) << endl;
    cout << endl;
}


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

template <typename T1, typename T2> T1 Sum(T1 arr[ROWS][COLS], const T2 m, const T2 n)
{
    T1 sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

template <typename T1, typename T2> double Avg(T1 arr[], const T2 n)
{
    return (double)Sum(arr, n) / n;
}

template <typename T1, typename T2> double Avg(T1 arr[ROWS][COLS], const T2 m, const T2 n)
{
    return (double)Sum(arr, m, n) / (m * n);
}

template <typename T1, typename T2> T1 minValueIn(T1 arr[], const T2 n)
{
    Sort(arr, n);
    return arr[0];
}

template <typename T1, typename T2> T1 minValueIn(T1 arr[ROWS][COLS], const T2 m, const T2 n)
{
    Sort(arr, m, n);
    return arr[0][0];

}

template <typename T1, typename T2> T1 maxValueIn(T1 arr[], const T2 n)
{
    Sort(arr, n);
    return arr[n - 1];
}

template <typename T1, typename T2> T1 maxValueIn(T1 arr[ROWS][COLS], const T2 m, const T2 n)
{
    Sort(arr, m, n);
    return arr[m - 1][n - 1];

}



