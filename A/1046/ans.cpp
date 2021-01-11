#include <iostream>
#include <vector>

int main()
{
    int n =0;
    std::cin >> n;
    int sum =0;
    std::vector<int> dislist(n);
    std::vector<int> dis(n+1);

    for(int i = 0;i < n;i++){
        std::cin >> dislist[i];
        sum += dislist[i];
        dis[i+1] = sum;
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
        disA = dis[max-1] - dis[min-1];
        disB = dis[n]-disA;
        int res = disA<disB?disA:disB;
        std::cout << res << std::endl;
    }
    return 0;
}

