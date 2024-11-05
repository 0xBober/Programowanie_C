#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>

void zadanie_1() { 
    printf("\n\tZadanie 1 \nNapisz nastepujace trzy krotkie programy:\na) program, w ktorym wyznaczona zostanie najwieksza z trzech, podanych liczb calkowitych;\nb) program, w ktorym wyznaczona zostanie suma dwoch liczb a i b, pod warunkiem, ze obydwie sa ujemne;\nb) program, w ktorym wyznaczona zostanie suma dwoch liczb a i b, pod warunkiem, ze obydwie sa tych samych znakow.\n");

    printf("Zadanie 1a\n");
    int a_1,a_2,a_3;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &a_1, &a_2, &a_3);
    if(a_1 > a_2 && a_1 > a_3)
        printf("Najwieksza liczba to: %d\n", a_1);
    else if(a_2 > a_1 && a_2 > a_3)
        printf("Najwieksza liczba to: %d\n", a_2);
    else
        printf("Najwieksza liczba to: %d\n", a_3);

    printf("Zadanie 1b\n");
    int b_1,b_2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &b_1, &b_2);
    if(b_1 < 0 && b_2 < 0)
        printf("Suma dwoch liczb to: %d\n", b_1 + b_2);
    else
        printf("Jedna z liczb nie jest ujemna\n");

    printf("Zadanie 1c\n");
    int c_1,c_2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &c_1, &c_2);
    if((c_1 < 0 && c_2 < 0) || (c_1 > 0 && c_2 > 0))
        printf("Suma dwoch liczb to: %d\n", c_1 + c_2);
    else
        printf("Liczby nie sa tego samego znaku\n");
    }

void zadanie_2() { 
    printf("\n\tZadanie 2 \nNapisz program, ktory prosi uzytkownika o podanie dwoch liczb (double) oddzielonych spacja. Program powinien porownywac te liczby i wypisac odpowiedni komunikat w zaleznosci od wyniku porownania. Zanim napiszesz kod programu w jezyku C zaprojektuj program za pomoca schematu blokowego.\n"); 

    double a,b;
    printf("Podaj dwie liczby w postaci a b:\n");
    scanf("%lf %lf", &a, &b);

    if(a > b)
        printf("Liczba %.2lf jest wieksza od %.2lf\n", a, b);
    else if(a < b)
        printf("Liczba %.2lf jest mniejsza od %.2lf\n", a, b);
    else
        printf("Liczby sa rowne\n");

}

void zadanie_3() { 
    printf("\n\tZadanie 3 \nNapisz program, ktory wylicza miejsce zerowe funkcji liniowej y = ax + b o podanych przez uzytkownika wartosciach wspolczynnikow a i b. Zanim napiszesz kod programu w jezyku C zapoznaj sie ze schematem blokowym, ktory ilustruje rozwiazanie tego problemu, przedstawionym na wykladzie.\n");
    
    int a,b,x;
    printf("Podaj wspolczynniki a i b do wzoru y = ax + b: \n");
    scanf("%d %d", &a, &b);
    x = -b/a;
    printf("Miejsce zerowe funkcji to: %d\n", x);
    }

void zadanie_4() { 
    printf("\n\tZadanie 4 \nNapisz program, ktory wylicza miejsce zerowe funkcji kwadratowej y = ax^2 + bx + c o podanych przez uzytkownika wartosciach wspolczynnikow a, b i c. Zanim napiszesz kod programu w jezyku C zaprojektuj program za pomoca schematu blokowego.\n");
    
    int a,b,c;
    float delta,x1,x2;
    
    printf("Podaj wspolczynniki a, b i c do wzoru y = ax^2 + bx + c: \n");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b - 4*a*c;
    
    if(delta > 0){
        x1 = (-b - sqrt(delta))/2*a;
        x2 = (-b + sqrt(delta))/2*a;
        printf("Miejsca zerowe funkcji to: %.2f i %.2f\n", x1, x2);
        }
    else if(delta == 0){
        x1 = -b/2*a;
        printf("Miejsce zerowe funkcji to: %.2f\n", x1);
        }
    else{
        printf("Brak miejsc zerowych\n");
        }
    }
    
