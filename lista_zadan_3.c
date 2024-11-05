#include <stdio.h>
#include <stdlib.h> // exit()
#include <math.h> // pow()
#include <string.h> 

void zadanie_1() { 
    printf("\n\tZadanie 1 \nNapisz program, ktory prosi uzytkownika o podanie liczby calkowitej, po czym wyswietla 10 kolejnych liczb calkowitych wiekszych od wprowadzonej liczby. Wykorzystaj petle while. Zanim napiszesz kod programu w jezyku C zaprojektuj program za pomoca schematu blokowego.\n"); 

    int number, i = 0;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &number);

    while(i < 10) {
        number++;
        printf("%d\n", number);
        i++;
    }
}

void zadanie_2() { 
    printf("\n\tZadanie 2 \nNapisz program, ktory liczy za uzytkownika. Pozwol uzytkownikowi na wprowadzenie liczby poczatkowej, liczby koncowej i wielkosci odstepu miedzy kolejnymi liczbami. Wykorzystaj petle while.\n");

    int start, end, step;

    printf("Podaj liczbe poczatkowa: ");
    scanf("%d", &start);

    printf("Podaj liczbe koncowa: ");
    scanf("%d", &end);

    printf("Podaj wielkosc odstepu: ");
    scanf("%d", &step);

    while(start <= end) {
        printf("%d\n", start);
        start += step;
    } 
}

void zadanie_3() { 
    printf("\n\tZadanie 3 \nNapisz program, ktory obliczy liczbe cyfr w podanej przez uzytkownika liczbie naturalnej (typ unsigned long long). Wykorzystaj petle do...while. Zanim napiszesz kod programu w jezyku C zaprojektuj program za pomoca schematu blokowego.\n"); 

    unsigned long long number;

    printf("Podaj liczbe naturalna: ");
    scanf("%llu", &number);

    int count = 0;

    do {
        number /= 10;
        count++;
    } while(number != 0);

    printf("Liczba cyfr: %d\n", count);
}

void zadanie_4() { 
    printf("\n\tZadanie 4 \nNapisz program, ktory zliczy ile jedynek wystepuje w reprezentacji binarnej (typ unsigned long long) danej liczby naturalnej.\n"); 

    unsigned long long number;

    printf("Podaj liczbe naturalna: ");
    scanf("%llu", &number);

    int count = 0;

    while(number != 0) {
        if(number % 2 == 1) {
            count++;
        }
        number /= 2;
    }

    printf("Liczba jedynek: %d\n", count);
}

