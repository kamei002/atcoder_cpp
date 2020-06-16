#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){

    std::ifstream in("/home/src/input.txt");
    std::cin.rdbuf(in.rdbuf());

    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << a << endl;
    cout << b << endl;
    return 0;
}