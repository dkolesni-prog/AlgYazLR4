#include <iostream>

#include <vector>

#include<cstdlib>


void bubblesort(std::vector<int>& vect){
    bool isSorted = 0;
    while(isSorted != 1) {
        isSorted = 1;
        for(unsigned int i = 0; i < vect.size(); i++) {
            if (vect[i] > vect[i + 1]) {
                std::cout << i << " = " << vect[i] << ", " << i << "= " << vect[i+1] << std::endl;
                int temp = vect[i];
                vect[i] = vect[i + 1];
                vect[i + 1] = temp;
                isSorted = 0;
            }
        }

    }
    return ;
}



        int main() {
    std::srand(std::time(nullptr));
    int size; //Размер Вектора
    std::cout << "Задача 1" << std::endl;
    std::cout << "Set size" << std::endl;
    std::cin >> size;
    std::vector<int> vec0; //Вектор
    std::vector < int > vec1(size); // Задача 1
    std::vector < int > vec2(size); // Задача 2
    std::vector < int > vec3(size); // Задача 3
    int n; //Элемент вектора
    std::cout << "Size is " << size << std::endl;
    std::cout << "Initialize vector" << std::endl;

    for (int i = 0; i < size; i++) {
        vec0.push_back(std::rand() % 201 - 100);
    }
    for (int i = 0; i < static_cast<int>(vec0.size()); i++) {

        std::cout << " " << vec0[i] << " ";
    }
    bubblesort(vec0);
    for (int i = 0; i < static_cast<int>(vec0.size()); i++) {
        std::cout << " " << vec0[i] << " ";
    }

    return 0;
}