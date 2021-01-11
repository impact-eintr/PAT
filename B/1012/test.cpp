#include <iostream>
#include <vector>

int main()
{
    int A1 = 0,A2 = 0,A3 = 0,A5 = 0;
    double A4 = 0;
    std::vector<int> numlist;
    int N = 0;
    std::cin >> N;

    int temp = 0;
    int flag = 1;
    double A4Sum = 0.0;
    for (int i = 0;i < N;i++){
        std::cin >> temp;
        int res = temp%5;
        if (res == 0 && temp%2 == 0){
            A1 += temp;
        }else if(res == 1){
            A2 += flag*temp;
            flag *= -1;
        }else if (res == 2){
            A3++;
        }else if (res == 3){
            A4Sum += temp;
        }else if(res == 4){
            if (temp > A5){
                A5 = temp;
            }
        }
    }
    A4 = A4Sum/3;
    numlist.push_back(A1);
    numlist.push_back(A2);
    numlist.push_back(A3);
    numlist.push_back(A4);
    numlist.push_back(A5);
    int i = 0;
    for (double num : numlist){
        if (num == 0){
            std::cout << "N";
        }else if (i == 3){
            printf("%0.1f",A4);
        }else{
            std::cout << num;
        }
        if (i != 4){
            std::cout << " ";
        }
        i++;

    }
    return 0;
}