void zadanie_5() { 
    printf("\n\tZadanie 5 \nKorzystajac z petli while wypisz:\n");
    
    int n; // jeden n dla wszystkie zadania

    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);
    
    printf("\na) n kolejnych liczb naturalnych poczawszy od 1 (dla n > 1 podanego przez uzytkownika);\n\t");
    int i = 1;
    while(i <= n){
        printf("%d ", i);
        i++;
    }

    printf("\nb) Kolejne liczby naturalne od n do 1 (dla n > 1 podanego przez użytkownika);\n\t");
    i = n;
    while(i >= 1){
        printf("%d ", i);
        i--;
    }

    printf("\nc) wszystkie liczby naturalne parzyste i mniejsze od n (dla n > 1 podanego przez uzytkownika);\n\t");
    i = 1;
    while(i<n){
        if(i%2 == 0){
            printf("%d ", i);
        }
        i++;
    }

    printf("\nd) n kolejnych liczb nieparzystych poczawszy od n (dla n > 1 podanego przez uzytkownika);\n\t");
    i = 1;
    int j = n;
    
    if(j%2 == 0){
        j++;
    }

    while(i<=n){
        if(j%2 != 0){
            printf("%d ", j);
        }
        i++;
        j += 2;
    }

    printf("\ne) n kolejnych wyrazow ciagu arytmetycznego: 1, 4, 7, 10, 13, ... (dla n > 1 podanego przez uzytkownika);\n\t");
    i = 1;
    j = 1;
    while(i<=n){
        printf("%d ", j);
        i++;
        j += 3;
    }

    printf("\nf) 12 kolejnych silni liczb naturalnych tj. 12 poczatkowych wyrazow ciagu: 1, 1 * 2, 1 * 2 * 3, 1 * 2 * 3 * 4, ... ;\n\t");
    i = 1;
    j = 1;

    while(i<=12){
        printf("%d ", j);
        i++;
        j *= i;
    }

    printf("\ng) n kolejnych wyrazow ciagu: a_n = 1/n (dla n > 1 podanego przez uzytkownika);\n\t");
    i = 1;
    j = 1;
    while(i<=n){
        printf("%f ", 1.0/i);
        i++;
    }
    printf("\n");
    while(j<=n){
        printf("1/%d ", j);
        j++;
    }

    printf("\nh) 17 kolejnych wyrazow ciagu zdefiniowanego rekurencyjnie: a_1 = 3, a_n = 3(a_n - 1) - 4(3a_(n-1) - 4);\n\t");
    i = 1;
    double k = 3; //jak użyłem float to ostatnia liczba wyszła 4795886206976 co jest nie poprwana
    while(i<=17){
        printf("%.1f ", k);
        k = (-12.0 * k + 13.0)/-2.0;
        i++;
    }
    
    printf("\ni) 31 kolejnych wyrazow ciagu danego rekurencyjnie (pierwszym wyrazem jest a_0): a0 = 0, a_n = 2a_(n-1) + 1 (dla n > 1); Czy Twoj program potrafi poprawnie wyswietlic 32 wyraz tego ciagu? Jezli nie, to dlaczego jak mozna to naprawic?\n");
    i = 1;
    long long l = 0;
    while(i<=61){
        if(i == 31){printf("Tu mozemy sie zatrzymac ale pojde dalej z ciekawosci ->");}
        printf("%d : %lld\n", i, l);
        l = 2*l + 1;
        i++;
    }
    printf("\n\nProgram nie jest w stanie poprawnie wyswietlic 32 wyrazu ciagu, poniewaz przekracza on zakres zmiennej long long. Aby to naprawic nalezy zmienic typ zmiennej na np. unsigned long long, ktory ma zakres od 0 do 18446744073709551615.\n");


    printf("\n\nj) sume n kolejnych liczb naturalnych tj. sume 1+2+3+...+n (dla n > 1 podanego przez uzytkownika);");
    i = 1;
    int sum = 0;
    while(i<=n){
        sum += i;
        i++;
    }
    printf("\nSuma: %d\n", sum);

    printf("k) sume n kolejnych kwadratow liczb naturalnych tj. sume 1^2 + 2^2 + 3^2 + ... + n^2 (dla n > 1 podanego przez uzytkownika);\n");
    i = 1;
    sum = 0;
    while(i<=n){
        sum += i*i;
        i++;
    }

    printf("l) ile jest liczb parzystych i nieparzystych w podanym przez uzytkownika ciagu n liczb naturalnych (dla n > 1 podanego przez uzytkownika);\n");
    i = 1;
    int even = 0;
    int odd = 0;
    while(i<=n){
        if(i%2 == 0){
            even++;
        }else{
            odd++;
        }
        i++;
    }
    printf("Liczba parzystych: %d\nLiczba nieparzystych: %d\n", even, odd);

    printf("m) ile jest liczb ujemnych i dodatnich w podanym przez uzytkownika ciagu n liczb calkowitych (dla n > 1 podanego przez uzytkownika);\n");
    i = 1;
    j = 1;
    int positive = 0;
    int negative = 0;
    while(i<=n){ 
        if(j > 0){
            positive++;
        }else{
            negative++;
        }
        j = j * (-2); //bede stosowal ciag arytmetyczny o roznicy -2 zeby uzyskac liczby ujemne
        i++;
    }
    printf("Liczba dodatnich: %d\nLiczba ujemnych: %d\n", positive, negative);
}

