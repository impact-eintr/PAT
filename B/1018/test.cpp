#include <iostream>
#include <map>

int main()
{
    int n = 0;
    std::cin >> n;

    char tmpA,tmpB = '0';
    int Alist[3] = {0};
    std::map<char,int> Amap;
    int Blist[3] = {0};
    std::map<char,int> Bmap;
    
    for (int i = 0;i < n;i++){
        std::cin >> tmpA >> tmpB;
        if (tmpA != tmpB){
            if (tmpA == 'C'||tmpA == 'B'){
                if(tmpA < tmpB){
                    Alist[0]++;//A胜利
                    Amap[tmpA]++;
                    Blist[2]++;//B失败
                }else{
                    Alist[2]++;//A失败
                    Blist[0]++;//B胜利
                    Bmap[tmpB]++;
                }
            }else {
                if(tmpB){
                        Alist[0]++;//A胜利
                        Amap[tmpA]++;
                        Blist[2]++;//B失败
                    }else{
                        Alist[2]++;//A失败
                        Blist[0]++;//B胜利
                        Bmap[tmpB]++;
                    }
            }
        }else{
            Alist[1]++;
            Blist[1]++;
        }
    }
    std::cout << Alist[0] << " " << Alist[1] << " " << Alist[2] << std::endl;
    std::cout << Blist[0] << " " << Blist[1] << " " << Blist[2] << std::endl;
    int max = 0;
    char ares = '0';
    char bres = '0';
    for (auto a : Amap){
        if (a.second > max){
            max = a.second;
            ares = a.first;
        }
    }
    max = 0;
    for (auto b : Bmap){
        if (b.second > max){
            max = b.second;
            bres = b.first;
        }
    }
    std::cout << ares << " " << bres << std::endl;
    return 0;
}

