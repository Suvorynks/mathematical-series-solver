 #include <iostream>

#include <cmath>

 

using namespace std;

 

// Прототип функції для

обчислення факторіалу

long long factorial(int num);

 

int main()

{

    int N;

    double x, U1, U2, S;

 

    // Задаємо значення

дійсного аргументу x

    cout << "Enter real argument x = ";

    cin >> x;

 

    // Вводимо число

доданків і перевіряємо його коректність

    do {

        cout << "Enter N = ";

        cin >> N;

    } while (N <= 0);

 

    // Надаємо змінним

початкового значення

    S = 0;

    U1 = 1.0 / (factorial(0) * factorial(N +

0)) * pow(x / 2, 2 * 0 + N);

    S += U1;

 

    for (int i = 1; i <= 10;

i++) {

        //

Обчислюємо наступний доданок, використовуючи рекурентну формулу, і накопичуємо

суму

        U2 = U1 * (x / 2) * (2 * i + N - 2) /

((i) * (N + i));

        S += U2;

 

        //

Запам'ятовуємо попередній доданок і переходимо до обчислення наступного

        U1 = U2;

    }

 

    // Виводимо

результат на екран

    cout << "\nThe sum is equal " << S;

 

    return 0;

}

 

long long factorial(int num) {

    long long result = 1;

    for (int i = 2; i <= num; ++i) {

        result *= i;

    }

    return result;

}

