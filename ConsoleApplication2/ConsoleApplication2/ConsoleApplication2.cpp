#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int c = 0;
    int el = 0;
    int sum = 0;
    int a = 1;
    int x;
    cout << "Количество элементов: ";
    cin >> c;

    int* mass = new int[c];

    cout << "Элементы: ";

    for (int i = 0; i < c; i++)
    {
        cin >> el;
        mass[i] = el;
    }


   for (int i = 0; i < c; i++) 
   {
        if (mass[i] > 0) 
        {
            sum += mass[i];
            a *= mass[i];
        }
    }

    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            if (abs(mass[j]) > abs(mass[i])) 
            {
                x = mass[i];
                mass[i] = mass[j];
                mass[j] = x;
            }
        }
    }

    cout << "Отформатированный массив: ";
    for (int i = 0; i < c; i++) 
    {
        cout << mass[i] << " ";
    }

    cout << endl << "Сумма положительных элементов = " << sum << endl;
    cout << endl << "Произведение положительных элементов = " << a << endl;
}