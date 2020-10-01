/// Problem Name: Park Lighting
/// Problem Link: https://codeforces.com/problemset/problem/1358/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    Long n, m;
    cin >> n >> m;
    Long ans = 0;
    ans += (n/2)*m;
    if (n%2)ans += ceil(double(m)/2.0);
    //if (ans==0)ans++;
    cout << ans << '\n';
  }
  return 0;
}
