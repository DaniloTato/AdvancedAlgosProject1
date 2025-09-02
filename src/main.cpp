#include "../include/find.hpp"
#include <string>
#include <iostream>
#include <utility>

int main(){
    std::string txt = "ABCDAAJAJAJAJAKDABCD";
    std::string pat = "JAJA";
    std::vector<std::pair<int,int>> answers = find(txt, pat);
    for(auto i: answers){
        std::cout << i.first << " <- start | end -> " << i.second << "\n";
    }
    return 0;
}