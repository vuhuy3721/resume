#include <iostream>
using namespace std;


int pagesNumbering(int n){
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += to_string(i).size();
    }
    return res;
}

int main()
{
    cout << pagesNumbering(1) << endl; // 1
    cout << pagesNumbering(21) << endl; // 107
    return 0;
}
