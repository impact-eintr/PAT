#include <iostream>
#include <vector>

using namespace std;

int main(){
    string temp;
    vector<string> reslist;
    while(cin >> temp){
        reslist.push_back(temp);
        if(getchar() == '\n'){
            break;
        }
    }
    unsigned long i = 0;
    for (auto it = reslist.rbegin();it != reslist.rend();it++){
        cout << *it;
        if (i != reslist.size()-1){
            cout << " ";
        }
        i++;
    }
}
