// Задача:
// На вход подается очень большой файл, на каждой строчке которого
// содержится по слову. Необходимо  найти в нем ТОП 10 наиболее
// часто втсречающихся слов. При этом должно быть использовано
// не более 1 Кб памяти. Слова гаранитровано достаточно короткие,
// чтобы любые 10 их них поместились в память.
// Комментарий:
// Посеольку входными данными является конечный файл, а место
// на жестком диске и время выполнения по условию никак не
// ограничены, то для решения будет использован метод
// внешней сортировки слиянием. Исходный файл будет разбит
// на небольшие части, каждая из которых будет отсортировна,
// а затем будет выполнено слияние получившихся файлов.
// Затем в получившемся файле будут найденты требуемые слова.


#include <stdio.h>

#include "functions.h"

int main()
{
    printf("Hello World!\n");
    return 0;
}