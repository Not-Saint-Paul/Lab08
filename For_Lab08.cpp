/***********************************************
 * Автор: Станковский П.А.                     *
 * Дата: 19.11.2023                            *
 * Название: Shitcode Lab8 v1.1 Fifth Day Path *
 * https://onlinegdb.com/wcXolfNOHp            *
 **********************************************/

#include <iostream>
#include <string>

using namespace std;

string Ar2Rom(int numAr) {

    string numRom;
    
    while (numAr > 1 ) {        
        while (numAr / 1000 >= 1) {
            numRom += "M";
            numAr -= 1000;
        }
        while (numAr / 900 >= 1) {
            numRom += "CM";
            numAr -= 900;
        }
        while (numAr / 500 >= 1) {
            numRom += "D";
            numAr -= 500;
        } 
        while (numAr / 400 >= 1) {
            numRom += "CD";
            numAr -= 400;
        }
        while (numAr / 100 >= 1) {
            numRom += "C";
            numAr -= 100;
        }
        while (numAr / 90 >= 1) {
            numRom += "XC";
            numAr -= 90;
        }
        while (numAr / 50 >= 1) {
            numRom += "L";
            numAr -= 50;
        }
        while (numAr / 40 >= 1) {
            numRom += "XL";
            numAr -= 40;
        }
        while (numAr / 10 >= 1) {
            numRom += "X";
            numAr -= 10;
        }
        while (numAr / 9 >= 1) {
            numRom += "IX";
            numAr -= 9;
        }
        while (numAr / 5 >= 1) {
            numRom += "V";
            numAr -= 5;
        }
        while (numAr / 4 >= 1) {
            numRom += "IV";
            numAr -= 4;
        }
        while (numAr / 1 >= 1) {
            numRom += "I";
            --numAr;
        }
    }

    return numRom;
}

int main() {
    
    int prog, numAr;
    string result, numRom;
    
    cout << "Выберите режим перевода числа: \n[1] - Арабское -> Римское; [2] Римское - Арабское\n";
    cin >> prog;
    system("clear");
    if (prog == 1) {
        cout << "Введите число: ";
        cin >> numAr;
        system("clear");
        if (numAr <= 0) {
            cout << "Неверный ввод";
            return -1;
        }
        result = Ar2Rom(numAr);
        cout << "Результат: " << result;
    } else if (prog == 2) {
        cout << "Введите число: ";
        cin >> numRom;
        system("clear");
        //result = Rom2Ar(numRom);
        cout << "Результат: " << result;
    } else {
        cout << "Неверный ввод";
        return -1;
    }
    
    return 0;
}
