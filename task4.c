#include <stdio.h>
#include <math.h>


int main() {
  float result; //Оголення змінної

  //Обчислення
  result  = ((sqrt(2) + 2 + pow(2, 2)) / (sqrt(3) + 3 + pow(3, 2)))  + ((sqrt(4) + 4 +pow(4, 2)) / (sqrt(8) + 8 + pow(8,2)) );

  // Виведення
  printf("\n*******");
  printf("Результат");
  printf("*******\n");
  printf("Відповідь: ");
  printf("%.2f\n", result);

  return 0;
} 