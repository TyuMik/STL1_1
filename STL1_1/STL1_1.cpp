#include <iostream>
#include <string>
#include <set>
#include <map>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите строку: ";
    std::string string;
    std::getline(std::cin, string);
    
    std::multiset<char> s;

    for (const auto& i : string) {
        s.insert(i);
    }
    
    std::map<char, int> m;

    for (const auto& i : s) {
        m[i] = s.count(i);
    }

    std::multimap<int, char> m1;

    for (const auto& i : m) {
        m1.insert({ i.second, i.first });
    }

    std::multimap<int, char>::reverse_iterator itr;

    for (auto itr = m1.rbegin(); itr != m1.rend(); itr++) {
        std::cout << itr->second << " - " << itr->first << std::endl;
    }

    return 0;
}