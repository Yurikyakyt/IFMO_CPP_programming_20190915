//Вводится один символ, измените его регистр. 
// То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. 
// Символы, не являющиеся латинской буквой, нужно выводить без изменений.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t03_toggle.h"
#include <iostream>


using namespace std;

int t03_toggle() {
    char a;
    cin >> a;
    if ((int(a)>96)&&(int(a)<123)){
        cout << char(int(a)-32);
    }else if ((int(a)>64)&&(int(a)<91)){
        cout << char(int(a)+32);
    }else{
        cout << a;
    }
}