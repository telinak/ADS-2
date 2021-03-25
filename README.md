# Алгоритмы и структуры данных (ADS-2)


![GitHub pull requests](https://img.shields.io/github/issues-pr/NNTU-CS/ADS-2)
![GitHub closed pull requests](https://img.shields.io/github/issues-pr-closed/NNTU-CS/ADS-2)




Сроки выполнения задания:

- **ИСТ-1,4** - **до 8 апреля** ![Relative date](https://img.shields.io/date/1617829200)
- **ИСТ-3** - **до 13 апреля** ![Relative date](https://img.shields.io/date/1618261200)
- **ИСТ-2** - **до 20 апреля** ![Relative date](https://img.shields.io/date/1618866000)

За присланные работы после указанных сроков, оценки будут снижены!

## Задание

> Написать 3 реализации алгоритма поиска всех уникальных пар целочисленных элементов в массиве, в сумме дающих заданное число

## Пояснение

Требуется написать 3 функции на языках С/С++, принимающие массив целых, искомое число и возвращающие количество уникальных пар элементов, в сумме дающих **value**.

Так, например, при value=50 массив {20,30,30,40,40} содержит 2 пары (20-30, 20-30).

Массив, подаваемый на вход, должен быть отсортирован по возрастанию элементов!

Функции должны иметь следующую сигнатуру и располагаться в файле **src/alg.cpp**:


```C++
int countPairs1(int *arr,int len,int value)
{

}
int countPairs2(int *arr,int len,int value)
{

}
int countPairs3(int *arr,int len,int value)
{

}
```
Описания параметров функций:

- **arr** - адрес первого элемента массива (массив из неубывающих элементов!)
- **len** - размер массива в элементах
- **value** - искомое значение суммы двух элементов (т.е. **arr[i]+arr[j]==value**)

Описания функций:

- Функция **countPairs1** должна содержать реализацию массива с полным перебором всех сумм (цикл в цикле).
- Функция **countPairs2** должна содержать улучшенный поиск сумм, с отбрасыванием заведомо лишних значений (движение с двух концов навстречу).
- Функция **countPairs3** должна содержать алгоритм бинарного поиска второго элемента пары, в сумме дающей заданное число.

Функции возвращает количество пар (0 - если таких нет).

Все три функции для одного и того же массива должны возвращать одно и тоже число. Время работы функций должно быть (t1>t2>t3).

Помимо указанных функций, в файл **alg.cpp** можно помещать определения вспомогательных функций.
