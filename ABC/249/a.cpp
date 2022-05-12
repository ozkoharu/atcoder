#include<bits/stdc++.h>
using namespace std;
int jog(int a, int b, int c, int x, int sum) {
    while(x > 0) {
        x = x - a;
        if (x > 0) {
            sum += b;
            if (x > 0) {
                x = x - c;
            }else {
                break;
            }
        }else {
            break;
        }
    }
    return sum;
}
int main() {
 int a,b,c,d,e,f,x;
 cin >> a >> b >> c >> d >> e >> f >> x;
 
 int takahasisum = 0;
 int aokisum =0;
 takahasisum = jog (a, b, c, x, takahasisum);
 aokisum = jog (d, e, f, x, aokisum);

if (takahasisum < aokisum) {
    cout << "Takahshi" << endl;
} else if (takahasisum == aokisum) {
    cout << "draw" << endl;
} else {
    cout << "Aoki" << endl;
}
return 0;
}