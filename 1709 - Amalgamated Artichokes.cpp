/*1709 - Amalgamated Artichokes*/
#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    double p, a, b, c, d, n;

    while(cin >> p >> a >> b >> c >> d >> n){
        
        double min;
        double maxi = 0.0;
        double aux;
        double dif = 0.0;
        double ans = 0.0;

        for(double i = 1.0; i <= n; i++){
            
            aux =  p * (sin((a * i) + b) + cos((c* i) + d) + 2.0);

            if(aux >= maxi){
                maxi = aux;
            }

            min = aux;
            dif = maxi - min;
            
            if(dif > ans){
                ans = dif;
            }
        }

        cout << setprecision(6) << fixed << ans << '\n';
    }
    return 0;
}

