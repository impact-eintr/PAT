#include <iostream>
#include <stdio.h>

int main()
{
    long time1,time2 = 0;
    std::cin >> time1 >> time2;
    long res = time2-time1;
    long click = res%100;

    if (click >= 50){
        res = res/100+1;
    }else{
        res = res/100;
    }

    printf("%02ld:%02ld:%02ld\n",res/3600,res%3600/60,res%60);
    return 0;
}

