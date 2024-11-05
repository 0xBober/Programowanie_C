#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

static double srednia_harmoniczna(double Liczby[], int size){ //Funkcja do zadania nr 1
    double suma = 0, srednia;

    for(int i = 0; i <= size; i++){
        if(Liczby[i] == 0){break;}
        suma += 1/Liczby[i];
    }
    return srednia = size/suma;
}

void zadanie_1() { 
    printf("\n\tZadanie 1 \nSrednia harmoniczna dwoch liczb uzyskujemy przez znalezienie odwrotnosci danych liczb, obliczeniu z nich sredniej arytmetycznej i wyliczeniu odwrotnosci otrzymanego wyniku. Zaprojektuj funkcje, ktora pobiera dwa argumenty typu double i zwraca ich srednia harmoniczna. Przetestuj napisana funkcje w prostym programie.\n");

    //postanowiłem pozwolić na wprowadzenie więcej niż jedną warotść ale max 50, można zawsze więcej ale trzeba byłoby zwiększyć rozmiar tabeli
    double UserInput, Liczby[50], srednia;
    int x = 0;

    while(1){
        printf("Prosze podac liczbe nr %d: ", x + 1);
        scanf("%lf", &UserInput);

        if(UserInput == 0 || x == 49){
            Liczby[x] = 0; //dopisanie 0 na koniec
            break;
        }
        else{
            Liczby[x++] = UserInput;
        }
    }

    srednia = srednia_harmoniczna(Liczby, x);

    printf("%lf\n", srednia);
}

static double max(double x, double y){ //funkcja do zadania nr 2
    return (x > y) ? x : y;
}

void zadanie_2() { 
    printf("\n\tZadanie 2 \nZaprojektuj funkcje max(x,y), zwracajaca wieksza z dwoch wartosci typu double. Przetestuj napisana funkcje w prostym programie.\n"); 

    double x, y;

    printf("Prosze podac 2 liczby w postaci x y:\n");
    scanf("%lf %lf", &x, &y);

    printf("Najwieksza wartosc to %lf\n", max(x,y));
}

/* Funkcje do zadania nr 3
static int silnia(int x){
    int wynik = 1;
    for(int i = 2; i <= x; i++){
        wynik *= i;
    }
     return wynik;
}
*/
static int silnia(int x) { //zachciało mi się rekurencyjnie zrobić :D
    if (x <= 1) {
        return 1;
    } else {
        return x * silnia(x - 1);
    }
}

static double wspolczynnik_Dwumianowy(int x, int y){
    double n = (double)x;
    double k = (double)y;
    double wynik;
    return wynik = (silnia(n))/(silnia(k)*silnia(n - k));
}

void zadanie_3() { 
    printf("\n\tZadanie 3 \nNapisz iteracyjna wersje funkcji wyznaczajacej wartosc n! (silnia) dla danego argumentu n. Korzystajac z funkcji napisz program: \n\n\ta) wyliczajacy wartosc wyrazenia 4! + 6! - 2!; \n\n\tb) wyznaczajacy wartosc symbolu Newtona dla n = 5 i k = 2.\n\n"); 

    printf("Wynik z dzialania 4! + 6! - 2! = %d\n", silnia(4) + silnia(6) - silnia(2));
    printf("Wynik z wspolczynnika dwumianowy gdzie n = 5 i k = 2 wynosi: %lf\n", wspolczynnik_Dwumianowy(5,2));
}

//Funkcja do zadania nr 4
static double power(double liczba, int potega){
    double wynik = 1;
    for(int i = 1; i <= potega; i++){
        wynik *= liczba;
    }
    return wynik;
}

void zadanie_4() { 
    printf("\n\tZadanie 4 \nZaprojektuj funkcje power(), ktora zwraca wynik podniesienia liczby do potegi calkowitej (wykladnik potegi (int) i liczba (double) sa argumentami tej funkcji). Uzyj petli. Przetestuj napisana funkcje w prostym programie obliczajac wartosc wyrazenia (3.1)^2 + (5.5)^3 + 24.\n"); 
    printf("Wynik wyrazenia (3.1)^2 + (5.5)^3 + 24 = %lf\n", power(3.1,2)+ power(5.5,3) + 24.0);
}

//funkcja do zadania nr 5
static int DecToBinaryWithOneCounter(unsigned int liczba){
    int wynik = 0;

    while(liczba){
        if(liczba % 2 == 1){
        liczba = (liczba - 1)/2;
        wynik++;
        }
        else{
            liczba /= 2;
        }
    }

    return wynik;
}

void zadanie_5() { 
    printf("\n\tZadanie 5 \nNapisz funkcje, ktora jako argument otrzyma liczbe calkowita dodatnia (typ unsigned int) i policzy ile jedynek znajduje sie w jej reprezentacji binarnej oraz zwroci te wartosc do miejsca wywolania. Przetestuj funkcje w prostym programie.\n"); 

    printf("Liczba  12345 posiada %d jedynek\n", DecToBinaryWithOneCounter(12345));
    printf("Liczba  255 posiada %d jedynek\n", DecToBinaryWithOneCounter(255));
    printf("Liczba  123456789 posiada %d jedynek\n", DecToBinaryWithOneCounter(123456789));
    printf("Liczba  %d posiada %d jedynek\n", INT_MAX ,DecToBinaryWithOneCounter(INT_MAX));
}

//funkcja do zadania nr 6
static void prostokat(char znak, int x, int y){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%c", znak);
        }
        printf("\n");
    }
}

