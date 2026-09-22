### Задание 1
Установил Far Manager, освоил горячие клавиши:
F7 — создать папку, Shift+F4 — создать файл, F4 — редактировать,
F5 — копировать, F6 — переименовать, F8 — удалить, Ctrl+O — командная строка.#Отчет по работе 1
## Задание 3. Раздельная трансляция на C++

Программа состоит из 4 модулей:
- message.cpp / message.h — функция message(std::string)
- hello.cpp / hello.h — функция hello()
- goodbye.cpp / goodbye.h — функция goodbye()
- main.cpp — вызывает hello() и goodbye()

### Команды компиляции:
g++ -c message.cpp -o message.o
g++ -c hello.cpp -o hello.o
g++ -c goodbye.cpp -o goodbye.o
g++ -c main.cpp -o main.o
g++ main.o hello.o goodbye.o message.o -o app.exe

### Результат выполнения:
Hello> world!!!
Goodbye> world!!!

### Проверка ошибок:
1. При синтаксической ошибке в hello.cpp — компиляция hello.cpp падает, 
   остальные файлы компилируются нормально.
2. При удалении message.o — сборка падает с ошибкой 
   "undefined reference to `message(std::string)'".

## Задание 3. Java-версия

Программа состоит из 4 классов:
- Message.java — метод message(String)
- Hello.java — метод hello()
- Goodbye.java — метод goodbye()
- Main.java — вызывает hello() и goodbye()

### Команды:
javac Main.java
java Main

### Результат выполнения:
Hello> world!!!
Goodbye> world!!!


## Задание 3. Python-версия

Программа состоит из 4 функций в 4 файлах:
- message.py — функция message(mes)
- hello.py — функция hello()
- goodbye.py — функция goodbye()
- main.py — вызывает hello() и goodbye()

### Команда:
python main.py

### Результат выполнения:
Hello> world!!!
Goodbye> world!!!


## Задание 5. Makefile

Создан файл makefile для сборки C++-программы.

### Команды:
mingw32-make clean
mingw32-make

### Результат:
Собраны объектные файлы main.o, hello.o, goodbye.o, message.o
и исполняемый файл app.exe.

### Проверки:
- При изменении main.cpp пересобирается только main.o и app.exe.
- При удалении hello.o — make пересобирает его.
- При удалении app.exe — make пересобирает его.


## Задание 6. Вектор, auto, инициализация списком

Создан файл vector_demo.cpp, демонстрирующий:
1. Обычный вектор std::vector<int> v(5)
2. Цикл по коллекции for (int x : v)
3. Ключевое слово auto for (auto x : v)
4. Инициализация списком std::vector<int> v = {1,2,3,4,5}
5. Двоичные литералы 0b1100
6. Определение типа по конструктору std::vector v = {1,2,3,4,5}

### Команды:
g++ vector_demo.cpp -o vector_demo.exe
.\vector_demo.exe

### Результат:
Вывод чисел 0 0 0 0 0, 1 2 3 4 5 и 1 2 3 4 5 12.
Скриншот приложен.


## Задание 9. Трансляция в ассемблер с оптимизацией

Программа: цикл for (int i = 0; i < 123; i++) s += x;

### Команды:
g++ -S -O0 opt.cpp -o opt_O0.s
g++ -S -O1 opt.cpp -o opt_O1.s
g++ -S -O2 opt.cpp -o opt_O2.s

### Результаты:
- -O0: полный цикл с метками .L3/.L2, команды cmpl, jle, addl.
- -O1: цикл сохранён, но код компактнее.
- -O2: цикл заменён умножением (imul/leal). Компилятор вычислил, 
  что s = x * 123, и убрал цикл.

### Вывод:
Оптимизатор -O2 убирает цикл, заменяя его умножением, 
что ускоряет выполнение программы.
Скриншоты .s файлов приложены.


## Задание 10. Java + дизассемблирование

Переписана программа из задания 9 на Java (LoopDemo.java).

### Команды:
javac LoopDemo.java
"C:\Program Files\Java\jdk-26.0.2.1\bin\javap.exe" -c LoopDemo

### Результат:
В байт-коде найден цикл: команды goto, if_icmpge, iinc.
Скриншот вывода javap приложен.


## Задание 12. Защита от повторного включения

В заголовочных файлах message.h, hello.h, goodbye.h 
используется защита от повторного включения:

#ifndef MESSAGE_H
#define MESSAGE_H
// содержимое
#endif

При двойном #include "message.h" ошибки не возникает.
