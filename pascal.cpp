#include<iostream>
using namespace std;
int pascal(int x, int n) {
    if (x == 0 || x == n) return 1;
    if (x == 1) return n;
    return pascal(x - 1, n - 1) + pascal(x, n - 1);
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal(j, i) << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
 
