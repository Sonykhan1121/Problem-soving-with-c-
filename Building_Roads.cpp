 #include<bits/stdc++.h>
 using namespace std;
 const int N = 1e5+5;
 vector<int> ar[N];
 bool visited[N];

 void DFS(int i)
 {
    visited[i]=true;
    // cout<<i<<" ";
    for(int j=0;j<ar[i].size();j++)
    {
        if(!visited[ar[i][j]])
            DFS(ar[i][j]);
    }
 }
 int main()
 {

    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;  
        ar[a].push_back(b);
        ar[b].push_back(a);


    }
    memset(visited,false,sizeof(visited));
    // DFS(0);
    vector<int> ans;
    for(int i =1;i<=n;i++)
    {
        if(!visited[i])
        {
            DFS(i);
            ans.push_back(i);
        }
    }  
    cout<<ans.size()-1<<endl;
    for(int i =0;i<ans.size()-1;i++)
    {
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }

    return 0;
 }