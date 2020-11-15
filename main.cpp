#include <algorithm>

#include <ctime>

#include <iostream>

#include <vector>

#include <cstdlib>

void printVector (std::vector <int>& vec ) {

    for (int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}
void fillVector (int size, std::vector <int>& vec){ // заполнение вектора случайными величинами
    srand ( time(NULL) );
    int b = 0;
    for (int i = 0; i < size; i++){
         b = rand() % 201 - 100;
        vec.push_back(b);
    }
    std::cout << "The initial vector is " <<std::endl;
    printVector(vec);
}

void insertionSSort(std::vector <int>& vec) {
for (int i = 0; i < vec.size(); i++){
    int j = i - 1;
    while( (j >= 0) && (vec[j] > vec[j + 1]) ){
        std::swap(vec[j], vec[j + 1]);
        j--;
    }
}
std::cout << "The INSORTED vector is" << std::endl;
printVector(vec);
}

void bubbleSort (std::vector <int>& vec){
    for (int j = 0; j <= vec.size() - 2; j++){
        for ( int i = 0; i <= vec.size() - j - 2; i++){
            if (vec[i] > vec[i + 1]){
                std::swap (vec[i], vec[i + 1]);
            }
        }
    }
    std::cout << "Bubble-sorted vector is " <<std::endl;
    printVector(vec);
}
/*void insertionSort(std::vector <int>& vec){
    int i= 1;
    int j = 1;
        while (vec[j] < vec[j - i]){
            for ( i = 1; i < vec.size(); i++) {
                std::swap(vec[i], vec[i - 1]);
                j++;
            }
        }



    std::cout << "INSORTED vector is " <<std::endl;
    printVector(vec);
}*/


void mergeSort (std::vector <int>& vec){
    if (!(vec.size() == 1)) {
        std::vector<int> left;
        std::vector<int> right;
        int temp = 0;
        for (int i = 0; i < (vec.size() / 2); i++) {
            temp = vec[i];
            left.push_back(temp);
        }
        for (int i = (vec.size() / 2); i < vec.size(); i++) {
            temp = vec[i];
            right.push_back(temp);
        }
        mergeSort(left);
        mergeSort(right);
        int L = 0;
        int R = 0;
        int V = 0;
        while(L<left.size() && R<right.size()){
            if (left[L] < right[R]){
                vec[V] = left[L];
                L++;
            } else {

                vec[V] = right[R];
                R++;
            }
            V++;
        }

        while(L<left.size()){
            vec[V] = left[L];
            L++;
            V++;
        }
        while(R<right.size()){
            vec[V] = right[R];
            R++;
            V++;
        }
    }


}


int main() {
    std::vector <int> vec1;
    fillVector (30, vec1);

    //bubbleSort(vec1);
    insertionSSort(vec1);
    //mergeSort(vec1);
    //std::cout << "Merge-sorted vector is " << std::endl;




    return 0;
}
