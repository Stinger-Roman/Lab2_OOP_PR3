// OOP_LAB2_PR3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "Fackultet.h"

#include "Student.h"

int main()
{
    int *dat_mas = new int[3]{ 1, 2, 3 }; // заглушка
         
    Fackultet PCTS = Fackultet("PCTS");

    PCTS.Specialnist_Add("KISP");

    PCTS.Specialnist_Get("KISP")->Predmet_Add("OOP");

    PCTS.Specialnist_Get("KISP")->Predmet_Add("SDA");

    PCTS.Specialnist_Get("KISP")->Predmet_Add("CL");

    Vikladach* Lisenko = new Vikladach("Sergiy", "Lisenko", "Mikolayovich", &dat_mas, "horoshiy vopros");

    Vikladach* Bobrovnikova = new Vikladach("Kira", "Bobrovnikova", "Yuilevna", &dat_mas, "horoshiy vopros");

    Vikladach* Govoruschhenko = new Vikladach("Tatiana", "Govoruschhenko", "Oleksandrivna", &dat_mas, "horoshiy vopros");

    Student* Nikolaiev = new Student("Nikolaiev", "Roman", "Oleksandrovich", &dat_mas, "Stelmaha 19");

    Student* Shavrov = new Student("Shavrov", "Ivan", "Sergiyovich", &dat_mas, "horoshiy vopros");

    Student* Bagriy = new Student("Bagriy", "Konstantin", "Oleksandrovich", &dat_mas, "horoshiy vopros");


    Nikolaiev->zalikovka->zapis_add(Lisenko, PCTS.Specialnist_Get("KISP")->Predmet_Get("OOP"));

    Nikolaiev->zalikovka->zapis_add(Bobrovnikova, PCTS.Specialnist_Get("KISP")->Predmet_Get("SDA"));

    Nikolaiev->zalikovka->zapis_add(Govoruschhenko, PCTS.Specialnist_Get("KISP")->Predmet_Get("CL"));


    Shavrov->zalikovka->zapis_add(Lisenko, PCTS.Specialnist_Get("KISP")->Predmet_Get("OOP"));

    Shavrov->zalikovka->zapis_add(Bobrovnikova, PCTS.Specialnist_Get("KISP")->Predmet_Get("SDA"));

    Shavrov->zalikovka->zapis_add(Govoruschhenko, PCTS.Specialnist_Get("KISP")->Predmet_Get("CL"));


    Bagriy->zalikovka->zapis_add(Lisenko, PCTS.Specialnist_Get("KISP")->Predmet_Get("OOP"));

    Bagriy->zalikovka->zapis_add(Bobrovnikova, PCTS.Specialnist_Get("KISP")->Predmet_Get("SDA"));

    Bagriy->zalikovka->zapis_add(Govoruschhenko, PCTS.Specialnist_Get("KISP")->Predmet_Get("CL"));


    
    cout << Nikolaiev->zalikovka->zapis_read(0)<<endl;
    cout << Nikolaiev->zalikovka->zapis_read(1) << endl;
    cout << Nikolaiev->zalikovka->zapis_read(2) << endl;

    cout << endl;

    cout << Shavrov->zalikovka->zapis_read(0) << endl;
    cout << Shavrov->zalikovka->zapis_read(1) << endl;
    cout << Shavrov->zalikovka->zapis_read(2) << endl;

    cout << endl;

    cout << Bagriy->zalikovka->zapis_read(0) << endl;
    cout << Bagriy->zalikovka->zapis_read(1) << endl;
    cout << Bagriy->zalikovka->zapis_read(2) << endl;

    cout << endl;

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
