#include <bits/stdc++.h>

int main() {
  // TODO: fixme.
  float r,s1,s2,s3,s4;
  scanf("%f",&r);
  s1=r+5;
  s2=pow(s1,2);
  s3=s2/(r/3);
  s4=pow(s3,3);
  printf("%.6f",r);
  printf("%.6f",s1);
  printf("%.6f",s2);
  printf("%.6f",s3);
  printf("%.6f",s4);
  return 0;
}