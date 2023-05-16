#include <stdio.h>
#include<math.h>
int main() {
    int start, end, i, r, sum;
    scanf("%d %d", &start, &end);
    for(i=start; i<=end; i++) {
        int temp = i;
        sum = 0;
        while(temp != 0) {
            r = temp % 10;
            sum += (r*r*r);
            temp /= 10;
        }
        for(int i=0;i<=end;i++)
            if(sum==i) {
                printf("%d ", i);
            }
    }
    return 0;
}
