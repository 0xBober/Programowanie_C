#include <stdio.h>
#include <math.h>

void zadanie_1(){
    printf("\n\tZadanie 1 \nNapisz program, ktory wyswietli Twoje imie i nazwisko oraz nastepujacy napis umieszczony jeden pod drugim \"Programowanie 2024/2025\". Na ekranie powinien pojawic sie tekst w nastepujacym formacie: \nJan Kowalski \n\"Programowanie 2024/2025\"");
    printf("Michal Bobrowski\n");
    printf("\"Programowanie 2024/2025\"\n");

}

void zadanie_2(){
    printf("\n\tZadanie 2 \nWypisz na ekranie swoje imie i nazwisko, a nastepnie wydrukuj kilka informacji o sobie w postaci wizytowki. Wykorzystaj tabulatory i podzial na wiersze.\n");
    printf("\tMichal Bobrowski\n");
    printf("\t Jestem rocznik 98\'. To jest moje pierwsze podejscie na studia z cyberbezpieczenstwo. Jestem technikiem informatykiem wiec mialem stycznosc z informatyka i programowaniem.\n");
}

void zadanie_3(){
    printf("\n\tZadanie 3 \nZadeklaruj po dwie zmienne dla kazdego z typow: char, int, float oraz double. Nadaj im wartosci i wydrukuj je. Wykorzystaj odpowiednie specyfikatory formatu.\n");
    
    char char1 = 'A';
    char char2 = 'B';
    int int1 = 1;
    int int2 = 2;
    float float1 = 1.1;
    float float2 = 2.2;
    double double1 = -1.1;
    double double2 = -2.2;

    printf("char1: %c\n", char1);
    printf("char2: %c\n", char2);
    printf("int1: %d\n", int1);
    printf("int2: %d\n", int2);
    printf("float1: %f\n", float1);
    printf("float2: %f\n", float2);
    printf("double1: %f\n", double1);
    printf("double2: %f\n", double2);
}

void zadanie_4(){
    printf("\n\tZadanie 4 \nNapisz program, ktory przeliczy Twoj wiek zapisany w zmiennej w latach na wiek w dniach. Nie uwzgledniaj ulamkow lat oraz lat przestepnych.\n");
    int years, days;

    printf("Podaj swoj wiek w latach:\n ");
    scanf("%d", &years);

    days = years * 365; 

    printf("Urodziles sie okolo %d dni temu.\n", days);
}

void zadanie_5(){
    printf("\n\tZadanie 5 \nNapisz program obliczajacy objetosc oraz pole powierzchni kuli dla podanej w zmiennej wartosci promienia (zdefiniuj stala pi = 3.14159).\n\n");
    
    const float pi = 3.14159;

    float radius;
    printf("Podaj promien kuli: \n");
    scanf("%f", &radius);
    
    float objetosc = (4.0/3.0) * pi * pow(radius, 3);
    
    printf("Objetosc kuli wynosi: %f\n", objetosc);
}

void zadanie_6(){
    printf("\n\tZadanie 6\nNapisz program, ktory poprosi uzytkownika o podanie dowolnego znaku i wyswietli jego kod.\n\n");
    char symbol;
    while(1){
        printf("Prosze podaj symbol(wpisanie znak q zakonczy program): \n");
        scanf(" %c", &symbol);

        if (symbol == 'q') {
            break;
        }

        printf("Symbol: %c, ASCII: %d\n", symbol, symbol);
    }
}

void zadanie_7(){
    printf("\n\tZadanie 7 \nNapisz program, ktory poprosi uzytkownika o podanie wynagrodzenia za miesiac (w zl). Program powinien wypisywac wynagrodzenie roczne w zl oraz przeliczone na euro i dolary (sprawdz aktualne kursy walut).\n\n");

    float PLN;
    printf("Prosze podac kwote  miesiecznego zarobku w PLN: ");
    scanf("%f", &PLN);
    
    float roczny_zarobek_PLN = PLN * 12.0;
    float roczny_zarobek_EUR = roczny_zarobek_PLN * 0.23;
    float roczny_zarobek_USD = roczny_zarobek_PLN * 0.25;

    printf("Miesieczny zarobek w PLN: %.2f\n", PLN);
    printf("Roczny zarobek w PLN: %.2f\n", roczny_zarobek_PLN);
    printf("Roczny zarobek w EUR: %.2f\n", roczny_zarobek_EUR);
    printf("Roczny zarobek w USD: %.2f\n", roczny_zarobek_USD);    
}

