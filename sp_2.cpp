#include <iostream>
#include <cmath>
#include <cstring>

struct WeatherData {
    double temperature;
    double humidity;
    double windSpeed;
};

class Graph {
public:
    Graph() {
        int a;
        std::cout << "Сколько вершин будет изначально:";
        std::cin >> a;
        if (a >= 10) {
            std::cout << "Был превышен лимит, поэтому заменим на 5.\n";
            a = 5;
        }
        for (int i = 0; i < a; i++) {
            countver++;
            ver[i] = countver; 
            std::cout << ver[i] << " "; 
        }
        std::cout << std::endl;
    }

    ~Graph() {
      
    }


    void add() {
        int st;
        int ed;
        std::cout << "Выберите стартовую вершину:";
        std::cin >> st;
        std::cout << "Выберите конечную вершину:";
        std::cin >> ed;
      
        bool pr1 = false;
        bool pr2 = false;
        for (int i = 0; i < countver; ++i) {
            if (ver[i] == st) pr1 = true;
            if (ver[i] == ed) pr2 = true;
        }
        if (pr1 && pr2) {
            rbst[ec] = st;
            rbed[ec] = ed;
            ec++;
        }
    }

    void delreb() {
        int st;
        int ed;
        std::cout << "Выберите стартовую вершину:";
        std::cin >> st;
        std::cout << "Выберите конечную вершину:";
        std::cin >> ed;

        for (int i = 0; i < ec; ++i) {
            if (rbst[i] == st && rbed[i] == ed) {
                rbst[i] = rbst[ec - 1]; 
                rbed[i] = rbed[ec - 1];
                ec--; 
                break;
            }
        }
    }


    void print() {
        std::cout << "Вершины: ";
        for (int i = 0; i < countver; ++i) {
            std::cout << ver[i] << " ";
        }
        std::cout << "\nРебра: ";
        for (int i = 0; i < ec; ++i) {
            std::cout << "(" << rbst[i] << ", " << rbed[i] << ") ";
        }
        std::cout << "\n";
    }



    void dob() {
        if (countver < 10) {
            ver[countver] = countver+ 1;
            countver++;
            
        }
    }

    void del() {
       
        countver--;
        ver[countver] = NULL;
        
    }

private:
    int ver[10]; 
    int rbst[100]; 
    int rbed[100]; 
    int countver = 0; 
    int ec = 0; 
};

 

 


#pragma warning(disable : 4996)
int main()
{
    //Создайте новый массив, содержащий только четные элементы из исходного массива.
     setlocale(LC_ALL, "Russian");
     setlocale(LC_ALL, "Russian");

    // int array[10];
    // int array2[10];
    // srand(time(NULL));
    // for (int i = 0; i < 10; i++) {
    //     array[i] = rand() % 100;
    //     std::cout << array[i] <<"\n";
    //     if (array[i] % 2 == 0) array2[i] = array[i];
    //     else array2[i] = 1;
    // }
    //  std::cout << "Все четные элементы";
    //  for (int i = 0; i < 10; i++) {
    //      if(array2[i]!=1)
    //      std::cout << array2[i]<<"\n";

    //  }

    //Создайте новый многомерный массив, содержащий только уникальные строки из исходного массива.

   /* char array[3][20] = { {"Привет"},
                        {"пока"},
                        {"Привет"} };
    char array2[3][20];
    int count = 0;
    for (int i = 0; i < 3; i++) {
        bool prov = true;
        for (int j = 0; j < count; j++) {

            if (strcmp(array[i],array2[j]) == 0) {
                prov = false;
                break;
            }
        }
        if (prov) {
            strcpy(array2[count], array[i]);
            count++;
        }

    }
    for (int i = 0; i < 3; i++) {

        std::cout << array2[i];

    }*/

    //Создайте структуру "WeatherData" с полями "temperature" (вещественное число), "humidity" (вещественное число) и "windSpeed" (вещественное число). Напишите программу на C++, которая визуализирует данные о погоде.

    /*WeatherData today;
    today = { 20.3,43.13,150.2 };
    std::cout << today.temperature<<"\n";
    std::cout << today.humidity << "\n";
    std::cout << today.windSpeed << "\n";*/

    //Создайте класс "Graph" с приватными полями "vertices" (массив вершин) и "edges" (массив ребер) и публичными методами для добавления и удаления ребер в графе.
    Graph g;
    g.dob();
    g.del();
    g.add();
    g.print();
    g.add();
    g.print();
    g.delreb();
    g.print();
}