void zadanie_6() { 
    printf("\n\tZadanie 6 \nNapisz program szukajacy najwiekszej liczby w szeregu wprowadzonym przez uzytkownika na wejsciu. Program powinien pytac uzytkownika o kolejne liczby. Kiedy uzytkownik wprowadzi 0 albo liczbe ujemna, program powinien wyswietlic najwieksza dotychczas wprowadzona liczbe nieujemna. Zauwaz, ze liczby nie musza byc calkowite.\n");

    double number, max = 0;

    while(1) {
        printf("Podaj liczbe: ");
        scanf("%lf", &number);

        if(number <= 0) {
            break;
        }

        if(number > max) {
            max = number;
        }
    } 
    printf("Najwieksza liczba: %lf\n", max);
}

void zadanie_7() { 
    printf("\n\tZadanie 7 \nNapisz program pytajacy uzytkownika o dwie dodatnie liczby calkowite i obliczajacy najwiekszy wspolny dzielnik (NWD) tych liczb. \nWskazowka: Klasyczny algorytm NWD (tzw. algorytm Euklidesa) wyglada tak: Niech m i n beda zmiennymi oznaczajacymi dwie liczby calkowite. Jezeli n jest zerem - koniec algorytmu, m jest NWD. W innym przypadku oblicz reszte z dzielenia m przez n. Skopiuj n do m, a reszte z dzielenia do n. Powtarzaj dopoki n nie jest zerem. Zanim napiszesz kod programu w jezyku C zaprojektuj program za pomoca schematu blokowego.\n"); 

    int liczba_1, liczba_2, nwd, iteration = 2, max;

    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &liczba_1, &liczba_2);

    if((liczba_1 * liczba_2 == 0)){
        printf("Nie ma wspolnego dzielnika\n");
        return;
    }
    else if((liczba_1 > liczba_2) &&(liczba_1 % liczba_2 == 0)){
        nwd = liczba_2;
    }
    else if ((liczba_1 < liczba_2) && (liczba_2 % liczba_1 == 0))
    {
        nwd = liczba_1;
    }
    else{
        if(liczba_1 > liczba_2){
            max = liczba_1/2;
        }
        else{
            max = liczba_2/2;
        }
        while(iteration <= max){
            if((liczba_1 % iteration == 0) && (liczba_2 % iteration == 0)){
                nwd = iteration;
            }
            iteration++;
        }
    }
    printf("Najwiekszy wspolny dzielnik: %d\n", nwd);
    return; //zrobiłem po swojemu 
}

void zadanie_8() { 
    printf("\n\tZadanie 8 \nAgata wplaca na lokate 1000 zl z oprocentowaniem wynoszacym 10%% w skali roku (kazdego roku lokata daje zysk w wysokosci 10%% jej poczatkowej wartosci - procent prosty). Franek wplaca rowniez 1000 zl, ale na lokate z kapitalizacja odsetek i oprocentowaniem rownym 6%% w skali roku (6%% od biezacej wartosci, zawierajacej w sobie doliczone odsetki z poprzedniego roku - procent skladany). Napisz program, ktory obliczy po ilu latach wartosc inwestycji Franek przekroczy wartosc inwestycji Agaty, oraz wyswietli obie wartosci w tym momencie. Wykorzystaj petle do...while.\n"); 

    double agata = 1000, franek = 1000;
    int years = 0;
    const double agata_bazowe = 1000;

    do{
        agata += agata_bazowe * 0.1;
        franek += franek * 0.06;
        years++;
    }
    while(agata > franek);

    printf("\nPo %d latach wartosc inwestycji Franka przekroczy wartosc inwestycji Agaty.\n", years);
    printf("Wartosc inwestycji Agaty: %.2lf\n", agata);
    printf("Wartosc inwestycji Franka: %.2lf\n", franek);   
}

