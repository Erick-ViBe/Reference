#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int v, x, y, aux;
vector<vector<int> > la;
vector<bool> vis(v+1, 0);
vector<int> pr;

int dfs(int u);
void bfs(int u);

int main(){

	cin>>v;

	for (int i = 0; i <= v; ++i)
	{
		la.push_back(vector<int>());
	}

	for (int i = 0; i < v-1; ++i)
	{
		cin>>x;
		cin>>y; 
        la[x].push_back(y); 
        la[y].push_back(x);
	}
    
	for (int i = 1; i < la.size(); i++) { 
        for (int j = 0; j < la[i].size(); j++) 
            cout << la[i][j] << " "; 
        cout << endl; 
    }

    cout<<endl;
    dfs(1);

    for (int j = 1; j < v+1; j++) 
        cout << vis[j] << " ";

    cout<<endl;

    for (int k = 0; k < v; k++) 
    	cout << pr[k] << " ";

	return 0;
}

void bfs(int u) {

	queue <int> x;

	x.push(u);
	pr.push_back(u);
	vis[u] = 1;

	while(x.empty()!=1){

		for (int i = 0; i < la[x.front()].size(); ++i)
		{
			if (vis[la[x.front()][i]]==0)
			{
				vis[la[x.front()][i]]=1;
				x.push(la[x.front()][i]);
				pr.push_back(la[x.front()][i]);
			}
		}
		x.pop();

	}

}

int dfs(int u) {
	if(vis[u]) return 0;
	vis[u] = 1;
	pr.push_back(u);

	int sz = 1;
	for(int i=0;i<la[u].size();i++) {
		int v = la[u][i];
		if(vis[v]) continue;
		sz += dfs(v);
	}
	return sz;
}

/*
7
1
2
2
4
5
2
2
3
5
6
7
5

8
1
2
2
4
5
2
2
3
5
6
7
5
1
4
*/
