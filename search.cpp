#include<iostream>

using namespace std;


// ------------------------------
// 深さ優先探索
// ------------------------------

// 部分わ問題
// a[n]が与えられます。その中から、いくつか選びその和がちょうどkにできるのか

int a[MAX_N];
int n, k;

bool dfs(int i, int sum) { 
    if (i == n) return sum == k;
    if (dfs(i+1, sum)) return true;
    if (dfs(i+1, sum + a[i])) return true;

    return false;
}

void solve() { 
    if(dfs(0, 0)) printf("YES\n");
    else printf("NO\n");
}

// Lake Couting
// 全部でなんこの水たまりがあるか


// 幅優先探索



// ２分探索


// -------------------------------
// しゃくとり法
// -------------------------------
