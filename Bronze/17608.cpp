//BaekJoon_17608
//막대기

/*
* 제한 시간 : 60ms / 1s
* 메모리 제한 : 2416KB / 512MB
* 정답 비율 : 44.015%
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
  int n, m, max = 0,  cnt = 0;
  stack<int> s;

  cin>>n;
    
  for(int i = 0; i < n; i++)
  {
    cin>>m; 
    s.push(m);
  }
    
  while(s.size())
  {
    if(max < s.top())
    {
      max = s.top();
      cnt++;
    }
    s.pop();
  }  
  cout<<cnt;
}
