#include <iostream>
#include <cstdio>
#include <vector>
int main()
{
    int n =0;
    std::cin >> n;
    std::vector<int> dislist(n);
    for(int i = 0;i < n;i++){
        std::cin >> dislist[i];
    }
    
    //查询
    int m = 0;
    std::cin >> m;
    for(int i = 0;i < m;i++){
        int a,b = 0;
        int disA = 0,disB = 0;//两条路的距离
        std::cin >> a >> b;
        int max = a>b?a:b;
        int min = a<b?a:b;
        for (int j = min-1;j < max-1;j++ ){
            disA += dislist[j];//从小到大      
        }
        for (int j = max-1;j < max+min-1;j++ ){
            disB += dislist[j%n];//从大到小 
        }
        
        int res = disA<disB?disA:disB;
        std::cout << res << std::endl;
    }
    return 0;
}

