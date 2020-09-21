#include <iostream>
#include <vector>
using namespace std;

vector<int> G[MAX_V];


// ----------------------------
// グラフ探索
// ----------------------------

// ２部グラフ判定
// 頂点数nの無効グラフが与えられる。隣接する頂点同士が違う色になるように
// 頂点の色を塗っていく、２色以内で全ての色を濡れるか判定指定ください

vector<int> G[MAX_V];
int V;

int color[MAX_V];



// ----------------------------
// 最短経路問題
// ----------------------------



// ヒープ

// priority queue
#include <queue>
#include <cstdio>

int main() { 
    priority_queue<int> pque;
    pque.push(3);
    pque.push(5);

    while(!pque.empty()) { 
        printf("%d\n", pque.top());
        pque.pop();
    }
}

// Expedition(POJ 2431)
int L, P, N;
int A[MAX_N + 1], B[MAX_N + 1];

void solve() { 
    A[N] = L;
    B[N] = 0;
    N++;

    priority_queue<int> que;
    int ans = 0, pos = 0, tank = P;

    for(int i = 0; i < N; i++) { 
        int d = A[i] - pos;

        while(tank - d < 0) { 
            if (que.empty()) { 
                puts("-1");
                return;
            }
            tank += que.top();
            que.pop();
            ans++;
        }

        tank -= d;
        pos = A[i];
        que.push(B[i]);
    }

}


// 二分探索木

// Union-Find木
