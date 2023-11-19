/**************************************
 * Автор: Станковский П.А.            *
 * Дата: 19.11.2023                   *
 * Название: Shitcode Lab8 v1 Release *
 * https://onlinegdb.com/hiz845-wq    *
 **************************************/

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Введите число: ";
    cin >> number;
    cout << "Результат: ";

    while (number > 1 ) {
        while (number / 1000 >= 1) {
            cout << 'M';
            number -= 1000;
        }
        while (number / 900 >= 1) {
            cout << "CM";
            number -= 900;
        }
        while (number / 500 >= 1) {
            cout << 'D';
            number -= 500;
        } 
        while (number / 400 >= 1) {
            cout << "CD";
            number -= 400;
        }
        while (number / 100 >= 1) {
            cout << 'C';
            number -= 100;
        }
        while (number / 90 >= 1) {
            cout << "XC";
            number -= 90;
        }
        while (number / 50 >= 1) {
            cout << 'L';
            number -= 50;
        }
        while (number / 40 >= 1) {
            cout << "XL";
            number -= 40;
        }
        while (number / 10 >= 1) {
            cout << 'X';
            number -= 10;
        }
        while (number / 9 >= 1) {
            cout << "IX";
            number -= 9;
        }
        while (number / 5 >= 1) {
            cout << 'V';
            number -= 5;
        }
        while (number / 4 >= 1) {
            cout << "IV";
            number -= 4;
        }
        while (number / 1 >= 1) {
            cout << 'I';
            --number;
        }
    }

    return 0;
}
