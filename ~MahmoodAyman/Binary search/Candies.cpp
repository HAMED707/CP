
    #include <bits/stdc++.h>
    using namespace std;

__int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}


    // bool can(ll mid) {
    //     // ll sum=(mid);
    //     // while (mid) {
    //     //     sum+=mid-1;
    //     //     mid--;
    //     // }
    //     return sum<=n;
    // }
    int main() {

    __int128 n;n=read();
        __int128 l=1,r=n,ans=n;
        while (l<=r) {
            __int128 mid=(l+r)/2;
            if((mid*(mid+1))/2<=n) {
                ans=mid;
                l=mid+1;
            }else r=mid-1;
        }
        print(ans);
    }
