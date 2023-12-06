/************************************
 * Выполнил: Чепуштанов Е.П.        *
 * Группа: ПИ-231                   *
 * Блок 4, Лаба 1                   *
 * https://onlinegdb.com/UWzPHS3oY  *
*************************************/

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main() {
  setlocale(LC_ALL, "Russian");
  
  int128_t Num1, Num2;
  int Operation;
  
  cout << "Введите первое число: ";
  cin >> Num1;
  cout << "Введите второе число: ";
  cin >> Num2;
  cout << "\nПервое число: " << Num1 << endl
       << "Второе число: " << Num2 << endl;
  
  cout << "\nКакую процедуру вы хотите совершить?" << endl
       << "(Напишите цифру от 1 до 7)" << endl
       << "1. +" << endl
       << "2. -" << endl
       << "3. *" << endl
       << "4. /" << endl;
  cin >> Operation;
  cout << "\n";
  
  if (Operation == 1) {
    cout << "Результат: " << Num1 + Num2;
  } else if (Operation == 2) {
    cout << "Результат: " << Num1 - Num2;
  } else if (Operation == 3) {
    cout << "Результат: " << Num1 * Num2;
  } else if (Operation == 4) {
    cout << "Результат: " << Num1 / Num2;
  } else {
    cout << "Вы ввели некорректную процедуру!!!";
  }
  
  return 0;
}
