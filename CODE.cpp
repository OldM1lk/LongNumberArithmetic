/************************************
 * Выполнил: Чепуштанов Е.П.        *
 * Группа: ПИ-231                   *
 * Блок 4, Лаба 1                   *
 * https://onlinegdb.com/Lo13lA46d  *
*************************************/

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main() {
  setlocale(LC_ALL, "Russian");
  
  int128_t num1, num2;
  int Operation;
  
  cout << "Введите первое число: ";
  cin >> num1;
  cout << "Введите второе число: ";
  cin >> num2;
  cout << "\nПервое число: " << num1 << endl
       << "Второе число: " << num2 << endl;
  
  cout << "\nКакую процедуру вы хотите совершить?" << endl
       << "(Напишите цифру от 1 до 7)" << endl
       << "1. +" << endl
       << "2. -" << endl
       << "3. *" << endl
       << "4. /" << endl
       << "5. >" << endl
       << "6. <" << endl
       << "7. =" << endl;
  cin >> Operation;
  cout << "\n";
  
  switch (Operation) {
    case 1:
      cout << "Результат: " << num1 + num2;
      break;
    case 2:
      cout << "Результат: " << num1 - num2;
      break;
    case 3:
      cout << "Результат: " << num1 * num2;
      break;
    case 4:
      cout << "Результат: " << num1 / num2;
      break;
    case 5:
      if ( (num1 - num2) > 0 ) {
        cout << "True";
      } else {
        cout << "False";
      }
      break;
    case 6:
      if ( (num2 - num1) > 0 ) {
        cout << "True";
      } else {
        cout << "False";
      }
      break;
    case 7:
      if ( (num2 - num1) == 0 ) {
        cout << "True";
      } else {
        cout << "False";
      }
      break;
    default:
      cout << "Вы ввели некорректную процедуру!!!";
      break;
  }
  
  return 0;
}
