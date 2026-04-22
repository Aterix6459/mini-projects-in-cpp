#include <climits>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <thread>
#include <utility>
using std::cout, std::cin, std::endl, std::string;

/* // swap func
void Swap(int &a, int &b) {
  int help;
  help = a;
  a = b;
  b = help;
}
*/

/* // logic strlen
int strlens(const char *string) {
  int counter = 0;

  while (string[counter] != 0) {
    counter++;
  }
  return counter;
}
*/

int main() {
  /* // калькулятор
  char znak;
  float num1,num2;
  cout << "введите пример: ";
  std::cin >> num1 >> znak >> num2;
  switch(znak) {
      case '+':
          cout << num1+num2 << endl;
          break;
      case '-':
          cout << num1-num2 << endl;
          break;
      case '*':
          cout << num1*num2 << endl;
          break;
      case '/':
          cout << num1/num2 << endl;
          break;
  } */

  /* // вывод символа
  char znak;
  int num1;
  char VorG;

  cout << "введите знак: ";
  cin >> znak;
  cout << "введите количество: ";
  cin >> num1;
  cout << "вертикальная линия или горизонтальная(V/G): ";
  cin >> VorG;
  if(VorG == 'G' || VorG == 'g'){
      for(int i = 0; i < num1; i++){
          cout << znak;
      }
      cout << endl;
  }
  else if(VorG == 'v' || VorG == 'V'){
          for(int i = 0; i < num1; i++){
          cout << znak << endl;
      }
  }
  else{
      cout << "v или g!" << endl;
      return 0;
  } */

  /* // сумма чётных чисел
  int num1, num2;
  cout << "введите число: ";
  cin >> num1;

  if (num1 % 2 == 0) {
    num2 = num1 / 2;
    cout << "сумма всех чётных: " << (num2 + 1) * num2 << endl;
  } else {
    num2 = (num1 - 1) / 2;
    cout << "сумма всех чётных: " << (num2 + 1) * num2 << endl;
  }*/

  /* // сумма чётных чисел в указанном диапазоне
  int Start, End, Sum=0;
  cout << "введите начало: ";
  cin >> Start;
  cout << "введите конец: ";
  cin >> End;

  for (int i = Start; i < End; i++) {
    if (i % 2 == 0) {
      Sum += i;
    }
  }
  cout << "сумма чётных чисел: " << Sum << endl;
  */

  /* // прямоугольник с *
  int width, height;
  char znak = '*';

  cout << "ширина, высота(через пробел): ";
  cin >> width >> height;

  for (int j = 0; j < height; j++) {

    for (int i = 0; i < width; i++) {
      cout << "*";
    }
    cout << endl;
  }
  */

  /* // случайные числа
  srand(time(NULL));
  int size = 0, size2;
  cout << "сколько случайных чисел: ";
  cin >> size;
  cout << "сколько рядов случайных чисел: ";
  cin >> size2;
  int arr[size];

  for (int j = 1; j < size2+1; j++) {
    cout << j << ") ";

    for (int i = 0; i < size; i++) {
      int random = rand() % 100;
      arr[i] = random;
      cout << arr[i];

      if (i == size - 1) break;

      cout << ", ";
    }
    cout << endl;
  }
  */

  /* // нахождение минимального числа с массивом
  srand(time(NULL));
  int size_arr, size, random, min;

  cout << "сколько случайных чисел: ";
  cin >> size_arr;
  cout << "сколько рядов случайных чисел: ";
  cin >> size;

  int *arr = new int[size_arr];

  for (int j = 1; j < size + 1; j++) {
    cout << j << ") ";

    for (int i = 0; i < size_arr; i++) {
      random = rand() % 100;
      arr[i] = random;
      cout << arr[i];

      if(i == 0){
          min = arr[0];
      }
      else if (min > arr[i]) {
        min = arr[i];
      }

      // if (i == size_arr - 1)
      //   break;
      cout << " ";
    }
    cout << " min: " << min << endl;
  }
  delete arr;
  */

  /* //  нахождение минимального и максимального числа без массива
  srand(time(NULL));

  int size_arr, size, random, min, max;

  cout << "сколько случайных чисел: ";
  cin >> size_arr;
  cout << "сколько рядов случайных чисел: ";
  cin >> size;

  for (int j = 1; j < size + 1; j++) {
    cout << j << ") ";
    min = INT_MAX;
    max = INT_MIN;

    for (int i = 0; i < size_arr; i++) {
      random = rand() % 100;
      cout << random << ", ";

      if(random < min){
        min = random;
      }
      if(random > max) {
        max = random;
      }
    }
    cout << " min: " << min << "  max: " << max << endl;
  }
  */

  /* // swap
  int num5 = 5, num13 = 13;
  cout << num5 << ", " << num13 << endl;
  // std::swap(num5, num13);
  Swap(num5, num13);
  cout << num5 << ", " << num13 << endl;
  */

  /* logic strlen
  const char *str = "hello!";
  //   char str[] = {'h', 'e', 'l', 'l', 'o'};
  cout << strlens(str) << endl;
  cout << strlen(str) << endl;
  */

  return 0;
}

// run in linux:
// g++ main.cpp -o main && ./main