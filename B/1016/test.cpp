#include <iostream>
#include <string>
int main()
{
    std::string A,B;
    int DA,DB = 0;
    long long PA = 0;
    long long PB = 0;
    std::cin >> A >> DA >> B >> DB;
    for(std::string::iterator i = A.begin();i<A.end();i++){
        if ((*i-'0') == DA){
            PA = PA * 10 + DA;
        }
    }
    for(std::string::iterator i = B.begin();i<B.end();i++){
        if ((*i-'0') == DB){
            PB = PB * 10 + DB;
        }
    }
    long long res = PA + PB;
    std::cout << res << std::endl;
    return 0;
}

