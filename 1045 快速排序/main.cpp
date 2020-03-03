#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int v[100000+5];
int main()
{
    int n, maxn = 0, cnt = 0;
    scanf("%d", &n);
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++) {
        if(a[i]==b[i] && b[i]>maxn)
            v[cnt++] = b[i];
        if(b[i]>maxn) maxn = b[i];
    }
    printf("%d\n", cnt);
    for(int i=0; i<cnt; i++) {
        if(i!=0) printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");
    return 0;
}
