#include <iostream>
#include <vector>
int main()
{
    int temp = 0;
    std::vector<int> numlist;

    while(std::cin >> temp){
        numlist.push_back(temp);
        auto ch = getchar();
        std::cout << ch << "\n";
        if (ch == '\n'){
            break;
        }
    }
    std::vector<int> reslist;
    for (unsigned long i = 0;i < numlist.size();i+=2){
        numlist[i] *= numlist[i+1];
        numlist[i+1]--;
        if (numlist[i] != 0){
            reslist.push_back(numlist[i]);
            reslist.push_back(numlist[i+1]);
        }
    }
    if (reslist.size() == 0){
        std::cout << "0 0"<< std::endl;
    }
    unsigned i = 0;
    for (int a : reslist){
        std::cout << a;
        if (i != reslist.size()-1){
            std::cout << " ";
        }
        i++;
    }
    return 0;
}

