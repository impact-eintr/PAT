#include <iostream>

int main()
{
    int T;
    std::cin >> T;
    long long A,B,C = 0;
    for (int i = 1;i <= T;i++){
        std::cin >> A >> B >> C;
        if (A + B > C){
            std::cout << "Case #" << i << ": true"<<std::endl;
        }else{
            std::cout << "Case #" << i << ": false"<<std::endl;
        }

    }

    return 0;
}