void zadanie_9() { 
    printf("\n\tZadanie 9 \nNapisz program ktory pobiera liczbe calkowita (> 2), po czym wyswietla wszystkie liczby pierwsze mniejsze badz rowne tej liczbie.\n"); 

    int number, i, j;

    printf("Podal liczbe calkowita (> 2): ");
    scanf("%d", &number);

    for(i = 2; i <= number; i++) {
        for(j = 2; j <= i; j++) {
            if(i % j == 0) {
                break;
            }
        }
        if(i == j) {
            printf("%d\n", i);
        }
    }
}

void zadanie_10() { 
    printf("\n\tZadanie 10 \nNapisz program, ktory 'zgaduje' liczbe pomyslana przez uzytkownika. Zakladamy, ze liczba jest z przedzialu od 1 do 100. Program powinien stosowac strategie zgadywania zwana przeszukiwaniem dwudzielnym. Polega ona na tym, ze na poczatek program pyta uzytkownika czy jego pomyslana liczba jest rowna, wieksza czy mniejsza od 50. Jezeli szukana liczba jest mniejsza od 50 to nastepna proba powinno byc 25, ktore znajduje sie w polowie drogi miedzy 1 a 50. Jesli 25 jest zbyt male to kolejna proba powinna byc liczba spomiedzy 25 a 50, i tak dalej. Przyjmij, ze uzytkownik nie oszukuje.\n");

    int guess = 50, UserInput, min = 1, max = 100, tries = 0, cheatCounter = 0, tmp;

    while(guess != UserInput){
        tmp = guess;
        ++tries;
        printf("Czy twoja liczba to %d? (1 - tak, 2 - za duza, 3 - za mala): ", guess);
        scanf("%d", &UserInput);

        if(UserInput == 1){
            printf("Zgadlem twoja liczbe w %d probach!\n", tries);
            break;
        }
        else if(UserInput == 2){
            max = guess;
            guess = (min + max) / 2;
        }
        else if(UserInput == 3){
            min = guess;
            guess = (min + max) / 2;
        }

        if(tmp == guess){
            cheatCounter++;
            if(cheatCounter == 3){
                printf("Oszukujesz! Koniec gry!\n");
                break;
            }
        }
    }
}

