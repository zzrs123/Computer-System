// 结构体数组来实现双向向静态链表
#include <bits/stdc++.h>

#define N 105
struct node{
    int id;
    int preid;
    int nextid;
}nodes[N];

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    nodes[0].nextid = 1;
    for(int i = 1; i <= n; i++){
        nodes[i].id = i;
        nodes[i].preid = i-1;
        nodes[i].nextid = i+1;
    }
    nodes[n].nextid = 1;
    nodes[1].preid = n;
    int now =1;
    while((n--)>1){
        for(int i = 1; i < m; i++){
            now = nodes[now].nextid;
        }
        printf("%d ",nodes[now].id);
        int prev = nodes[now].preid;
        int next = nodes[now].nextid;
        nodes[prev].nextid = nodes[next].id;
        nodes[next].preid = nodes[prev].id;
        now = next;
    }
    printf("%d", nodes[now].nextid);
    return 0 ;
}
