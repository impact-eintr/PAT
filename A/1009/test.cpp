#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n[2] = {0};
    vector<double> numlist(2001);

    for (int i = 0;i < 2;i++){
        std::cin >> n[i];
        double value = 0;
        int index = 0;
        for(int j = 0;j < n[i];j++){
            std::cin >> index;
            std::cin >> value;
            numlist[index]+=value;
        }
    }
    int count = 0;
    for(unsigned i = 0;i < numlist.size();i++){
        if (numlist[i] != 0){
            count++;
        }
    }
    printf("%d",count);
    for(int i = 1000;i >= 0;i--){
        if (numlist[i] != 0){
            cout<< " ";
            printf("%d %.1f",i,numlist[i]);
        }
    }
    return 0;
}
