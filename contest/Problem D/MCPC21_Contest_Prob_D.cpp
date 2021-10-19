#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("min.in", "r",stdin);

    ll n; cin >> n ;
    ll a[n];
    for(auto& x: a)
        cin >> x;
    
    sort(a,a+n);

    deque <ll> dq;
    ll sum=0,mn=LLONG_MAX;
    dq.push_back(a[0]);
    for(ll i=1;i<n/2;i++){
        dq.push_back(a[i]);
        sum += abs(a[i]-a[i-1]);
    }
    mn = sum;
    for(ll i=n/2;i < n ;i++){
        ll temp = dq.front();
        dq.pop_front();
        sum -= abs(dq.front() - temp);
        sum += abs(dq.back() - a[i]);
        dq.push_back(a[i]);
        mn = min(mn, sum);
    }
    cout << mn << "\n";
}
