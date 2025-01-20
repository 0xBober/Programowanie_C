#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#define SIZE_TEN 10
#define SIZE_STO 100

void zadanie_1()
{
    printf("\n\tZadanie 1 \nNapisz program, w ktorym deklarowana jest 10-elementowa tablica typu int. Tablica powinna byc inicjowana dowolnymi liczbami calkowitymi. Program powinien wyswietlac elementy tablicy uzywajac petli. Uzyj dyrektywy #define do okreslenia rozmiaru tablicy.\n");

    int tab[SIZE_TEN];

    for (int i = 0; i < SIZE_TEN; i++)
    {
        printf("Prosze podac liczbe nr %d: ", i);
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < SIZE_TEN; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
}

void zadanie_2()
{
    printf("\n\tZadanie 2 \nNapisz program, ktory wczytuje osiem liczb zmiennoprzecinkowych (typu double) do tablicy, a nastepnie wyswietla je w odwrotnej kolejnosci.\n");

    double tab[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Prosze podac liczbe nr %d: ", i);
        scanf("%lf", &tab[i]);
    }

    for (int i = 7; i >= 0; i--)
    {
        printf("tab[%d] = %lf\n", i, tab[i]);
    }
}

// Funkcja do zadania nr 3
void complete_array(double *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Prosze podac liczbe nr %d: ", i);
        scanf("%lf", &tab[i]);
    }
}
// Funkcja do zadania nr 3, funkcja do wypisania tablicy double
void print_array_double(double *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("tab[%d] = %lf\n", i, tab[i]);
    }
}

// Funkvcja do wypisania tablicy int
void print_array_int(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
}

void zadanie_3()
{
    printf("\n\tZadanie 3 \nNapisz program, w ktorym deklarowana jest 10-elementowa tablica liczb typu double. Zaprojektuj i wykorzystaj funkcje complete_array(), ktorej zadaniem bedzie pobranie od uzytkownika kolejnych liczb i zapisanie ich w kolejnych komorkach tablicy. Zaprojektuj funkcje print_array(), ktora zajmie sie wyswietleniem tablicy\n");

    double tab[SIZE_TEN];

    complete_array(tab, SIZE_TEN);
    print_array_double(tab, SIZE_TEN);
}

void zadanie_4()
{
    printf("\n\tZadanie 4 \nZaprojektuj i napisz funkcje, ktora policzy ile jest w danej tablicy liczb podzielnych przez k (k - liczba podana przez uzytkownika). Przetestuj funkcje w prostym programie.\n");

    int tablica[100];
    int k, counter = 0;

    for (int i = 1; i <= 100; i++)
    {
        tablica[i] = i;
    }

    printf("Prosze podac liczbe k: ");
    scanf("%d", &k);

    for (int i = 1; i <= 100; i++)
    {
        if (tablica[i] % k == 0)
        {
            counter++;
        }
    }

    printf("W zakresie od 1 do 100 jest %d liczb podzielnych przez %d\n", counter, k);
}