void zadanie_8(){
    printf("\n\tZadanie 8 \nPrzerob program z zadania 5 na wersje interaktywna.\n\n");
    printf("Juz to zrobilem wiec urochomie funkcje zadanie_5 ponownie :)");
    zadanie_5();
}

void zadanie_9(){
    printf("\n\tZadanie 9 \nZnajdz odpowiednie funkcje do obliczania potegi i pierwiastka w bibliotece math.h. Napisz program, ktory wyswietli wynik nastepujacego wyrazenia (3.5)^2+sqrt(7)-(12.23)^(-3).\n");
    float x = pow(3.5,2)+sqrt(7)-pow(12.23,-3);
    printf("%f",x);
}

void zadanie_10(){
    printf("\n\tZadanie 10 \nNapisz interaktywny program, ktory przelicza podany czas w sekundach na czas podany w godzinach, minutach i sekundach.\n\n");

    int sekundy;
    printf("Prosze podac czas w sekundach: \n");
    scanf("%d", &sekundy);

    int hours = sekundy / 3600;
    int minutes = (sekundy - (hours * 3600))/60;
    int seconds = (sekundy - (hours * 3600)) - (minutes*60);

    printf("%d sekund jest rowne %d godz %d min %d sec", sekundy, hours,minutes, seconds);
}

void zadanie_11(){
    printf("/n/tZadanie 11 /nNapisz program, ktory wyswietli ile bajtow zajmuja typy char, int, float, double. Zadeklaruj zmienne wymienionych typow. Wykorzystaj operator sizeof.");    

    int int1 = sizeof(int);
    int float1 = sizeof(float);
    int double1 = sizeof(double);
    int char1 = sizeof(char);
    
    printf("Int zajumje:\t%d bajt\n", int1);
    printf("Float zajumje:\t%d bajt\n", float1);
    printf("Double zajumje:\t%d bajt\n", double1);
    printf("Char zajumje:\t%d bajt\n", char1);
}

void zadanie_12(){
    printf("\n\tZadanie 12 \nNapisz program realizujacy dodawanie ulamkow zwykłych. Program powinien pobierac dane w formacie: licznik/mianownik i w takim tez wyswietlac wynik dzialania.\n\n");

    int mianownik1, mianownik2, licznik1, licznik2;
    printf("Prosze podac piwrwszy ulamek w postaci a/b: \n");
    scanf("%d/%d", &licznik1, &mianownik1);

    printf("Prosze podac drugi ulamek w postaci a/b: \n");
    scanf("%d/%d", &licznik2, &mianownik2);

    int suma_licznika = (licznik1 * mianownik2) + (licznik2 * mianownik1);
    int wspolny_mianownik = mianownik1 * mianownik2;

    printf("Wynynik z dodania %d/%d + %d/%d = %d/%d\n\n", licznik1, mianownik1, licznik2, mianownik2, suma_licznika, wspolny_mianownik);
}

void zadanie_13(){
printf("\n\tZadanie 13 \nW ponizszym programie znajdz bledy skladniowe. Nastepnie przepisz i uruchom poprawiony program, aby upewnic sie, ze wszystkie bledy zostaly zlokalizowane.\n");

/*
1 #include <stdio.h>
2 int main(Void)
3 (
4 INT sum;
5 /* WYLICZ WYNIK
6 sum = 25 + 37 - 19
7 /* POKAŻ WYNIK //
8
9 printf("Odpowiedzia jest %d.\n" sum);
10
11 return 0;
12 )
*/

    int sum;
    // WYLICZ WYNIK
    sum = 25 + 37 - 19;
    // POKAŻ WYNIK 

    printf("Odpowiedzia jest %d.\n", sum);

}

void zadanie_14(){
    printf("\n\tZadanie 1 Dodatkowe \nNapisz program, ktory pyta uzytkownika o liczbe przebytych mil i ilosc zuzytych galonow paliwa. Nastepnie program powinien obliczyc i wyswietlic poziom zuzycia w postaci wskaznika mil/galon, z jednym miejscem po przecinku. Nastepnie korzystajac z faktu, ze 1 galon = 3.785 litrow, a jedna mila to 1.609 kilometrów - skonwertuj wskaznik mile galon na litry 100 km. Wynik ma byc wyswietlony z jednym miejscem po przecinku. Zastosuj stale (wykorzystaj slowo kluczowe const lub dyrektywe preprocesora #define) dla obu skladników konwersji.\n\n");

    float droga_w_mil, paliwo_w_galon;
    const float przelicznik_na_litr = 3.785;
    const float przelcznik_na_km = 1.609;

    printf("Prosze podac ile mil przejechales: \n");
    scanf("%f", &droga_w_mil);
    
    printf("Prosze podac ile paliwa spalono w galonach: \n");
    scanf("%f", &paliwo_w_galon);

    float srednie_spalanie_imperial = droga_w_mil/paliwo_w_galon;
    printf("Srednio przejechales %.1f mil/gal\n", srednie_spalanie_imperial);

    float droga_w_km = droga_w_mil * przelcznik_na_km;
    float paliwo_w_litr = paliwo_w_galon * przelicznik_na_litr;

    float srednie_spalanie_metric = droga_w_km / paliwo_w_litr;
    printf("Srednio przejechales %.1f km/L\n", srednie_spalanie_metric);
}

