#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void collinear(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    ll a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (a == 0)
        cout << "Impossible\n";
    else
        cout << "Possible\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("circles.in", "r", stdin);
    ll n; cin >> n ;
    while(n--){
    	ll x1, y1, x2, y2, x3, y3;
    	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    	collinear(x1, y1, x2, y2, x3, y3);
    }

}