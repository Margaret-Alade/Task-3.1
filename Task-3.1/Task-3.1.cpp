// Task-3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



class Calculator {
public:
    double num1;
    double num2;

    double add(double num1, double num2) {
        return num1 + num2;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    double substract_1_2(double num1, double num2) {
        return num1 - num2;
    }

    double substract_2_1(double num1, double num22) {
        return num2 - num1;
    }

    double divide_1_2(double num1, double num2) {
        return num1 / num2;
    }

    double divide_2_1(double num1, double num2) {
        return num2 / num1;
    }

    bool set_num1(double num1) {
        if (num1 == 0) {
            return false;
        }
        else {
            return true;
        }
    }

    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            return true;
        }
    }



};

void print_user_calc(Calculator& user_calc) {

    if (user_calc.set_num1(user_calc.num1) == true && user_calc.set_num2(user_calc.num2) == true) {

        std::cout << "num1 + num2 = " << user_calc.add(user_calc.num1, user_calc.num2) << '\n';

        std::cout << "num1 - num2 = " << user_calc.substract_1_2(user_calc.num1, user_calc.num2) << '\n';

        std::cout << "num2 - num1 = " << user_calc.substract_2_1(user_calc.num1, user_calc.num2) << '\n';

        std::cout << "num1 * num2 = " << user_calc.multiply(user_calc.num1, user_calc.num2) << '\n';

        std::cout << "num1 / num2 = " << user_calc.divide_1_2(user_calc.num1, user_calc.num2) << '\n';

        std::cout << "num2 / num1 = " << user_calc.divide_2_1(user_calc.num1, user_calc.num2) << '\n';
    }

}



int main(int argc, char** argv) {

    setlocale(LC_ALL, "Russian");

    Calculator user_calc;

    while (true) {

        std::cout << "Введите num1: ";
        std::cin >> user_calc.num1;
        std::cout << '\n';

        std::cout << "Введите num2: ";
        std::cin >> user_calc.num2;
        std::cout << '\n';

        while (user_calc.set_num1(user_calc.num1) == false) {

            std::cout << "Неверный ввод!" << '\n';

            std::cout << "Введите num1: ";
            std::cin >> user_calc.num1;
            std::cout << '\n';

        }

        while (user_calc.set_num2(user_calc.num2) == false) {

            std::cout << "Неверный ввод!" << '\n';

            std::cout << "Введите num2: ";
            std::cin >> user_calc.num2;
            std::cout << '\n';

        }

        print_user_calc(user_calc);


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
