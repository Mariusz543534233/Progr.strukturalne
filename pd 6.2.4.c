#include <iostream>
#include <stdio.h>
using namespace std;
void zwolnij(unsigned int n, int t[][n]){
free(t};
}
int main() {
    printf("Enter the number of columns");
    int i;
    scanf("%d", &i);
    printf("Enter the number of rows");
    int y;
    scanf("%d", &y);
    int r[i][y];
    int a;
    int b;
            for (a=0; a<i; a++){
            for (b=0; b<y; b++){
    scanf("%d",&r[a][b]);
        }
    }
    int *pr;
    pr = &r[0][0];
    cout << "wskaznik tablicy to: "<<pr<<endl;
    int n;
    int m;
    int t;
    zwolnij(n,m,t);
}
