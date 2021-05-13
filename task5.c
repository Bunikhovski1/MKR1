#include <stdio.h>



int main() {
  int method, counter = 0, age;
  printf("\nЩо будемо робити ?\n");
  printf("*******************************************\n");
  printf("Запустити програму - 1\n");
  printf("Вийти з програми - 2\n");
  printf("*******************************************\n");
  while(1) {
    if (counter == 0) {
      printf("\nВвести: ");
      scanf("%d", &method);
      counter += 1;
    }
    else {
      printf("\n\nВи можете спробувати ще раз - 1 || вийти з програми - 2\n");
      printf("Ввести: ");
      scanf("%d", &method);
    }
    if (method == 1) {
       printf("Введіть ваш вік: ");
       scanf("%d", &age);
       if (age < 0) {
         printf("Ви ввели некоректні дані");
       }
       else if (age <= 10) printf("Ви - дитина");
       else if (age <= 15) printf("Ви - підліток");
       else if (age <= 20) printf("Ви - юнак");
       else if (age <= 30) printf("Ви - молода людина");
       else printf("Ви - доросла людина");
    }
    else {
      break;
    }
  }

  return 0;
}  