void zadanie_15(){
    printf("\n\tZadanie 2 Dodatkowe \nNapisz program, ktory dla podanej przez uzytkownika masy (kg) obliczy sile przyciagania ziemskiego. Na potrzeby programu przyjmij, ze przyspieszenie ziemskie jest stala rowna 9.81 m/s^2");

    const float g = 9.81; //wartość przyspieszenia ziemi

    float masa;

    printf("Podaj mase (>0): \n");
    scanf("%f", &masa);

    float przyspieszenie_ziemskie_masy = masa * g;

    printf("Sila przyciagania ziemskie na cialo o masie %.2f kg wynosi %f N\n", masa, przyspieszenie_ziemskie_masy);

}

void zadanie_16(){
    printf("\n\tZadanie 3 Dodatkowe\nNapisz program, ktory poprosi uzytkownika o wprowadzenie liczby trzycyfrowej (dodatniej) a nastepnie wypisze te liczbe w odwroconej kolejnosci. Napisz dwie wersje programu:\n\t1)w pierwszej do podzialu wprowadzonej liczby na poszczegolne cyfry uzyj operacji arytmetycznych.\n\t2)w drugiej nie uzywaj zadnych operacji arytmetycznych.\n\n");

    char num1,num2,num3;

    printf("Prosze podac liczbe 3 cyfrowa: \n");
    scanf(" %c%c%c",&num1,&num2,&num3);
    printf("%c%c%c\n", num3,num2,num1); //metoda nie artmetyczna zaminana poprosu znakami

    // printf("%c\n",num1);
    // printf("%c\n",num2);    //To dla testu
    // printf("%c\n",num3);

    printf("Prosze podac liczbe 3 cyfrowa ponownie: \n"); //metoda artmetyczna
    int var1;
    scanf("%d",&var1);
    int var_a,var_b,var_c;

    var_a = var1 / 100;
    var_b = (var1 - var_a *100) / 10;
    var_c = var1 % 10;

    // printf("%d\n",var_a);
    // printf("%d\n",var_b);    //To dla testu
    // printf("%d\n",var_c);

    int var_1_reversed = (var_c * 100) + (var_b * 10) + var_a;
    printf("%d\n", var_1_reversed);  
}

void zadanie_17(){
    printf("\n\tZadanie 4 Dodatkowe\nNapisz program, ktory prosi uzytkownika o podanie numeru telefonu w postaci: kierunkowy 3_cyfry 4_cyfry (np. 45 123 9801), a wyswietla w postaci: (kierunkowy) 3_cyfry-2_cyfry-2_cyfry (np. (45) 123-98-01).\n");

    char a,b,c,d,e,f,g,h,i;

    printf("Prosze podac numer telefonu w postaci: kierunek 3_cufry 4_cyfry\n");
    scanf(" %c%c %c%c%c %c%c%c%c", &a,&b,&c,&d,&e,&f,&g,&h,&i);
    printf("Podales taki numer (%c%c) %c%c%c %c%c%c%c\n", a,b,c,d,e,f,g,h,i);

}

