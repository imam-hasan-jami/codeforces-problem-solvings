#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;
bool check_prime(int n) {
  bool is_prime = true;
 
  if (n == 0 || n == 1) {
    is_prime = false;
  }
 
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }
 
  return is_prime;
}
 
 
void solve()
{
     int n; 
     cin >> n;
    if(n % 2) {cout << "NO" << endl; return;}
    cout << "YES" << endl;
    for (int i = 0; i < n / 2; i++) cout << "DDA" ;
    cout << endl;
}
 
int main()
{
    IO;
    w(t);
    return 0;
}