#include <iostream>

using namespace std;

int main(){
int i,j;
for(i=0;i<=25;i++){
    for(j=0;j<=25-i;j++){
        printf("%c",j+65);
    }
printf("\n");
}
return 0;
}
