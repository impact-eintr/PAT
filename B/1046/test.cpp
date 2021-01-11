#include <iostream>

int main()
{
    // 甲喊 甲划 乙喊 乙划
    int n = 0;
    std::cin >> n;

    int a = 0,b = 0;
    int ra = 0,rb = 0;
    int res = 0;
    int A = 0,B = 0;

    for (int i = 0;i < n;i++){
        std::cin >> a >> ra >> b >> rb;
        res = a+b;
        if (res == ra && res != rb){
            B++;
        }else if(res == rb && res != ra){
            A++;
        }
    }
    std::cout << A << " " << B << std::endl;
    return 0;
}

