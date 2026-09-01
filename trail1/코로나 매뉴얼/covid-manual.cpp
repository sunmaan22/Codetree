#include <iostream>
using namespace std;

char is_emergency(char a, int b){
    if(a=='Y'){
        if(b>=37){
            return 'A';
        }
        else{
            return 'C';
        }
    }
    else{
        if(b>=37){
            return 'B';
        }
        else{
            return 'D';
        }
    }
}


int main() {
    int a,b,c;
    char a1,b1,c1,d1,d2,d3;
    int count =0;
    cin >> a1 >> a >> b1 >> b >> c1 >> c;
    d1 = is_emergency(a1,a);
    d2 = is_emergency(b1,b);
    d3 = is_emergency(c1,c);

    if(d1=='A'){
        count += 1;
    }
    if(d2=='A'){
        count += 1;
    }
    if(d3=='A'){
        count += 1;
    }
    if(count>=2){
        cout << "E";
    }
    else{
        cout << "N";
    }

    // Please write your code here.
    return 0;
}