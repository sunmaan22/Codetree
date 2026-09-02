#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    for(int i=1;i<=n;++i){
        if(i%2==0||(i%5==0&&i%10!=0)||(i%3==0&&i%9!=0)){
            continue;
        }
        cout << i << " ";
    }
    // Please write your code here.
    return 0;
}