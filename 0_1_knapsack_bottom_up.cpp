 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n;
    cin>>n;
    int W;
    cin>>W;
    int weight[n],value[n];
    for(int  i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int j =0;j<n;j++)
    {
        cin>>value[j];
    }
    int dp[n+1][W+1];
    for(int i =0;i<=n;i++)
    {
        for(int j =0;j<=W;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j] = 0;
            }
            
        }
    }
    for(int  i=1;i<=n;i++)
    {
        for(int j =1;j<=W;j++)
        {
            if(weight[i-1]<=j)
            {
                int option1 = dp[i-1][j-weight[i-1]]+value[i-1];
                int option2 = dp[i-1][j];
                dp[i][j] = max(option1,option2);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    // for(int i =0;i<=n;i++)
    // {
    //     for(int j =0;j<=W;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[n][W]<<endl;
    return 0;
 }