void zadanie_11() { 
    printf("Zadanie 11 Wykorzystujac petle zagniezdzone napisz program wyswietlajacy podane wzory, gdzie liczba wyswietlanych wierszy jest okreslana przez uzytkownika:\n"); 

    int n;

    printf("Podaj liczbe wierszy: ");
    scanf("%d", &n);

    printf("a) n = %d\n", n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    int m; 

    printf("Podaj liczbe wierszy: ");
    scanf("%d", &m);

    printf("b) m = %d\n", n);
    
    for(int i = 1; i <= m; i++){
        for(int j = m; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
    
    int o;

    printf("Podaj liczbe wierszy: ");
    scanf("%d", &o);

    printf("c) o = %d\n", o);

    for(int i = 0; i < o; i++){
        for(int j = i; j <= (o+1)/2; j++){
            printf(" ");
        }
        for(int k = 1; k <= 2*i+1; k++){
            printf("*");
        }
        printf("\n");
    }
}

void zadanie_12() { 
    printf("\n\tZadanie 1 Dodatkowe \nNapisz program ktory sluzy do obliczania sredniej ocen studentow. Uzytkownik powinien podac liczbe studentow (n) a nastepnie powinien wpisywac oceny kolejnych studentow. Uzytkownik powinien miec mozliwosc obliczenia sredniej dla mniejszej liczby studentow niz n np. gdy uzytkownik poda ocene ujemna. Zastosuj instrukcje break.\n");

    int n, i = 0, pos = 0, neg = 0;
    float grade, sum = .0f, avg;

    printf("Podaj liczbe studentow: \n");
    scanf("%d", &n);

    float oceny[n];

    while(i < n){
        printf("Podaj ocene studenta nr %d:\n", i+1);
        scanf(" %f", &grade);
        // if(grade < 0){ //dla mnie torchę nie logiczne, po co wychodzić z pętli po wpisaniu ujemnej oceny, ale tak jest napisane w zadaniu   
        //     break; 
        // }
        oceny[i] = grade;
        ++i;
    }

    for(int j = 0; j < n; j++){
        if(oceny[j] < 0){
            neg++;
            continue; //uważam że logiczniej jest pominąć ocenę ujemną i dodawać tylko oceny dodatnie a nie kończyć pętlę wczęsniej bo może być ocena dodatno po tej ujemnej ocenie i bezsensu nie dodać jej do średniej
        }
        sum += oceny[j];
        pos++;
    }

    avg = sum / pos;

    printf("Srednia ocen studentow wynosi %.2f z %d ocen pozytywnych\n", avg, pos);
}

void zadanie_13() { 
    printf("\n\tZadanie 2 Dodatkowe \nNapisz program, ktory dla pieciu malych liter podanych przez uzytkownika wyswietli ich duze odpowiedniki. Program powinien ignorowac znaki nie bedace malymi literami - uzyj instrukcji continue.\n"); 

    char letter[5];
    printf("Podaj 5 malych liter:\n");
    scanf(" %c%c%c%c%c", &letter[0], &letter[1], &letter[2], &letter[3], &letter[4]);

    for(int i = 0; i < 5; i++){
        if(letter[i] < 'a' || letter[i] > 'z'){ //sprawdzam czy litera nie jest mała
            continue;
        }
        if(letter[i] >= 'a' && letter[i] <= 'z'){
            letter[i] -= 32;
        }
    }
    letter[5] = '\0'; //dodaje znak końca stringa
    printf("Duze odpowiedniki:\n%s\n", letter);    
}

void zadanie_14() { 
    printf("\n\tZadanie 3 Dodatkowe\nPrzypuscmy, ze chcemy obliczyc srednie zarobki pracownikow w danej firmie dla tych, ktorzy rocznie zarabiaja wiecej niz 45000 zl, ale dysponujemy tylko ich miesiecznymi zarobkami brutto. Napisz program, ktory pyta o miesieczna pensje kazdego pracownika, czyni z niej pensje roczna (mnozac przez 12) i oblicza srednia. Jezeli uzytkownik wprowadzi wartosc ujemna jako pensje miesieczna, program powinien konczyc swoje dzialanie i drukowac wartosc srednia. Zastosuj petle nieskonczona i instrukcje break oraz continue.\n"); 

    float salary, sum = 0, avg;
    int i = 0;

    while(1){
        printf("Podaj pensje miesieczna:\n");
        scanf(" %f", &salary);

        if(salary < 0){
            break;
        }
        else if(salary * 12 <= 45000){
            continue;
        }
        sum += salary * 12;
        i++;
    }
    avg = sum / i;
    printf("Srednia zarobkow pracownikow wynosi %.2f zl\n", avg);
}

void zadanie_15() { 
    printf("\n\tZadanie 4 Dodatkowe\nNapisz program, ktory oblicza sume 1, 2, 3, 4 itd. (az do pewnej granicy) wyrazow nastepujacych ciagow: \n\n\t1 +1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... \n\n\t2 -1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... \n\nMaksymalna liczba wyrazow sumowania powinna byc okreslana przez uzytkownika. Przyjrzyj sie sumom dla 10, 100 i 1000 wyrazow. Czy ktorys z ciagow wydaje sie zbiegać do jakiejś granicy. \nWskazowka: -1 pomnozone przez siebie nieparzysta ilosc razy jest rowne -1, natomiast parzysta ilosc razy +1.\n");

    int n;
    float sum1 = 0, sum2 = 0;

    printf("Podaj liczbe wyrazow sumowania: ");
    scanf(" %d", &n);

    for(int i = 2; i <= n; i++){
        sum1 += 1.0 / i;
        if(i%2 == 0){
            sum2 -= 1.0 / (float)i;
        }
        else{
            sum2 += 1.0 / (float)i;
        }
    } 
    printf("Suma pierwszego ciagu: %f\n", sum1);
    printf("Suma drugiego ciagu: %f\n", sum2);
}


void zadanie_16() { 
    printf("\n\tZadanie 5 Dodatkowe \nNapisz program, ktory wypisze liczby doskonale z zadanego przedzialu. Liczba doskonala to liczba, ktora jest rowna sumie swoich wszystkich swych dzielnikow wlasciwych (to znaczy mniejszych od niej). Przykladowo liczbami doskonalymi sa liczby 6 i 28 bo: 6 = 1 + 2 + 3 oraz 28 = 1 + 2 + 4 + 7 + 14.\n");

    int min, dzielniki[50]; //użyje stałą wartość zakładam że liczba nie będzie na tyle duża żeby miała tak wiele dzielników
    long long max, x, suma;

    void zerowanie_Tablicy(int dzielniki[]){ //funkcja zerowania wartości
        for(int i = 0; i < 50; i++){
            dzielniki[i] = 0;
        }
    }

    printf("Prosze podac przedzial liczb w postaci a b:\n");
    scanf("%d %lld", &min, &max);

    for(long long i = min; i <= max; i++){
        if(i % 2 == 1){ //nie ma liczby nieparzystej która mogłaby być liczbą doskonałą
            continue;
        }
        // if(i % 10000 == 0){
        //     printf("Jestesmy aktualnie przy liczbie %lld\n", i); //byłem ciekawy ile czasu zajmie dojście do liczby 33,550,336, generalnie dużo czasu mi to zajmie
        // }
        else{
            zerowanie_Tablicy(dzielniki);
            x = 0;
            for(long long j = 1; j <= i/2; j++){
                if(i % j == 0){
                    dzielniki[x++] = j;
                }
            }
            x = 0;
            suma = 0;
            while(dzielniki[x]){
                suma += dzielniki[x++];
            }
            if(suma == i){
                printf("Liczba %d jest liczba doskonala\n", i);
            }
            else{
                continue;
            }
        }
    }
}

void zadanie_17() { 
    printf("\n\tZadanie 6 Dodatkowe \nNapisz program, ktory odczytuje dane wejsciowe ze standardowego wejscia az do wystapienia znaku #, zastepujac kazda kropke wykrzyknikiem a kazdy wykrzyknik - dwoma wykrzyknikami, oraz wyswietla liczbe zmian jaka wykonal. Napisz program uzywajac \n\n\ta) instrukcji if ... else, \n\n\tb) instrukcji switch.\n\n"); 

    char text[256];
    char alt_text[512];
    int i = 0, j = 0;
    int changes = 0;

    getchar();

    printf("Prosze podac jakis tekst:\n");
    fgets(text, sizeof(text), stdin);

    while(text[i] != '#' && text[i] != '\0'){
        if(text[i] == '.' || text[i] == '!'){
            switch (text[i]) {
                case '.':
                    alt_text[j] = '!';
                    changes++;
                    break;
                case '!':
                    alt_text[j] = '!';
                    j++;
                    alt_text[j] = '!';
                    changes++;
                    break;
            }
        } else {
            alt_text[j] = text[i];
        }
        j++;
        i++;
    }
    alt_text[++j] = '\0'; // Null-terminate the alt_text string

    printf("Zmodyfikowany tekst: %s\n", alt_text);
    printf("Liczba zmian: %d\n", changes);
}

void zadanie_18() { 
    printf("\n\tZadanie 7 Dodatkowe \nNapisz program, ktory pobiera od uzytkownika liczbe calkowita i podaje polskie nazwy poszczegolnych cyfr. Przykladowo dla liczby 734 program powinien wyswietlic napis: \n\n\tsiedem trzy cztery \n\nPamietaj o wyswietleniu napisu zero gdy uzytkownik wpisze liczbe 0. Wykorzystaj instrukcje switch.\n");

    char liczba[256];
    int i = 0;
    getchar();

    printf("Prosze podac jakas liczbe calkowita:\n");
    fgets(liczba, sizeof(liczba), stdin);

    while(liczba[i]){
        switch (liczba[i])
        {
        case '0':
            printf("Zero ");
            break;
        case '1':
            printf("Jeden ");
            break;
        case '2':
            printf("Dwa ");
            break;
        case '3':
            printf("Trzy ");
            break;
        case '4':
            printf("Cztery ");
            break;
        case '5':
            printf("Piec ");
            break;
        case '6':
            printf("Szesc ");
            break;
        case '7':
            printf("Siedem ");
            break;
        case '8':
            printf("Osiem ");
            break;
        case '9':
            printf("Dziewiec ");
            break;
        default:
            break;
        }
        i++;
    }
    printf("\n");
    return;
}

void zadanie_19() { 
    printf("\n\n\tZadanie 8 Dodatkowe\nNapisz program obliczajacy sume n skladnikow: 1 + 22 + 333 + 4444 + ... (dla n > 1 podanego przez uzytkownika).\n");

    int userInput, suma = 0, mnoznik;

    printf("Prosze podac wartosc n:\n");
    scanf("%d", &userInput);

    for(int i = 0; i <= userInput; i++){
        mnoznik = 1;
        for(int j = 1; j <= i; j++){
            suma += i * mnoznik;
            mnoznik *= 10;
        }
    }
    printf("Suma wynosi:%d\n", suma);
}

void zadanie_20() { 
    printf("\n\n\tZadanie 9 Dodatkowe \nWykorzystujac petle zagniezdzone napisz programy wyswietlajace podane wzory, gdzie liczba wyswietlanych wierszy jest okreslana przez uzytkownika: \na)\t1 E \n\t2 ED \n\t3 EDC \n\t4 EDCB \n\t5 EDCBA \n\nb)\t1 A \n\t2 BC \n\t3 DEF \n\t4 GHIJ \n\t5 KLMNO \n\nc)\t1     A \n\t2    ABA \n\t3   ABCBA \n\t4  ABCDCBA \n\t5 ABCDEDCBA\n");

    int UserInput;
    char litera_a;

    printf("Prosze podac ile wieszy trzeba wysietlic:\n");
    scanf("%d", &UserInput);
    printf("\n##########################################################\n");

    //zadanie A
    for(int i = 1; i <= UserInput; i++){ 
        litera_a = 'E';
        for(int j = 1; j <= i; j++){
            printf("%c", litera_a--);
        }
        printf("\n");
    }
    
    printf("\n##########################################################\n");
    //zadanie B
    char litera_b = 'A'; 

    for(int i = 1; i <= UserInput; i++){ 
        for(int j = 1; j <= i; j++){
            printf("%c", litera_b++);
        }
        printf("\n");
    }

    printf("\n##########################################################\n");
    //zadanie C
    char litera_c;

    for(int i = 1; i <= UserInput; i++){
        litera_c = 'A';
        for(int j = 1; j <= UserInput - i; j++){
            printf(" ");
        }
        for(int k = 1; k <= (i * 2)-1; k++){
            if(k < i){
                printf("%c", litera_c++);
            }
            else{
                printf("%c", litera_c--);
            }
        }
        printf("\n");
    }

}

int main() {
    int choice;
    int count = 0;

    while (count < 100) {

        printf("\n#####################################################################################################\n");
        printf("Prosze wybrac numer zadania do wykonania (1-11 Zadanie Podstawowe 12-20 Zadania Dodatkowe) lub 0 aby zakonczyc program.\n");
        scanf("%d", &choice);
        printf("#####################################################################################################\n");

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
                printf("Nie poprawny wybor, prosze wybrac liczbe w zakresie 1-20\n");
        }
        count++;
    }

    return 0;
}
