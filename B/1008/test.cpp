#include <iostream>
#include <vector>

int main()
{
    int N = 0,M = 0;
    std::cin >> N >> M;
    M = M%N;//修正M
    std::vector<int> numlist;
    int temp = 0;
    for(int i = 0;i < N;i++){
        std::cin >> temp;
        numlist.push_back(temp);
    }
    for (int i = 0;i < N;i++){
        std::cout << numlist[(i+(N-M))%N];
        if (i != N-1){
            std::cout << " ";
        }
    }
    return 0;
}

