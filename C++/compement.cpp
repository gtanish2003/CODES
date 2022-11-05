#include<stdio.h>

main() {
int a[10],i,n;

printf("Enter no of bits \n");
scanf("%d",&n);
printf("Enter binary numbers \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++) {
if(a[i]==0)
a[i]=1;
else
a[i]=0;
}
for(i=n-1;i>=0;i--) {
if(a[i]==0) {
a[i]=1;
break;
}
else {
a[i]=0;
if(a[i-1]==0) {
a[i-1]=1;
break;
}
}
}
printf("The complement form is \n");
for(i=0;i<n;i++)
printf("%d",a[i]);

}