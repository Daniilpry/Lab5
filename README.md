# Lab5
---
## 17 варіант 

### Завдання
  - Напишіть програму на C, яка демонструє **undefined behavior**, пов'язаний із **порядком обчислення аргументів функції**.

### Пояснення 
  - Undefined Behavior у C: Невизначений порядок обчислення аргументів

### Код

```c
#include <stdio.h>

int i = 0;

int increment() {
    return ++i;
}

int print_values(int a, int b) {
    printf("a = %d, b = %d, i = %d\n", a, b, i);
    return 0;
}

int main() {
    print_values(increment(), increment());
    return 0;
}
```

### Пояснення коду
  - Функція print_values() приймає два аргументи.
  - Обидва аргументи — це виклики increment(), яка інкрементує глобальну змінну i.
  - Але наша улюблена С-шка не визначає у якому порядку обчислюються аргументи функції. Тобто різні компілятори можуть викликати їх по різному.

### Результат роботи програми
![image](https://github.com/user-attachments/assets/b604ac62-39eb-49e0-a0c8-a541e04509fc)