void zadanie_6() { 
    printf("\n\tZadanie 6 \nNapisz funkcje pobierajaca trzy argumenty: znak i dwie liczby calkowite (bez znaku). Pierwsza liczba okresla ile razy, nalezy wyswietlic znak w jednym wierszu; druga okresla liczbe wierszy. Funkcja powinna wyswietlac odpowiednia liczbe znakow w odpowiedniej ilosci wierszy. Przetestuj napisana funkcje w prostym programie.\n"); 
    
    char znak;
    int x, y;

    printf("Prosze podac znak oraz 2 liczby calkowite w postaci Z X Y\n");
    scanf(" %c %d %d", &znak, &x, &y);

    prostokat(znak, x, y);
}

//Funkcja do zadania nr 7
int get_number(int min, int max)
{
  int num;
  do
  {
    printf("Podaj liczbę od %d do %d:\n", min, max);
    scanf("%d", &num);
  }while(min > num || num > max);

  return num;
}

void zadanie_7() { 
    printf("\n\tZadanie 7 \nZaprojektuj funkcje get_number(), ktora bedzie sluzyla do pobierania liczby calkowitej z podanego zakresu i zwracala ja. Funkcja powinna tak dzialac, aby zmusic uzytkownika do podania liczby calkowitej z podanego zakresu (zakres zdefiniowany przez dwa argumenty funkcji). Przetestuj napisana funkcje w prostym programie.\n"); 
    
    get_number(35,75);
}

void zadanie_8() { 
    printf("\n\tZadanie 8 \nNapisz krotki program, w ktorym sa zadeklarowane i zinicjalizowane cztery zmienne: znakowa, calkowita, zmiennopozycyjna i zmiennopozycyjna podwojnej precyzji. Niech program wyswietla wartosc kazdej zmiennej oraz jej adres w pamieci. Napisz dwie wersje programu: \n\n\t*program wyswietla wartosc kazdej zmiennej oraz jej adres przy uzyciu jej nazwy, \n\n\t*w czesci programu, realizujacej wyswietlanie ww. danych, nie jest uzywana nazwa danej zmiennej.\n"); 

    char znak = 'A', *pZnak = &znak;
    int liczba_calkowita = 99, *pLiczba_calkowita = &liczba_calkowita;
    float liczba_ziemiennopozycyjna = 123.321, *pLiczba_ziemiennopozycyjna = &liczba_ziemiennopozycyjna;
    double liczba_ziemiennopozycyjna_podwojnej_precyzjii = 123456789.54321, *pLiczba_ziemiennopozycyjna_podwojnej_precyzjii = &liczba_ziemiennopozycyjna_podwojnej_precyzjii;

    //jestem świadomy absurdalnie długich nazw zmiennych :D

    printf("Zmienna 1\tWartosc: %c\t\t\tAdress: %p\n", znak, &znak);
    printf("Zmienna 2\tWartosc: %d\t\t\tAdress: %p\n", liczba_calkowita, &liczba_calkowita);
    printf("Zmienna 3\tWartosc: %f\t\tAdress: %p\n", liczba_ziemiennopozycyjna, &liczba_ziemiennopozycyjna);
    printf("Zmienna 4\tWartosc: %lf\tAdress: %p\n\n", liczba_ziemiennopozycyjna_podwojnej_precyzjii, &liczba_ziemiennopozycyjna_podwojnej_precyzjii);

    printf("Zmienna 1\tWartosc: %c\t\t\tAdress: %p\n", *pZnak, pZnak);
    printf("Zmienna 2\tWartosc: %d\t\t\tAdress: %p\n", *pLiczba_calkowita, pLiczba_calkowita);
    printf("Zmienna 3\tWartosc: %f\t\tAdress: %p\n", *pLiczba_ziemiennopozycyjna, pLiczba_ziemiennopozycyjna);
    printf("Zmienna 4\tWartosc: %lf\tAdress: %p\n\n", *pLiczba_ziemiennopozycyjna_podwojnej_precyzjii, pLiczba_ziemiennopozycyjna_podwojnej_precyzjii);

}

int min(int *x, int *y){
    return (*x > *y) ? *y : *x;
}

void zadanie_9() { 
    printf("\n\tZadanie 9 \nNapisz funkcje otrzymujaca jako argumenty wskazniki do dwoch zmiennych typu int, ktora zwraca jako wartosc mniejsza z liczb wskazywanych przez argumenty. Przetestuj napisana funkcje w prostym programie.\n"); 

    int a = 4, b = 5, *pa = &a, *pb = &b;

    printf("Co jest wieksze? Liczba %d czy %d? Odp: %d\n", 4, 5, min(pa, pb));
}

void zadanie_10() { printf("Executing zadanie_10\n"); }

void zadanie_11() { printf("Executing zadanie_11\n"); }

void zadanie_12() { printf("Executing zadanie_12\n"); }

void zadanie_13() { printf("Executing zadanie_13\n"); }

void zadanie_14() { printf("Executing zadanie_14\n"); }

void zadanie_15() { printf("Executing zadanie_15\n"); }

void zadanie_16() { printf("Executing zadanie_16\n"); }

void zadanie_17() { printf("Executing zadanie_17\n"); }

void zadanie_18() { printf("Executing zadanie_18\n"); }

void zadanie_19() { printf("Executing zadanie_19\n"); }

void zadanie_20() { printf("Executing zadanie_20\n"); }

int main() {
    int choice, x = 0;
    while (x < 100) {
        printf("\n#####################################################################################################################\n");
        printf("Wprowadz numer (0 aby zakonczyc, 1-20 aby wykonac zadanie): ");
        scanf("%d", &choice);
        printf("\n#####################################################################################################################\n");

        switch (choice) {
            case 0:
                printf("Dowidzenia!\n");
                exit(0);
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
            default:
                printf("Nieprawidlowy wybor. Prosze wprowadzic numer od 0 do 20.\n");
                break;
        }
    x++;
    }
    return 0;
}
