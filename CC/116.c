#include<stdio.h>
#include<math.h>
int main()
{
    long long n,m,a,t1,t2;
    scanf("%lld%lld%lld", &n, &m, &a);
    t1 = (n%a != 0) ? (n/a + 1) : (n/a);
    t2 = (m%a != 0) ? (m/a + 1) : (m/a);
    printf("%lld\n", t1 * t2);
    return 0;
}
