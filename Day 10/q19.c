//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

 #include<stdio.h>
  int main(){
    int s1,s2,s3;

    scanf("%d %d %d",&s1,&s2,&s3);

    if(s1 == s2 && s1 == s3){
        printf("Equilateral");
    }
    else if(s1 == s2 && s1 != s3){
        printf("Isoceleces");
    }
    else if(s2 == s3 && s2 != s1){
        printf("Isoceleces");
    }
    else if(s3 == s1 && s3 != s2){
        printf("Isoceleces");
    }
    else {
        printf("Scalene");
    }
    return 0;
  }