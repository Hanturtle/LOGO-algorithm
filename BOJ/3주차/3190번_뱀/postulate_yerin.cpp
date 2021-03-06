#include <iostream>

using namespace std;
int main() {
    int n;
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;

        int cnt = 0;
        bool chk[20000000] = {};

        for(int i = 2; i <= 2 * n; i++) {
            if(chk[i]) continue;
            for(int j = 2; i * j <= 2 * n; j++) {
                chk[i * j] = true;
            }
        }
        for(int i = n + 1; i <= n * 2; i++)
            if(!chk[i]) cnt++;
        printf("%d\n", cnt);
    }
}