void zadanie_5()
{
    printf("\n\tZadanie 5 \nZaprojektuj i napisz funkcje, ktora znajdzie najwiekszy i najmniejszy element w tablicy i zamieni je miejscami. Przetestuj funkcje w prostym programie.\n");

    int tab[100];

    for (int i = 0; i < 100; i++)
    {
        tab[i] = 100 - i;
    }

    // jak już robie takei zadanie robie sortowanie tablicy

    int temp;

    while (1)
    {
        int sorted = 0;
        for (int i = 1; i < 100; i++)
        {
            if (tab[i - 1] > tab[i])
            {
                temp = tab[i - 1];
                tab[i - 1] = tab[i];
                tab[i] = temp;
                sorted++;
            }
        }
        if (sorted == 0)
        {
            break;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
}

void zadanie_6()
{
    printf("\n\tZadanie 6 \nZaprojektuj i napisz funkcje, ktora policzy ile jest w tablicy liczb dodatnich, ujemnych i rownych zero. Przetestuj funkcje w prostym programie.\n");

    int tab[100];
    int dodatnia = 0, ujemna = 0, zero = 0;

    srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

    for (int i = 0; i < 20; i++)
    {
        tab[i] = rand() % 201 - 100;
    }

    for (int i = 0; i < 20; i++)
    {
        if (tab[i] > 0)
        {
            dodatnia++;
        }
        else if (tab[i] < 0)
        {
            ujemna++;
        }
        else
        {
            zero++;
        }
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    printf("W tablicy jest %d liczb dodatnich, %d liczb ujemnych i %d zer\n", dodatnia, ujemna, zero);
}

void zadanie_7()
{
    printf("\n\tZadanie 7 \nZaprojektuj i napisz funkcje, ktora przesunie liczby w tablicy o jedno miejsce tzn. pierwszy element przestawi na ostatnia pozycje, drugi na pierwsza, trzeci na druga pozycje itd. Przetestuj funkcje w prostym programie\n");

    int tab[SIZE_TEN];

    for (int i = 0; i < SIZE_TEN; i++)
    {
        tab[i] = i;
    }

    printf("Tablica przed przesunieciem:\n");
    print_array_int(tab, SIZE_TEN);

    int temp_1, temp_2, last_element = tab[0];

    for (int i = 0; i < SIZE_TEN; i++)
    {
        if (i == 9)
        {
            tab[9] = last_element;
            break;
        }
        tab[i] = tab[i + 1];
    }

    printf("Tablica po przesunieciu:\n");
    print_array_int(tab, SIZE_TEN);
}

void zadanie_8()
{
    printf("\n\tZadanie 8 \nZaprojektuj i napisz funkcje, ktora odwroci elementy (pierwszy zamieni z ostatnim, drugi z przedostatnim itd.) tablicy przekazanej jako argument funkcji. Przetestuj funkcje w prostym programie.\n");

    int tab[SIZE_TEN];

    for (int i = 0; i < SIZE_TEN; i++)
    {
        tab[i] = i;
    }

    printf("Tablica przed odwroceniem:\n");
    print_array_int(tab, SIZE_TEN);

    int tmp;

    for (int i = 0; i < SIZE_TEN / 2; i++)
    {
        tmp = tab[i];
        tab[i] = tab[SIZE_TEN - i - 1];
        tab[SIZE_TEN - i - 1] = tmp;
    }

    printf("Tablica po odwroceniu:\n");
    print_array_int(tab, SIZE_TEN);
}

// Funkcja do zadania nr 9

void multiply_array(int *tab, int size, int liczba)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = tab[i] * liczba;
    }
}

void zadanie_9()
{
    printf("\n\tZadanie 9 \nZaprojektuj i napisz funkcje, ktora wymnozy wszystkie elementy tablicy przez dana liczbe. Tablica (wskaznik do pierwszego elementu) i liczba powinny byc przekazane jako parametry funkcji. Przetestuj funkcje w prostym programie.\n");

    int tab[SIZE_TEN], liczba;

    for (int i = 0; i <= SIZE_TEN; i++)
    {
        tab[i] = i + 1;
    }

    printf("Tablica przed mnozeniem:\n");
    print_array_int(tab, SIZE_TEN);

    printf("Prosze podac liczbe przez ktora mnozymy tablice: ");
    scanf("%d", &liczba);

    multiply_array(tab, SIZE_TEN, liczba);

    printf("Tablica po mnozeniu:\n");
    print_array_int(tab, SIZE_TEN);
}

// funkcja do zadania nr 10

void find_max_suma(int *tab, int size)
{
    int max_suma = 0, index_1, index_2;

    for (int i = 0; i < size - 1; i++)
    {
        if (tab[i] + tab[i + 1] > max_suma)
        {
            max_suma = tab[i] + tab[i + 1];
            index_1 = i;
            index_2 = i + 1;
        }
    }

    printf("Najwieksza suma to %d, indeksy to %d i %d a to suma liczby %d oraz %d\n", max_suma, index_1, index_2, tab[index_1], tab[index_2]);
}

void zadanie_10()
{
    printf("\n\tZadanie 10 \nZaprojektuj i napisz funkcje szukajaca w danej n-elementowej tablicy typu int pary sasiednich elementow, ktorych suma jest najwieksza. Funkcja jest typu void, a indeks pierwszego z elementow spelniajacych warunek ma byc dostepny w miejscu wywolania funkcji.\n");

    int tab[SIZE_STO];

    srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

    for (int i = 0; i < SIZE_STO; i++)
    {
        tab[i] = rand() % 201 - 100;
    }

    for (int i = 0; i < SIZE_STO; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    find_max_suma(tab, SIZE_STO);
}

// funckcja sortowania bąbelkowego do zadania nr 11

void bubble_sort(int *tab, int size)
{
    int temp, iteracje = 1, sorted = 1;

    while (sorted)
    {
        system("cls");
        sorted = 0;
        printf("Iteracja %d\n", iteracje++);

        for (int i = 1; i < size; i++)
        {
            if (tab[i - 1] > tab[i])
            {
                temp = tab[i - 1];
                tab[i - 1] = tab[i];
                tab[i] = temp;
                sorted++;
            }
        }
    }
}

void zadanie_11()
{
    printf("\n\tZadanie 11 \nZaprojektuj i zdefiniuj funkcje, ktora posortuje dane w tablicy (metoda babelkowa lub przez wybor elementu minimalnego). Przetestuj funkcje na tablicy o stu elementach generowanych losowo (losowe liczby od -1000 do 1000) - za wypelnianie tablicy odpowiednimi wartosciami powinna odpowiadac osobna funkcja.\n");

    int tab[SIZE_STO];

    srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

    for (int i = 0; i < SIZE_STO; i++)
    {
        tab[i] = rand() % 2001 - 1000;
    }

    printf("Tablica przed sortowaniem:\n");
    for (int i = 0; i < SIZE_STO; i++)
    {
        printf("%d \t", tab[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    _sleep(1000);

    bubble_sort(tab, SIZE_STO);

    printf("Tablica po sortowaniu:\n");
    for (int i = 0; i < SIZE_STO; i++)
    {
        printf("%d \t", tab[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

void zadanie_12()
{
    printf("\n\tZadanie 12 \nZaprojektuj i napisz funkcje: \n\n\twyznaczajaca sume dwoch n-elementowych wektorow (tablic n-elementowych typu double); \n\n\twyznaczajaca iloczyn skalarny dwoch n-elementowych wektorow (suma iloczynow odpowiadajacych sobie wspolrzednych).\n");

    double tablica_a[SIZE_TEN], tablica_b[SIZE_TEN], tablica_c[SIZE_TEN];

    srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

    for (int i = 0; i < SIZE_TEN; i++)
    {
        tablica_a[i] = ((double)rand() / RAND_MAX) * 201.0 - 100.0;
        tablica_b[i] = ((double)rand() / RAND_MAX) * 201.0 - 100.0;
    }

    printf("Tablica a:\n");
    print_array_double(tablica_a, SIZE_TEN);

    printf("Tablica b:\n");
    print_array_double(tablica_b, SIZE_TEN);

    for (int i = 0; i < SIZE_TEN; i++)
    {
        tablica_c[i] = tablica_a[i] + tablica_b[i];
    }

    printf("Tablica c (suma tablic a i b):\n");
    print_array_double(tablica_c, SIZE_TEN);

    double iloczyn_skalarny = 0;

    for (int i = 0; i < SIZE_TEN; i++)
    {
        iloczyn_skalarny += tablica_a[i] * tablica_b[i];
    }

    printf("Iloczyn skalarny tablic a i b wynosi: %lf\n", iloczyn_skalarny);
}

void zadanie_13()
{
    printf("\n\tZadanie 13 \nNapisz program, w ktorym deklarowana i inicjowana jest 3-elementowa tablica liczb typu int. Zadeklaruj trzy zmienne wskaznikowe typu int i ustaw je, tak aby wskazywaly na adresy kolejnych komorek tablicy. Wykorzystujac zmienne wskaznikowe zmodyfikuj elementy tablicy trzykrotnie zwiekszajac wartosci, ktore sie tam znajduja. Wyswietl zmodyfikowana tablice.\n");

    int tab[3] = {1, 2, 3};
    int *p1 = &tab[0], *p2 = &tab[1], *p3 = &tab[2];

    for (int i = 0; i < 3; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    *p1 *= 3;
    *p2 *= 3;
    *p3 *= 3;

    for (int i = 0; i < 3; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
}

// funkcja do zadania nr 14
int licz(double *p1, double *p2, double x)
{
    int counter = 0;
    for (double *p = p1; p <= p2; p++)
    {
        if (*p == x)
        {
            counter++;
        }
    }
    return counter;
}

// fukncja main do zadania nr 14
int main_zadanie_14(void)
{
    double t[] = {8.0, 2.0, 1.0, 6.0, 2.0, 7.0, 5.0, 2.0, 9.0};
    int n = licz(t + 1, t + 8, 2.0);
    printf("%d\n", n);
    return 0;
}

void zadanie_14()
{
    printf("\n\tZadanie 14 \nPierwsze dwa argumenty funkcji licz() wskazuja dwa elementy tej samej tablicy typu double. Uzupelnic definicje funkcji w taki sposob, by zwracala informacje o liczbie elementow posiadajacych taka sama wartosc jak trzeci argument i zawartych miedzy elementami wskazywanymi przez pierwsze dwa argumenty wlaczajac w to element wskazywany przez pierwszy argument oraz wylaczajac element wskazywany przez drugi argument. Przetestuj funkcje w ponizszym programie.\n");

    main_zadanie_14();
}

// funkcja do zadania nr 15
int fsuma(int *t, int *wsk, int roz)
{
    int sumaL = 0, sumaP = 0;

    for (int i = 0; i < roz; i++)
    {
        if (i <= wsk - t)
        {
            sumaL += t[i];
        }
        else
        {
            sumaP += t[i];
        }
    }

    if (sumaL > sumaP)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void zadanie_15()
{
    printf("\n\tZadanie 15 \nWskaznik wsk dzieli N elementowa tablice liczb typu int na dwie czesci. Napisz definicje funkcji, ktorej parametrami beda wskaznik na poczatek tablicy, wskaznik wsk i rozmiar tablicy. Funkcja powinna obliczyc dwie sumy elementow tablicy: umieszczonych przed elementem wskazanym przez wsk (lacznie z nim) oraz sume elementow polozonych za nim. Jesli suma pierwszej czesci tablicy jest wieksza, to funkcja powinna zwrocic 0, w przeciwnym wypadku 1. Prototyp funkcji: \n\n\tint fsuma(int *t, int *wsk, int roz);.\n");

    int tablica[SIZE_TEN], *wsk;

    srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

    for (int i = 0; i < SIZE_TEN; i++)
    {
        tablica[i] = rand() % 201 - 100;
    }

    wsk = &tablica[SIZE_TEN / 2];

    for (int i = 0; i < SIZE_TEN; i++)
    {
        printf("%d \t", tablica[i]);
        if (i == SIZE_TEN / 2 - 1)
        {
            printf("\n");
        }
    }

    printf("\nWartosc zwracana przez funkcje fsuma: %d\n", fsuma(tablica, wsk, SIZE_TEN));
}

// funckja do zadania nr 16

double najwieksza_liczba_index(double *tab, int size)
{

    double *max = tab;

    for (int i = 0; i < size; i++)
    {
        if (*tab > *max)
        {
            max = tab;
        }
        tab++;
    }
    return max - tab + size;
}

void zadanie_16()
{
    printf("\n\tZadanie 16 \nNapisz funkcje, ktora jako argumenty przyjmuje tablice o elementach typu double oraz rozmiar tej tablicy. Funkcja powinna zwracac wskaznik do elementu maksymalnego tej tablicy. W definicji funkcji nie mozesz uzywac zadnych zmiennych typu double oraz korzystac z indeksowania. Przetestuj funkcje w prostym programie.\n");

    srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

    double tablica[SIZE_STO]; // tablica 100 elementowa

    for (int i = 0; i < SIZE_STO; i++)
    {
        tablica[i] = ((double)rand() / RAND_MAX) * 201.0 - 100.0;
    }

    printf("Tablica:\n");

    print_array_double(tablica, SIZE_STO);

    int index = najwieksza_liczba_index(tablica, SIZE_STO);

    printf("Index najwiekszej liczby w tablicy to: %d, jego wartosc wynosi: %f", index, tablica[index]);
}

// funkcja do zadania nr 17

int wiekszy_niz_k(int *tab, int size, int k)
{
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (*tab > k)
        {
            counter++;
        }
        tab++;
    }

    return counter;
}

void zadanie_17()
{
    printf("\tZadanie 17 \nNapisz funkcje, ktora jako argumenty przyjmuje tablice o elementach typu int, rozmiar tej tablicy oraz pewna liczbe calkowita k. Funkcja powinna zwracac informacje o liczbie elementow w tablicy, ktore sa wieksze od k. W definicji funkcji mozesz uzyc tylko jednej zmiennej calkowitej i nie mozesz uzywac indeksowania. Przetestuj funkcje w prostym programie\n");

    int tablica[SIZE_TEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, k;

    printf("Podaj liczbe k: ");
    scanf("%d", &k);

    print_array_int(tablica, SIZE_TEN);
    printf("Liczba elementow wiekszych od %d to: %d\n", k, wiekszy_niz_k(tablica, SIZE_TEN, k));
}

// funkcja do zadania nr 18
int *create_array(int *tab, int size)
{
    tab = (int *)malloc(size * sizeof(int));

    if (tab == NULL)
    {
        printf("Blad alokacji pamieci\n");
        exit(1);
    }
    return tab;
}

void complete_array_18(int *tab, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % 201 - 100;
    }
}

void add_arrays(int *t1, int *t2, int *t3, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        t3[i] = t1[i];
    }
    for (int i = 0; i < m; i++)
    {
        t3[n + i] = t2[i];
    }
}

void zadanie_18()
{
    printf("\tZadanie 18 \n\n\tNapisz funkcje create_array() przydzielajaca pamiec dla tablicy o k elementach typu double. Liczba elementow tablicy jest parametrem tej funkcji, a funkcja zwraca wskaznik do odpowiedniego bloku pamieci zaalokowanego przy pomocy funkcji malloc(). \n\tW programie, korzystajac z funkcji create_array(), utworz dwie dynamiczne tablice typu double: t1 o rozmiarze n oraz t2 o rozmiarze m (n i m pobierz w funkcji scanf()). W funkcji complete_array() wypelnij tablice t1 i t2 losowymi liczbami, a nastepnie przekopiuj ich zawartosc do tablicy o identyfikatorze t3 i rozmiarze n + m, rowniez utworzonej dynamicznie. \n\tWydrukuj tablice t1, t2 i t3, korzystajac z funkcji print_array(). Pamietaj o zwolnieniu przydzielonej pamieci z wykorzystaniem funkcji free().\n");

    int n, m;

    printf("Podaj rozmiar tablicy t1: ");
    scanf("%d", &n);

    printf("Podaj rozmiar tablicy t2: ");
    scanf("%d", &m);

    int *t1 = create_array(t1, n);
    int *t2 = create_array(t2, m);
    int *t3 = create_array(t3, n + m);

    complete_array_18(t1, n);
    complete_array_18(t2, m);

    printf("Tablica t1:\n");
    print_array_int(t1, n);
    printf("Tablica t2:\n");
    print_array_int(t2, m);

    add_arrays(t1, t2, t3, n, m);
    printf("Tablica t3:\n");
    print_array_int(t3, n + m);

    free(t1);
    free(t2);
    free(t3);
    printf("Pamiec zwolniona\n");
}

// funkcja do zadania nr 19
void reverse(int *p1, int *p2)
{
    int tmp;
    while (p1 < p2)
    {
        tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
        p1++;
        p2--;
    }
}

void print_array_oneline(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void zadanie_19()
{
    printf("\tZadanie 19 \n\n\tNapisz funkcje reverse(), ktora jako argumenty przyjmuje dwa wskazniki. Pierwszy powinien wskazywac na poczatkowy element pewnej tablicy liczb calkowitych (int), a drugi na ostatni element tej tablicy. Funkcja powinna zamieniac kolejno pierwszy element tablicy z ostatnim, drugi z przedostatnim itd., az do elementow srodkowych. Funkcja nie moze korzystac z indeksowania tablicy, powinna zmieniac miedzy soba wartosci wskazywane przez dwa wskazniki. Przetestuj funkcje reverse() w programie na 5 przykladowych tablicach tworzonych dynamicznie (skorzystaj z petli). Rozmiary kolejnych tablic powinny byc podawane przez uzytkownika.\n\n\tW celu utworzenia tablicy program powinien korzystac z funkcji create_array() zwracajacej wskaznik do odpowiedniego bloku pamieci zaalokowanego przy pomocy funkcji malloc(). Funkcja create_array() powinna rowniez wypelniac utworzona tablice losowymi liczbami z zakresu od -50 do 50.\n\n\tW celu wyswietlenia tablicy program powinien korzystac z funkcji print_array(), ktora powinna drukowac zawartosc tablicy po 20 elementow w wierszu. Pamietaj o zwalnianiu przydzielonej pamieci z wykorzystaniem funkcji free().\n");

    int *t1 = create_array(t1, 10);
    int *t2 = create_array(t2, 15);
    int *t3 = create_array(t3, 20);
    int *t4 = create_array(t4, 25);
    int *t5 = create_array(t5, 30);

    complete_array_18(t1, 10);
    complete_array_18(t2, 15);
    complete_array_18(t3, 20);
    complete_array_18(t4, 25);
    complete_array_18(t5, 30);

    printf("Tablica t1:\t\t");
    print_array_oneline(t1, 10);
    printf("Tablica t1(odwrocona):\t");
    reverse(t1, t1 + 9);
    print_array_oneline(t1, 10);

    printf("Tablica t2:\t\t");
    print_array_oneline(t2, 15);
    printf("Tablica t2(odwrocona):\t");
    reverse(t2, t2 + 14);
    print_array_oneline(t2, 15);

    printf("Tablica t3:\t\t");
    print_array_oneline(t3, 20);
    printf("Tablica t3(odwrocona):\t");
    reverse(t3, t3 + 19);
    print_array_oneline(t3, 20);

    printf("Tablica t4:\t\t");
    print_array_oneline(t4, 25);
    printf("Tablica t4(odwrocona):\t");
    reverse(t4, t4 + 24);
    print_array_oneline(t4, 25);

    printf("Tablica t5:\t\t");
    print_array_oneline(t5, 30);
    printf("Tablica t5(odwrocona):\t");
    reverse(t5, t5 + 29);
    print_array_oneline(t5, 30);

    free(t1);
    free(t2);
    free(t3);
    free(t4);
    free(t5);
    printf("Pamiec zwolniona\n");
}

// funkcja do zadania nr 20

void zeruj_elementy(int *tab, int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (tab[i] > k)
        {
            tab[i] = 0;
        }
    }
}

void zadanie_20()
{
    printf("\tZadanie 1 Dodatkowe \nZaprojektuj i napisz funkcje, ktora wyzeruje wszystkie elementy wieksze od danej liczby. Tablica (wskaznik do pierwszego elementu) i liczba powinny byc przekazane jako parametry funkcji. Przetestuj funkcje w prostym programie.\n");

    int tablica[SIZE_TEN], k;

    srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

    printf("Podaj liczbe k: ");
    scanf("%d", &k);

    complete_array_18(tablica, SIZE_TEN);

    printf("Tablica przed wyzerowaniem:\t");
    print_array_oneline(tablica, SIZE_TEN);

    printf("Tablica po wyzerowaniu:\t\t");
    zeruj_elementy(tablica, SIZE_TEN, k);
    print_array_oneline(tablica, SIZE_TEN);
}

// funkcja do zadania nr 21
void complete_array_21(long *tab, int size)
{
    for (int i = 1; i <= size; i++)
    {
        tab[i - 1] = pow(i, 2);
    }
}

void print_array_21(long *tab, int size)
{
    int lines = sqrt(size);
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        counter++;
        printf("%d)%ld\t", i + 1, tab[i]);
        if (counter == 10)
        {
            printf("\n");
            counter = 0;
        }
    }
}

void zadanie_21()
{
    printf("\tZadanie 2 Dodatkowe \nNapisz program, w ktorym deklarowana jest 100-elementowa tablica typu long int. Zdefiniuj i wykorzystaj funkcje complete_array() do wypelnienia tablicy kolejnymi kwadratami liczb naturalnych (zaczynajac od 1). Zaprojektuj, a nastepnie zdefiniuj funkcje print_array(), ktora zajmie sie wyswietleniem tablicy - funkcja powinna wyswietlac po 10 liczb oddzielonych spacja w 10 wierszach a kazda liczba powinna byc wyswietlona na pieciu polach.\n");

    long *tablica_sto_elemtowa = (long *)malloc(SIZE_STO * sizeof(long));

    complete_array_21(tablica_sto_elemtowa, SIZE_STO);
    print_array_21(tablica_sto_elemtowa, SIZE_STO);
    free(tablica_sto_elemtowa);
}

// funkcja do zadania do 22

void complete_array_22(double *tab, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        tab[i] = -10 + ((double)rand() / RAND_MAX) * 20;
    }
}

int find_equals(double *tab, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (tab[i] == tab[j])
            {
                return 1;
            }
        }
    }
    return 0;
}

void zadanie_22()
{
    printf("\tZadanie 3 Dodatkowe \nNapisz funkcje szukajaca w danej n-elementowej tablicy typu double pierwszych dwoch jednakowych elementow. Funkcja zwraca wartosc 0, gdy brak jest dwoch jednakowych elementow i 1 w przeciwnym przypadku. Indeksy znalezionych elementow maja byc dostepne w miejscu wywolania funkcji. Wykorzystaj te funkcje w programie.\n");

    double *tablica_losowe_sto = (double *)malloc(SIZE_STO * sizeof(double));
    complete_array_22(tablica_losowe_sto, SIZE_STO);
    print_array_double(tablica_losowe_sto, SIZE_STO);

    printf("\nCzy sa 2 liczby takie same?: %d", find_equals(tablica_losowe_sto, SIZE_STO));
    free(tablica_losowe_sto);
}

// funkcja do zatania nr 23
void shell_sort(double *tab, int size)
{
    int sorted = 0;
    int gap = size / 2;
    double tmp;
    while (1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                sorted = 0;
                break;
            }
            else
            {
                sorted = 1;
            }
        }
        if (sorted == 1)
        {
            break;
        }
        for (int i = 0; i < size - gap; i++)
        {
            if (tab[i] > tab[i + gap])
            {
                tmp = tab[i];
                tab[i] = tab[i + gap];
                tab[i + gap] = tmp;
            }
        }

        if (gap > 1)
        {
            gap /= 2;
        }
        else
        {
            gap = 1;
        }
    }
}

void zadanie_23()
{
    printf("Zadanie 4 Dodatkowe: Zaprojektuj i napisz funkcje, ktora posortuje elementy tablicy stosujac sortowanie Shella. Przetestuj funkcje w prostym programie.\n");

    double *tablica_losowe_sto = (double *)malloc(SIZE_STO * sizeof(double));
    complete_array_22(tablica_losowe_sto, SIZE_STO);
    printf("Tablica Przed Sortowaniem: \n");
    print_array_double(tablica_losowe_sto, SIZE_STO);

    shell_sort(tablica_losowe_sto, SIZE_STO);
    printf("Tablica Po Sortowaniu: \n");
    print_array_double(tablica_losowe_sto, SIZE_STO);

    free(tablica_losowe_sto);
}

void zadanie_24() { printf("Executing zadanie_24\n"); } //TO DO IN THE FUTURE
void zadanie_25() { printf("Executing zadanie_25\n"); } //TO DO IN THE FUTURE
void zadanie_26() { printf("Executing zadanie_26\n"); } //TO DO IN THE FUTURE
void zadanie_27() { printf("Executing zadanie_27\n"); } //TO DO IN THE FUTURE
void zadanie_28() { printf("Executing zadanie_28\n"); } //TO DO IN THE FUTURE
void zadanie_29() { printf("Executing zadanie_29\n"); } //TO DO IN THE FUTURE

void execute(int choice)
{
    switch (choice)
    {
    case 1:
        zadanie_1();
        break;
    case 2:
        zadanie_2();
        break;
    case 3:
        zadanie_3();
        break;
    case 4:
        zadanie_4();
        break;
    case 5:
        zadanie_5();
        break;
    case 6:
        zadanie_6();
        break;
    case 7:
        zadanie_7();
        break;
    case 8:
        zadanie_8();
        break;
    case 9:
        zadanie_9();
        break;
    case 10:
        zadanie_10();
        break;
    case 11:
        zadanie_11();
        break;
    case 12:
        zadanie_12();
        break;
    case 13:
        zadanie_13();
        break;
    case 14:
        zadanie_14();
        break;
    case 15:
        zadanie_15();
        break;
    case 16:
        zadanie_16();
        break;
    case 17:
        zadanie_17();
        break;
    case 18:
        zadanie_18();
        break;
    case 19:
        zadanie_19();
        break;
    case 20:
        zadanie_20();
        break;
    case 21:
        zadanie_21();
        break;
    case 22:
        zadanie_22();
        break;
    case 23:
        zadanie_23();
        break;
    case 24:
        zadanie_24();
        break;
    case 25:
        zadanie_25();
        break;
    case 26:
        zadanie_26();
        break;
    case 27:
        zadanie_27();
        break;
    case 28:
        zadanie_28();
        break;
    case 29:
        zadanie_29();
        break;
    default:
        printf("Blad\n");
        break;
    }
}

int main()
{
    int choice;
    int iterations = 0;

    while (iterations < 100)
    {
        printf("\n##############################################################################################################\n");
        printf("Wprowadz numer zadania (1-29) do wykonania, lub 0 aby zakonczyc: ");
        scanf("%d", &choice);
        printf("\n##############################################################################################################\n");

        if (choice == 0)
        {
            break;
        }

        execute(choice);
        iterations++;
    }

    return 0;
}
