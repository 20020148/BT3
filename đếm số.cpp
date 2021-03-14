#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int diem = 0;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (diem <= 9) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == diem){
			count++;
		}
        }
        cout << diem << " : " << count << endl;
        diem++;
    }
    return 0;
}

