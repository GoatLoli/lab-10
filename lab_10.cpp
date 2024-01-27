// Продемонстрируйте работу push_back, erase, insert, clear.

//Для демонстрации можете считать, что вам дана последовательность целых чисел длины n(n < 10 ^ 4).


#include <iostream>
#include <vector>



int main()
{
    int n;

    std::cout << "kol-vo chisel: "; std::cin >> n;

    std::vector<int> vec(n); //пустой

    std::cout << "chisla v mas: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }
    
    vec.push_back(11);//добавление 11
    
    vec.erase(vec.begin() + 2);//удаляем 3ий элемент

    vec.insert(vec.begin() + 2, 10); //вставляем 10 перед 4ым элементом

    std::cout << "vector: ";
    for (int mas : vec)
    {
        std::cout << mas << " ";
    }
    std::cout << std::endl;

    vec.clear();

    std::cout << "vector clear: ";
    for (int mas : vec)
    {
        std::cout << mas << " ";
    }
     std::cout << std::endl;
}
