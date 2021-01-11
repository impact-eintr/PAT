#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    
    int shufflelist[54] = {0};
    for (int i = 0;i < 54;i++){
        std::cin >> shufflelist[i];
    }

    int numlist[54] = {0};
    for (int i = 1;i <= 54;i++){
        if(i%13 >= 10){
            numlist[i-1] = (i/13+1)*100+i%13;
        }else if(i%13 < 10){
            if (i%13 != 0){
                numlist[i-1] = (i/13+1)*10+i%13;
            }else{
                numlist[i-1] = (i/13)*100+13;
            }
        }
    }
    int reslist[54] = {0};
    while(n--){
        for (int i =0;i < 54;i++){
            reslist[shufflelist[i]-1] = numlist[i];
        }
        for (int i =0;i < 54;i++){
            numlist[i] = reslist[i];
        }
    }

    char card[5] = {'S','H','C','D','J'};
    int i = 0;
    for (auto a : reslist){
        if (a < 100){
            printf("%c%d",card[a/10-1],a%10);
        }else if(a >= 100){
            printf("%c%d",card[a/100-1],a%100);
        }
        if (i != 53){
            printf(" ");
        }
        i++;
    }
    return 0;
}
