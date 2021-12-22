// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <conio.h> 
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(0, "");

    int n,d,d1,vib;
    int** arr;
    
    HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "Здравствуйте! Эта программа выводит матрицу в шахматном порядке. " << endl;
    SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << ">---------------------------------------<" << endl;
    do
    {
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "Введите ";
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "1 ";
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "или ";
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "	0." << endl;
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "1 ";
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << " - выполнение программы" << endl;
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "0 ";
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << " - выход из программы" << endl;
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << ">---------------------------------------<" << endl;
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "Ваш выбор: ";
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cin >> vib;
        SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << ">---------------------------------------<" << endl;
        switch (vib)
        {
        case 1:
        {
            SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "Укажите число строк и столбцов (размер матрицы n x n): ";
            SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cin >> n;
            SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << ">---------------------------------------<" << endl;
            arr = new int* [n];
            for (int i = 0; i < n; i++)  arr[i] = new int[n];

            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    d = i % 2;
                    d1 = j % 2;
                    if (d == 0)
                    {
                        if (d1 == 0) arr[i][j] = 0;
                        if (d1 == 1) arr[i][j] = 1;
                    }
                    if (d == 1)
                    {
                        if (d1 == 0) arr[i][j] = 1;
                        if (d1 == 1) arr[i][j] = 0;
                    }
                }


            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                    cout << arr[i][j] << " ";
                }
                cout << "\n";
            }
            SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << ">---------------------------------------<" << endl;
            for (int i = 0; i < n; i++)
                delete[] arr[i];
            delete[] arr;
            
            break;
        }


        case 0:
        {

            SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "программа успешно завершена. " << endl;
            system("pause");
            break;
        }


        }
    }

        while (vib == 1);
    

}


      