void zadanie_5() { 
    printf("\n\tZadanie 5 \nW tabeli 1 znajduje sie uproszczona wersja skali Beauforta, sluzaca do szacowania sily wiatru. Napisz program, ktory bedzie wymagal od uzytkownika wprowadzenia sily wiatru w wezlach, a nastepnie wyswietli odpowiadajaca jej wartosc skali opisowej."); 
    printf("\n\nTabela \tSkala Beauforta\n");
    printf("Wiatr\t\t\tPredkosc w wezlach\n");
    printf("Cisza\t\t\t0\n");
    printf("Zefir\t\t1-3\n");
    printf("Bryza\t\t4-27\n");
    printf("Wichura\t\t28-47\n");
    printf("Sztorm\t\t48-63\n");
    printf("Huragan\t\t63>\n");

    int wiatr;
    printf("Podaj predkosc wiatru w wezlach: ");
    scanf("%d", &wiatr);

    switch (wiatr) {
        case 0:
            printf("Cisza\n");
            break;
        case 1 ... 3:
            printf("Zefir\n");
            break;
        case 4 ... 27:
            printf("Burza\n");
            break;
        case 28 ... 47:
            printf("Wichyra\n");
            break;
        case 48 ... 63:
            printf("Sztorm\n");
            break;
        case 64 ... 200: // 200 jako duza liszba poprsotu
            printf("Huragan\n");
            break;
        default:
            printf("Niepoprawna predkosc wiatru\n");
            break;
    }
}


void zadanie_6() { 
    printf("Zadanie 6 Napisz program, ktory dla podanej przez uzytkownika liczby wyswietli jej wartosc bezwzgledna. Wykorzystaj trojargumentowy operator warunkowy (?:) \n");
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    int wartosc_bezwzgledna = (a < 0) ? -a : a;
    printf("Wartosc bezwzgledna z liczby %d to: %d\n", a, wartosc_bezwzgledna);
    }

void zadanie_7() { 
    printf("\n\tZadanie 7 \nZmodyfikuj programy z zadania 1, tak aby zamiast instrukcji warunkowych wykorzystywany byl trojargumentowy operator warunkowy.\n");
    
    printf("Zadanie 1a\n");
    int a_1, a_2, a_3;
    printf("Podaj trzy liczby calkowite: \n");
    scanf("%d %d %d", &a_1, &a_2, &a_3);
    int max = (a_1 > a_2) ? ((a_1 > a_3) ? a_1 : a_3) : ((a_2 > a_3) ? a_2 : a_3);
    printf("Najwieksza liczba to: %d\n", max);

    printf("Zadanie 1b\n");
    int b_1, b_2;
    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d %d", &b_1, &b_2);
    (b_1 < 0 && b_2 < 0) ? printf("Suma dwoch liczb to: %d\n", b_1 + b_2) : printf("Jedna z liczb nie jest ujemna\n");

    printf("Zadanie 1c\n");
    int c_1, c_2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &c_1, &c_2);
    ((c_1 < 0 && c_2 < 0) || (c_1 > 0 && c_2 > 0)) ? printf("Suma dwoch liczb to: %d\n", c_1 + c_2) : printf("Liczby nie sa tego samego znaku\n");
    
}

