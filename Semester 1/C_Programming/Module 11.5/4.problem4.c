// // V. Frequency Array
#include <stdio.h>
int main(){
    int size,m;
    scanf("%d %d",&size,&m);
    int a[size];
    int count[size];
    for(int i=1;i<=size;i++){
        count[i]=0;
    }
    for(int i=1;i<=size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=size;i++){
        int value = a[i];
        count[value]++;
    }
    for(int i=1;i<=m;i++){
            printf("%d\n",count[i]);
    }
}

#include <stdio.h>

#define MAX_N 100000
#define MAX_M 100000

int n, m, a[MAX_N + 5];
int freq[MAX_M + 5];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    for (int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }
    return 0;
}

