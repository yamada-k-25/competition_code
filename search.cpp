#include <iostream>
#include <queue>


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
// ８近傍で隣り合ってる時に一つのグループとして見た時に,
// なんこのグループができるのか
// input:
int N, M;
char field[MAX_N][MAX_M + 1];

void dfs(int x, int y) { 
    field[x][y] = '.';

    for(int dx = -1; dx <= 1; dx++) { 
        for(int dy = -1; dy <= 1; dy++) { 
            int nx = x + dx, ny = y + dy;
            if(0 <= nx && nx < N && 0 <= ny && ny < M & field[nx][ny] == 'W') dfs(nx, ny);
        }
    }
    return;
}

void solve() { 
    int res = 0;
    for (int i = 0; i < N; i++) { 
        for(int j = 0; j < M; j++) { 
            if (field[i][j] == 'W') { 
                dfs(i, j);
                res++;
            }
        }
    }
    printf("%d\n", res);
}

// ------------------------------
// 幅優先探索
// ------------------------------

// 迷路の最短路
const int INF = 1000000000;
typedef pair<int, int> P;

char maze[MAX_N][MAX_M + 1];
int N, M;
int sx, sy;
int gx, gy;

int d[MAX_N][MAX_M];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() { 
    queue<P> que;
    for(int i = 0; i < N; i++) { 
        for(int j = 0; j < M; j++) d[i][j] = INF;
    }

}

// ------------------------------
// 枝刈り
// ------------------------------




// ２分探索


// -------------------------------
// しゃくとり法
// -------------------------------
