#include <iostream>
int main(){
    int T,tcase = 1;
    std::cin >> T;
    long long a,b,c,res = 0;
    while(T--){
        std::cin >> a >> b >> c;
        res = a+b;
        bool flag;
        if (a > 0 && b > 0 && res < 0)
          flag = true;
        else if (a < 0 && b < 0 && res >= 0)
          flag = false;
        else if (res > c)
          flag = true;
        else
          flag = false;
        if (flag == true){
            std::cout << "Case #" << tcase++ << ": true\n";
        }else{
            std::cout << "Case #" << tcase++ << ": false\n";
        }
    }
    return 0;
}
