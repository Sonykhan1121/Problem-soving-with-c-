#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
    int i =0,j= n-1;
    bool palindrome = true;
    while(i<j)
    {

        if(a[i]!=a[j])
        {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }
    if(palindrome)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}