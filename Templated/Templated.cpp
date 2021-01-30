#include"Templated.h"
#include"Function.cpp"

void main()
{
    setlocale(LC_ALL, "");
    /*Одномерный массив типа int*/
    const int n = 10;
    int arr[n];

    FillRand(arr, n);
    Print(arr, n);
    cout << endl;
    Sort(arr, n);
    Print(arr, n);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(arr, n) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(arr, n) << endl;
    cout << endl;
    /*Одномерный массив типа double*/
    double arr_double[n];
    FillRand(arr_double, n);
    Print(arr_double, n);
    cout << endl;
    Sort(arr_double, n);
    Print(arr_double, n);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(arr_double, n) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(arr_double, n) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(arr_double, n) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(arr_double, n) << endl;
    cout << endl;
    /*Одномерный массив типа char*/

    char arr_char[n];
    FillRand(arr_char, n);
    Print(arr_char, n);
    cout << endl;
    Sort(arr_char, n);
    Print(arr_char, n);
    cout << endl;
    cout << "Сумма ASCII-кодов элементов массива: " << Sum(arr_char, n) << endl;
    cout << "Среднее арифметическое ASCII-кодов элементов массива: " << Avg(arr_char, n) << endl;
    cout << "Минимальный ASCII-код элемента массива: " << minValueIn(arr_char, n) << endl;
    cout << "Максимальный ASCII-код элемента массива: " << maxValueIn(arr_char, n) << endl;
    cout << endl;

    /*Двумерный массив типа int*/
    int int_arr_2[ROWS][COLS];
    FillRand(int_arr_2, ROWS, COLS);
    Print(int_arr_2, ROWS, COLS);
    Sort(int_arr_2, ROWS, COLS);
    Print(int_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(int_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(int_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(int_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(int_arr_2, ROWS, COLS) << endl;
    cout << endl;

    /*Двумерный массив типа double*/
    double double_arr_2[ROWS][COLS];
    FillRand(double_arr_2, ROWS, COLS);
    Print(double_arr_2, ROWS, COLS);
    Sort(double_arr_2, ROWS, COLS);
    Print(double_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма элементов массива: " << Sum(double_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(double_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный элемент массива: " << minValueIn(double_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный элемент массива: " << maxValueIn(double_arr_2, ROWS, COLS) << endl;
    cout << endl;

    /*Двумерный массив типа char*/
    char char_arr_2[ROWS][COLS];
    FillRand(char_arr_2, ROWS, COLS);
    Print(char_arr_2, ROWS, COLS);
    Sort(char_arr_2, ROWS, COLS);
    Print(char_arr_2, ROWS, COLS);
    cout << endl;
    cout << "Сумма ASCII-кодов элементов массива: " << Sum(char_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое ASCII-кодов элементов массива: " << Avg(char_arr_2, ROWS, COLS) << endl;
    cout << "Минимальный ASCII-код элемента массива: " << minValueIn(char_arr_2, ROWS, COLS) << endl;
    cout << "Максимальный ASCII-код элемента массива: " << maxValueIn(char_arr_2, ROWS, COLS) << endl;
    cout << endl;
}