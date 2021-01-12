#include <iostream>
#include <sstream>

int main()
{
    const std::string MAX = "922337203654775807";
    int n = 0;
    std::cin >> n;
    std::string A,B,C;
    long a = 0,b = 0,c = 0;
    for (int i = 0;i < n;i++){
        std::cin >> A >> B >> C;
        if (A.size() < 17||B.size() < 17){
            std::stringstream aa(A);
            aa >> a;
            std::stringstream bb(B);
            bb >> b;
            std::stringstream cc(C);
            cc >> c;
            std::cout << a << " " << b << " " << c << std::endl;
            std::cout << a+b << "\n";
            long res = a+b-c;
            if (res>0){
                printf("Case $%d: true\n",i+1);
                break;
            }
        }
    }
    return 0;
}