void zadanie_8() { 
    printf("\n\tZadanie 8 \nRok jest przestepny, jezeli jest podzielny przez 4. Od tej reguly jest jednak wyjatek. Jezeli on jest jednoczesnie podzielny przez 100 to nie jest przestepny - chyba, ze podzielny przez 400. Napisz program, ktory sprawdza czy podany przez uzytkownika rok jest rokiem przestepnym.\n"); 
    
    int rok;
    printf("Podaj rok: ");
    scanf("%d"), &rok;

    if((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
        printf("Rok %d jest przestepny\n", rok);
    else
        printf("Rok %d nie jest przestepny\n", rok);
    }

void zadanie_9() { 
    printf("\n\tZadanie 9 \nW tabeli 2 znajduja sie wartosci predkosci rozchodzenia sie dzwieku w powietrzu, wodzie i stali. Napisz program, ktory bedzie wyswietlal menu pozwalajacy wybrac osrodek. Po dokonaniu wyboru przez uzytkownika program powinien prosic go o prowadzenie odleglosci jaka dzwiek przebedzie w okreslonym osrodku. Nastepnie program powinien wyswietlac czas ktory bedzie potrzebny na przebycie tej drogi. Zweryfikuj czy uzytkownik wybral jedna z dostepnych pozycji w menu. Program nie moze przyjmowac odleglosci mniejszych lub rownych zero.\n");

    const double predkosc_dzwieku_powietrze = 343.0;
    const double predkosc_dzwieku_woda = 1490.0;
    const double predkosc_dzwieku_stal = 5100.0;
    double odleglosc, czas;
    int wybor;

    while(1){
        printf("Prosze wybrac osrodek:\n");
        printf("Wybor\t| Osrodek\t| Predkosc\n");
        printf("1\t| powietrze\t| %.0lf\n", predkosc_dzwieku_powietrze);
        printf("2\t| woda\t\t| %.0lf\n", predkosc_dzwieku_woda);
        printf("3\t| stal\t\t| %.0lf\n", predkosc_dzwieku_stal);
        printf("0 - Zakonczenie Programu\n");
        scanf("%d", &wybor);
        getchar();

        if(wybor < 0 && wybor >= 3){continue;}
        else if (wybor == 0)
        {
            printf("Dowidzenia!\n");
            return;
        }
        

        printf("Prosze podac odleglosc w metrach: \n");
        scanf("%lf", &odleglosc);
        getchar();

        switch (wybor)
        {
        case 1:
            czas = odleglosc / predkosc_dzwieku_powietrze;
            printf("Dziek pokona odleglosc %.2lf m w czasie %.0lf sec\n", odleglosc ,czas);
            break;
        case 2:
            czas = odleglosc / predkosc_dzwieku_woda;
            printf("Dziek pokona odleglosc %.2lf m w czasie %.0lf sec\n", odleglosc ,czas);
            break;
        case 3:
            czas = odleglosc / predkosc_dzwieku_stal;
            printf("Dziek pokona odleglosc %.2lf m w czasie %.0lf sec\n", odleglosc ,czas);
            break;
        default:
            break;
        }
    }

    }

void zadanie_10() { 
    printf("\n\tZadanie 10 \nNapisz program umozliwiajacy uzytkownikowi wpisywanie prostych wyrazen w nastepujacej formie: \n\t1 liczba operator liczba \nProgram powinien interpretowac wyrazenie i wyswietlac wynik z dokladnoscia do dwoch miejsc po przecinku. Rozwazane operatory to standardowe operatory dodawania, odejmowania, mnozenia oraz dzielenia. Do sprawdzenia, jakie dzialanie ma byc wykonane uzyj: \n\t1) instrukcji if...else; \n\t2) instrukcji switch.\n");

    float a, b, wynik;
    char operator;

    printf("Podaj wyrazenie w postaci: liczba operator liczba: \n");
    scanf("%f %c %f", &a, &operator, &b);

    switch (operator)
    {
    case '+':
        wynik = a + b;
        break;
    case '-':
        wynik = a - b;
        break;
    case '*':
        wynik = a * b;
        break;
    case '/':
        if(b == 0){
            printf("Nie mozna dzielic przez 0\n");
            return;
        }
        wynik = a / b;
        break;
    default:
        break;
    }
    printf("Wynik: %.2f\n", wynik);
}

void zadanie_11() { 
    printf("\n\tZadanie 11 \nZa pomoca instrukcji switch zamien ocene wyrazona w punktach na ocene w stopniach. Przyjmij nastepujaca skale ocen: A = 90 - 100 punktow, B = 80 - 89 punktow, C = 70 - 79 punktow, D = 60 - 69 punktow, E = 0 - 59 punktow. Jezeli liczba punktow jest wieksza niz 100 lub mniejsza od zera, program powinien wypisac komunikat o bledzie. Wskazowka: Podziel liczbe punktow na osobne cyfry, a potem za pomoca instrukcji switch sprawdz wartosc pierwszej (bardziej znaczacej) cyfry.\n");

    int ocena;
    char nowa_ocena;

    printf("Podaj ocene w punktach: ");
    scanf("%d", &ocena);

    switch (ocena)
    {
    case 90 ... 100:
        nowa_ocena = 'A';    
        break;
    case 80 ... 89:
        nowa_ocena = 'B';    
        break;
    case 70 ... 79:
        nowa_ocena = 'C';    
        break;
    case 60 ... 69:
        nowa_ocena = 'D';    
        break;
    case 0 ... 59:
        nowa_ocena = 'E';    
        break;
    default:
        printf("Niepoprawna ocena\n");
        return;
    }
    printf("Wynik %d punktow to ocena %c\n", ocena, nowa_ocena);
}

void zadanie_12() { 
    printf("\n\tZadanie 12 \nNapisz program, ktory dokona analizy znaku podanego przez uzytkownika i zaklasyfikuje go do jednej z trzech grup: \n\n\tlitera (a do z lub od A do Z); \n\n\tcyfra (od 0 do 9); \n\n\tznak specjalny (wszystkie inne).\n");

    char user_input;
    printf("Podaj znak: \n");
    scanf(" %c", &user_input);  // Added a space before %c to consume any leftover whitespace

    int ascii = (int)user_input;

    if((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        printf("Podany znak to litera\n");
    else if(ascii >= 48 && ascii <= 57)
        printf("Podany znak to cyfra\n");
    else
        printf("Podany znak to znak specjalny\n");
}

void zadanie_13() { 
    printf("\n\tZadanie 1 Dodatkowe\nNapisz program, ktory obliczy, ile jest cyfr w podanej przez uzytkownika liczbie. Zaloz, ze liczba jest co najwyzej czterocyfrowa.\n");
    char liczba[255];
    int count;
    printf("Podaj liczbe: ");
    scanf("%s", liczba);
    count = strlen(liczba);
    printf("Liczba cyfr w podanej liczbie to: %d\n", count);
}

void zadanie_14() { 
    printf("\n\tZadanie 2 Dodatkowe \nNapisz program, ktory z posrod podanych przez uzytkownika czterech liczb (typu double) wyszuka najmniejsza i najwieksza. Uzyj minimalnej liczby instrukcji if...else.\n");
    double table[4],min,max;
    printf("Podaj cztery liczby: ");
    scanf("%lf %lf %lf %lf", &table[0], &table[1], &table[2], &table[3]);

    for(int i = 0; i < 4; i++){
        if(i == 0){
            min = table[i];
            max = table[i];
        }
        else{
            if(table[i] < min)
                min = table[i];
            if(table[i] > max)
                max = table[i];
        }
    }
    printf("Najmniejsza liczba to: %.2lf\n", min);
    printf("Najwieksza liczba to: %.2lf\n", max);
}

void zadanie_15() { 
    printf("\n\tZadanie 3 Dodatkowe\nNapisz program, ktory bedzie prosil uzytkownika o wprowadzenie godziny w zapisie 24-godzinnym, a potem wypisze ja w zapisie 12-godzinnym.\n"); 
    int godzina,minuta;
    printf("Podaj godzine w formacie 24-godzinnym(hh:mm):\n ");
    scanf("%d:%d", &godzina, &minuta);
    if(godzina > 12)
        printf("Godzina w formacie 12-godzinnym to: %d:%d PM\n", godzina - 12, minuta);
    else
        printf("Godzina w formacie 12-godzinnym to: %d:%d AM\n", godzina, minuta);
}

void zadanie_16() { 
    printf("\n\tZadanie 4 Dodatkowe\nNapisz program, ktory po podaniu liczby z zakresu 1 - 5 bedzie emitowal odpowiednia do podanej wartosci liczbe dzwiekow. Uzyj instrukcji switch i nie stosuj petli (nawet jesli juz potrafisz ich uzywac)! \n\n\tWskazowka: Skorzystaj z funkcji Sleep() z biblioteki windows.h.\n");
    int liczba;
    printf("Podaj liczbe z zakresu 1-5: ");
    scanf("%d", &liczba);
    switch (liczba)
    {
    case 5:
        Beep(750, 300); // Emitowanie dźwięku (częstotliwość 750 Hz, czas trwania 300 ms)
        Sleep(300);      // Krótkie opóźnienie między dźwiękami
    case 4:
        Beep(750, 300);
        Sleep(300);
    case 3:
        Beep(750, 300);
        Sleep(300);
    case 2:
        Beep(750, 300);
        Sleep(300);
    case 1:
        Beep(750, 300);
        break;
    case 6: // Mały easter egg :)
        Beep(440, 500); Sleep(50); // A
        Beep(440, 500); Sleep(50); // A
        Beep(440, 500); Sleep(50); // A
        Beep(349, 350); Sleep(50); // F
        Beep(523, 150); Sleep(50); // High C
        Beep(440, 500); Sleep(50); // A
        Beep(349, 350); Sleep(50); // F
        Beep(523, 150); Sleep(50); // High C
        Beep(440, 1000); Sleep(50); // A
        Beep(659, 500); Sleep(50); // E
        Beep(659, 500); Sleep(50); // E
        Beep(659, 500); Sleep(50); // E
        Beep(698, 350); Sleep(50); // F
        Beep(523, 150); Sleep(50); // High C
        Beep(415, 500); Sleep(50); // G#
        Beep(349, 350); Sleep(50); // F
        Beep(523, 150); Sleep(50); // High C
        Beep(440, 1000); Sleep(50); // A
    default:
        printf("Niepoprawna liczba\n");
        break;
    }
}

void zadanie_17() { 
    printf("\n\tZadanie 5 Dodatkowe \nOperator sieci komorkowej oferuje trzy pakiety internetu dla swoich klientow: \n\n\tPakiet A: 39.99 zl miesiecznie. 100 GB danych. Doplata 5 zl za kazdy nadmiarowy gigabajt. \n\n\tPakiet B: 59.99 zl miesiecznie. 200 GB danych. Doplata 2 zl za kazdy nadmiarowy gigabajt. \n\n\tPakiet C: 69.99 zl miesiecznie. Bez limitu danych. \n\nNapisz program, ktory obliczy miesieczny rachunek dla klienta. Program powinien poprosic o wpisanie wybranego przez klienta pakietu i liczbe wykorzystanych gigabajtow. Nastepnie powinien wyswietlic ostateczna kwote do zaplaty. Upewnij sie, ze uzytkownik wpisze wylacznie opcje A, B lub C tj. w przypadku wpisania innej wartosci program ma wypisac odpowiedni komunikat.\n"); 

    char pakiet;
    double cena, dodatkowe_gb;

    printf("Wybierz pakiet A, B lub C: ");
    scanf(" %c", &pakiet);

    switch (pakiet)
    {
    case 'A':
        cena = 39.99;
        printf("Podaj ilosc dodatkowych GB: ");
        scanf("%lf", &dodatkowe_gb);
        cena += dodatkowe_gb * 5;
        break;
    case 'B':   
        cena = 59.99;
        printf("Podaj ilosc dodatkowych GB: ");
        scanf("%lf", &dodatkowe_gb);
        cena += dodatkowe_gb * 2;
        break;
    case 'C':
        cena = 69.99;
        break;
    default:    
        printf("Niepoprawny pakiet\n");
        return;
    }
    printf("Miesieczny rachunek to: %.2lf zl\n", cena);
}

void zadanie_18() { 
    printf("\n\tZadanie 6 Dodatkowe\nZmodyfikuj program z zadania 5 tak, aby wyswietlal, ile zaoszczedzilby klient posiadajacy pakiet A, gdyby kupil pakiet B lub C, oraz ile zaoszczedzilby klient posiadajacy pakiet B, gdyby kupil pakiet C. Jezeli nie bedzie zadnych oszczednosci program powinien nie wyswietlac zadnych dodatkowych komunikatow.\n");

        char pakiet;
    double cena, dodatkowe_gb;

    printf("Wybierz pakiet A, B lub C: ");
    scanf(" %c", &pakiet);

    switch (pakiet)
    {
    case 'A':
        cena = 39.99;
        printf("Podaj ilosc dodatkowych GB: ");
        scanf("%lf", &dodatkowe_gb);
        cena += dodatkowe_gb * 5;
        printf("Zaoszczedzisz: %.2lf zl kupujac pakiet B\n", cena - (59.99 + dodatkowe_gb * 2));
        printf("Zaoszczedzisz: %.2lf zl kupujac pakiet C\n", cena - 69.99);
        break;
    case 'B':   
        cena = 59.99;
        printf("Podaj ilosc dodatkowych GB: ");
        scanf("%lf", &dodatkowe_gb);
        cena += dodatkowe_gb * 2;
        printf("Zaoszczedzisz: %.2lf zl kupujac pakiet C\n", cena - 69.99);
        break;
    case 'C':
        cena = 69.99;
        break;
    default:    
        printf("Niepoprawny pakiet\n");
        return;
    }
    printf("Miesieczny rachunek to: %.2lf zl\n", cena); 
}
void zadanie_19() { 
    printf("\n\tZadanie 7 Dodatkowe \nW przypadku gdy fala dzwiekowa rozchodzi sie w gazie jej predkosc zalezy przede wszystkim od gestosci osrodka. Predkosc bedzie tym wieksza im mniejsza bedzie gestosc srodka. W tabeli 3 przedstawiono predkosci dzwieku przy temperaturze 0 stopni C wyrazona w metrach na sekunde dla dwutlenku wegla, powietrza, helu i wodoru. Napisz program, ktory wyswietla menu pozwalajace wybrac osrodek. Po dokonaniu wyboru przez uzytkownika program powinien prosic go o wprowadzenie czasu, jaki dzwiek potrzebowal, by przebyć droge od zrodla do punktu, w ktorym zostal zarejestrowany. Program powinien wyswietlic, jak daleko od punktu wykrycia znajdowalo sie zrodlo dzwieku. Zweryfikuj czy uzytkownik wybral jedna z dostepnych pozycji w menu. Program moze przyjmowac czas mieszczacy sie w przedziale od 0 do 30 sekund.\n");
    printf("\n\nTabela 3 \tPredkosc dzwieku w metrach na sekunde\n");
    printf("Nr\t\t|Osrodek\t\t|Predkosc\n");
    printf("1\t\t|Dwutlenek wegla\t|258.0\n");
    printf("2\t\t|Powietrze\t\t|331.5\n");
    printf("3\t\t|Hel\t\t\t|972.0\n");
    printf("4\t\t|Wodor\t\t\t|1270.0\n");

    const double predkosc_dzwieku_dwutlenek_wegla = 258.0;
    const double predkosc_dzwieku_powietrze = 331.5;
    const double predkosc_dzwieku_hel = 972.0;
    const double predkosc_dzwieku_wodor = 1270.0;

    double czas, odleglosc;

    int wybor;
    
    try_again:    
        printf("Prosze wybrac osrodek:\n");
        scanf(" %d", &wybor);
            
        if(wybor < 1 || wybor > 4) {
            printf("Niepoprawny wybor\n");
            goto try_again; //tak dla zasady użyłem bardzo nie dobrego goto :)
        }
    retry:
        printf("Prosze podac czas w sekundach(0 0 < s < 30):\n");
        scanf("%lf", &czas);
        
        if(czas < 0 || czas > 30) {
            printf("Czas musi byc w przedziale od 0 do 30 sekund\n");
            goto retry; //tak dla zasady użyłem bardzo nie dobrego goto :)
        }

    switch (wybor)
    {
        case 1:
            odleglosc = czas * predkosc_dzwieku_dwutlenek_wegla;
            printf("Dzwiek przebyl odleglosc %.2lf m\n", odleglosc);
            break;
        case 2:
            odleglosc = czas * predkosc_dzwieku_powietrze;
            printf("Dzwiek przebyl odleglosc %.2lf m\n", odleglosc); 
            break;
        case 3:
            odleglosc = czas * predkosc_dzwieku_hel;
            printf("Dzwiek przebyl odleglosc %.2lf m\n", odleglosc);
            break;
        case 4:
            odleglosc = czas * predkosc_dzwieku_wodor;
            printf("Dzwiek przebyl odleglosc %.2lf m\n", odleglosc);
            break;
        default:
            break;
    }

}

void zadanie_20() { 
    printf("Zadanie 8 W tabeli 4 znajduja sie wartosci punktow topnienia i wrzenia dla kilku substancji. Napisz program, ktory poprosi uzytkownika o wpisanie temperatury substancji (w stopniach Celsjusza), a nastepnie wyswietli, ktore substancje beda w danej temperaturze wrzec, a ktore beda zamarzaly. Przykladowo, jezeli uzytkownik wpisze -10, program powinien wyswietlic informacje, ze woda bedzie zamarzac, a tlen bedzie wrzal.\n"); 
    printf("\n\nTabela 4 \tWartosci punktow topnienia i wrzenia w stopniach Celsjusza\n");
    printf("Substancja\t\t|Punkt topnienia\t|Punkt wrzenia\n");
    printf("alkol etylowy\t\t|-114\t\t\t|78\n");
    printf("rtec\t\t\t|-39\t\t\t|357\n");
    printf("tlen\t\t\t|-218\t\t\t|-163\n");
    printf("woda\t\t\t|0\t\t\t|100\n");

    int temperatura;
    char alkol_etylowy[12], rtec[12], tlen[12], woda[12];

    printf("Podaj temperature w stopniach Celsjusza: ");
    scanf("%d", &temperatura);

    if(temperatura <= -114){
        strcpy(alkol_etylowy, "topi");
    }
    else if(temperatura >= 78){
        strcpy(alkol_etylowy, "wrze");
    }
    else{
        strcpy(alkol_etylowy, "nie zmienia");
    }

    if(temperatura <= -39){
        strcpy(rtec, "topi");
    }
    else if(temperatura >= 357){
        strcpy(rtec, "wrze");
    }
    else{
        strcpy(rtec, "nie zmienia");
    }
    
    if(temperatura <= -218){
        strcpy(tlen, "topi");
    }
    else if(temperatura >= -163){
        strcpy(tlen, "wrze");
    }
    else{
        strcpy(tlen, "nie zmienia");
    }

    if(temperatura <= 0){
        strcpy(woda, "topi");
    }
    else if(temperatura >= 100){
        strcpy(woda, "wrze");
    }
    else{
        strcpy(woda, "nie zmienia");
    }

    printf("Alkol etylowy \t%s\n", alkol_etylowy);
    printf("Rtec \t\t%s\n", rtec);
    printf("Tlen \t\t%s\n", tlen);
    printf("Woda \t\t%s\n", woda);

}

int main() {
    int number, count = 0;

    while (count < 100) {
        printf("#############################################################################################\n");
        printf("Wybierz numer zadania(1-12 to zadanie podstawowe, 13-20 zadania dodatkowe, 0-aby wyjsc): \n");
        scanf("%d", &number);
        printf("#############################################################################################\n");

        switch (number) {
            case 0:
                return 0;
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
                printf("Nie poprawny wybor, prosze podac numer miedzy 1-20.\n");
                break;
        }
        count++;
    }

    return 0;
}
