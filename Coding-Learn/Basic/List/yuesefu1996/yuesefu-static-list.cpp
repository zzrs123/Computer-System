// 结构体数组来实现单向静态链表
#include <bits/stdc++.h>

#define N 105
struct node{
    int id,nextid;
}nodes[N];

int main(){
    int n,m;
    scanf("%d %d",&n, &m);
    // nodes[0].id = 0;
    nodes[0].nextid = 1;
    for(int i = 1; i <= n; i++){
        nodes[i].id = i;
        nodes[i].nextid = i+1;
    }
    nodes[n].nextid = 1;
    int now = 1;
    int prev = 1;
    while((n--)>1){
        for(int i=1;i<m;i++){
            prev = now;
            // 第一遍写的问题就在于这里，我写成了now=nodes[i].nextid;问题很大
            now = nodes[now].nextid;
        }
        //现在now==m
        printf("%d ",nodes[now].id);
        nodes[prev].nextid = nodes[now].nextid;
        now = nodes[prev].nextid;
    }
    printf("%d", nodes[now].nextid);
    return 0;
}