#include<algorithm>
#include<bitset>
#include<cstdio>
#include<vector>

using namespace std;

bitset<1000010> bs;
vector<int> primes;
int nods[1100000] = { 0 };

void sieve(int ub) {
    bs.set();
    bs[0] = bs[1] = 0;
    for(long long i = 2; i < ub + 1; i++)
        if(bs[i]) {
            for(long long j = i * i; j <= ub + 1; j += i)
                bs[j] = 0;
            primes.push_back(i);
        }
}

int numDiv(int N) {
    int i = 0, factor = primes[i], ans = 1;
    while(factor * factor <= N) {
        int power = 0;
        while(N % factor == 0) { N /= factor; power++; }
        ans *= (power + 1);
        factor = primes[++i];
    }
    if(N != 1) ans *= 2;
    return ans;
}

int T, A, B;

int main() {
    sieve(1000);
    int sum = 1;
    nods[sum] = 1;
    for(int i = 1; i < 65000; i++) {
        sum += numDiv(sum);
        nods[sum] = i + 1;
    }
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d %d", &A, &B);
        int a = A, b = B;
        while(nods[a] == 0) a++;
        while(nods[b] == 0) b--;
        int tot = nods[b] - nods[a];
        printf("Case %d: %d\n", i, tot + 1);
    }
    return 0;
}