void zadanie_18(){
    printf("\n\tZadanie 5 Dodatkowe\nNapisz program, ktory bedzie wymagac od uzytkownika wprowadzenia kwoty pienieznej, a nastepnie pokazywal, jak mozna taka kwote zlozyc z mozliwie malej liczby banknotow o nominale 10 zl, 20 zl, 50 zl, 100 zl, 200 zl i 500 zl oraz bilonu. Stosuj wartosci typu calkowitego a nie zmiennoprzecinkowego.\n");

    int UserInput, nominal_500, nominal_200, nominal_100, nominal_50, nominal_20, nominal_10, bilon;
    
    printf("Prosze podac kwot:\n");
    scanf("%d", &UserInput);
    
    int tmp = UserInput;
    
    nominal_500 = tmp / 500;
    tmp = tmp - (500 * nominal_500);
    
    nominal_200 = tmp / 200;
    tmp = tmp - (200 * nominal_200);
    
    nominal_100 = tmp / 100;
    tmp = tmp - (100 * nominal_100);
    
    nominal_50 = tmp / 50;
    tmp = tmp - (50 * nominal_50);
    
    nominal_20 = tmp / 20;
    tmp = tmp - (20 * nominal_20);
    
    nominal_10 = tmp / 10;
    tmp = tmp - (10 * nominal_10);
    
    bilon = tmp;

    printf("\nNominal 500zl: %d\n", nominal_500);
    printf("Nominal 200zl: %d\n", nominal_200);
    printf("Nominal 100zl: %d\n", nominal_100);
    printf("Nominal 50zl: %d\n", nominal_50);
    printf("Nominal 20zl: %d\n", nominal_20);
    printf("Nominal 10zl: %d\n", nominal_10);
    printf("Bilon: %d\n", bilon);
}

void zadanie_19(){
    printf("\n\tZadanie 6 Dodatkowe\nNapisz program, ktory bedzie wymagac od uzytkownika wprowadzenia wartosci dla zmiennej x, a nastepnie wyswietlal wartosc nastepujacego wielomianu:\n\t2x^5 - 4x^4 - 2x^3 - 6x^2 + x - 7.\n");
    printf("Nastepnie zmodyfikuj program tak, aby wartosc wielomianu byla obliczana na podstawie nastepujacego wzoru:\n\tx(x(x(x(2x-4)-2)-6)+1)-7\n");
    printf("Zauwaz, ze w tym programie w celu obliczenia wartosci wielomianu wykonywana jest mniejsza liczba operacji mnozenia. Taki sposob obliczania wartosci wielomianu nazywamy schematem Hornera.\n");

    int x;
    printf("Prosze podac wartosc x: \n");
    scanf("%d", &x);
    int total = x*(x*(x*(x*(2*x-4)-2)-6)+1)-7;
    printf("Wartosc wielomianu wynosi: %d\n", total);
}
void zadanie_20(){
    printf("\n\tZadanie 7 Dodatkowe \nAby zaokraglic liczbe naturalna a do najblizszej wielokrotnosci innej liczby naturalnej b, mozna skorzystac ze wzoru a + b - a %% b (%% - operator modulo). Na przyklad, w celu zaokraglenia liczby 247 dni do najblizszej liczby dni dzielacej sie na pelne tygodnie, mamy: a = 247 i b = 7, wiec z powyzszego wzoru otrzymujemy 247 + 7 - 247 %% 7 = 247 + 7 - 2 = 252. Napisz program, ktory bedzie zaokraglal podana przez uzytkownika liczbe naturalna a do najblizszej wielokrotnosci innej podanej liczby naturalnej b. Wykorzystaj zmienne typu unsigned int.\n\n");
    
    unsigned int a,b;
    printf("Prosze podac liczbe a: \n");
    scanf("%d", &a);
    printf("Prosze podac liczbe b: \n");
    scanf("%d", &b);
    int rounded = a + b - a % b;
    printf("Zaokraglona liczba to: %d\n", rounded);
}

void zadanie_21(){
    printf("\n\tZadanie 8 \nNapisz program, ktory pomoze Ci rozszyfrowac co zwraca (lub czy w ogole cos zwraca) funkcja printf() i scanf().\n");
    //skorzystałem  z pomocy bo nie widziałem jak to zadanie rozwiązać napewno do tego wrócę by zrozumieć
    int result_printf, result_scanf;
    int input;

    // Test printf
    result_printf = printf("Test printf function.\n");
    printf("printf returned: %d\n", result_printf);

    // Test scanf
    printf("Please enter an integer: ");
    result_scanf = scanf("%d", &input);
    printf("scanf returned: %d\n", result_scanf);
    printf("You entered: %d\n", input);
}


int main()
{    
    int UserInput;
    int i = 0; //w razie jakby miało się pętlić w nieskonczonosc
    
    while(i<=100)
    {
        printf("\n##################################################################################################\n");
        printf("Prosze Podac numer 0- aby wyjsc lub zadania(1-13 to zadanie podstawowe, 14-20 to zadania dodatkowe):\n");
        scanf("%d", &UserInput);
        getchar(); //czyszczenie bufora
        printf("\n##################################################################################################\n");
        switch (UserInput)
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
        case 0:
            printf("\t\t\t\t\tDowidzenia!");
            return 0;
        default:
            printf("Nie ma takiego zadania\n");
            break;
        }
        i++;
    }    
}
