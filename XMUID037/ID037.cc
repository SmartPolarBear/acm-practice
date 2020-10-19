#include <iostream>
#include <queue>
#include <utility>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
  priority_queue<pair<int,int>> q;
  int n=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int m=0;
    cin>>m;
    for(int j=0;j<m;j++)
    {
      int num=0;
      cin>>num;
      q.push(make_pair(abs(num),num));
    }
    
    while(!q.empty())
    {
      pair<int,int> t=q.top();q.pop();
      cout<< t.second;
      if(!q.empty())cout<<" ";
    }
    cout << endl;
  }
  return 0;
}