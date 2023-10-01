﻿// Task-3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



class Calculator {

private:
    double num1;
    double num2;

public:

    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double substract_1_2() {
        return num1 - num2;
    }

    double substract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num1(double num1) {
        if (num1 == 0) {
            return false;
        }
        else {
            this->num1 = num1;
            return true;
        }
    }

    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            this->num2 = num2;
            return true;
        }
    }



};

void print_user_calc(Calculator user_calc, int num1, int num2) {

    std::cout << "num1 + num2 = " << user_calc.add() << '\n';

    std::cout << "num1 - num2 = " << user_calc.substract_1_2() << '\n';

    std::cout << "num2 - num1 = " << user_calc.substract_2_1() << '\n';

    std::cout << "num1 * num2 = " << user_calc.multiply() << '\n';

    std::cout << "num1 / num2 = " << user_calc.divide_1_2() << '\n';

    std::cout << "num2 / num1 = " << user_calc.divide_2_1() << '\n';
}



int main(int argc, char** argv) {

    setlocale(LC_ALL, "Russian");

    Calculator user_calc;

    int num1, num2;

    while (true) {

        std::cout << "Введите num1: ";
        std::cin >> num1;
        user_calc.set_num1(num1);

        std::cout << '\n';

        while (user_calc.set_num1(num1) == false) {

            std::cout << "Неверный ввод!" << '\n';

            std::cout << "Введите num1: ";
            std::cin >> num1;
            user_calc.set_num1(num1);
            std::cout << '\n';

        }

        std::cout << "Введите num2: ";
        std::cin >> num2;
        user_calc.set_num2(num2);
        std::cout << '\n';

        while (user_calc.set_num2(num2) == false) {

            std::cout << "Неверный ввод!" << '\n';

            std::cout << "Введите num2: ";
            std::cin >> num2;
            user_calc.set_num2(num2);
            std::cout << '\n';

        }

        print_user_calc(user_calc, num1, num2);


    }





    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
