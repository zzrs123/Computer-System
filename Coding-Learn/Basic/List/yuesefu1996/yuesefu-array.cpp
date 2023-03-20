// 数组实现单向静态链表，最简单的实现

#include<bits/stdc++.h>

int nodes[150];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)nodes[i]=i+1;
    nodes[n]= 1;
    int now = 1;
    int prev =1;
    while((n--)>1){
        for(int i = 1; i < m; i++){
            prev = now;
            now = nodes[now];
        }
        printf("%d ",now);
        nodes[prev] = nodes[now];
        now = nodes[prev];
    }
    printf("%d",nodes[now]);
    return 0;
}