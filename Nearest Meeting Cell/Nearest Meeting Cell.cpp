// Problem Description :

// You are given a maze with N cells. Each cell may have multiple entry points but not more than one exit (i.e. entry/exit points are unidirectional doors like valves). The cells are named with an integer from 0 to N-1.

// You have to find :

// Nearest meeting cell : Given any two cells - C1, C2, find the closest cell Cm that can be reached from both C1 and C2.

// INPUT FORMAT :

// The first line contains the number of cells N.
// The second line has a list of N values of the edge[ ] array, where edge[i] conatins the cell number that can be reached from cell 'i' in one step. edge[i] is -1 if the ith doesn't have an exit.
// Third line for each testcase contains two cell numbers whose nearest meeting cell needs to be found. (return -1 if there is no meeting cell from two given cells)
// OUTPUT FORMAT :
// Output a single line that denotes the nearest meeting cell (NMC).

// Sample Input :
// 23
// 4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21
// 9 2

// Sample Output :
// 4

#include<bits/stdc++.h>
using namespace std;

vector shortPath(vector adj[], int c1, int n){

vector<int> dist(n, INT_MAX);
queue<int> q;
q.push(c1);
dist[c1] = 0;

while(!q.empty()){
    int u = q.front();
    q.pop();
    
    for(auto &v: adj[u]){
        if(dist[v] > dist[u] + 1){
            dist[v] = dist[u] + 1;
            q.push(v);
        }
    }
}
return dist;
}
int main()
{
int n;
cin>>n;

vector<int> edges(n);
for(int i=0 ; i<n ; i++)
    cin >> edges[i];

int c1, c2;
cin>>c1>>c2;

vector<int> adj[n];
for(int i=0 ; i<n ; i++){
    if(edges[i] == -1) continue;
    adj[i].push_back(edges[i]);
}
vector<int> v1 = shortPath(adj, c1, n);
vector<int> v2 = shortPath(adj, c2, n);

int mn = INT_MAX, node = -1;
for(int i=0 ; i<n ; i++){
    if(v1[i] == INT_MAX || v2[i] == INT_MAX)
        continue;
    if(v1[i] + v2[i] < mn){
        mn = v1[i] + v2[i];
        node = i;
    }
}
cout << node << endl;
return 0;
}
