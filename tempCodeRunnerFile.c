#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,sum=0;
    int avg,per,tmm;

    printf("Enter the marks of English");
    scanf("%d",sub1);
    printf("Enter the marks of Hindi");
    scanf("%d",sub2);
    printf("Enter the marks of marths");
    scanf("%d",sub3);
    printf("ENter the marks of chemistARY");
    scanf("%d",sub4);
    printf("ENter the marks of physics");
    scanf("%d",sub5);


    tmm=500;
    sum=sub1+sub2+sub3+sub4+sub5;
    avg = sum/5;
    per = sum/tmm*100;
    
    printf("persent of student is %d =",per);
    if(per<33){
        printf("student is fail");
    }
    else if(per>33&&per<45){
        printf("student is pass with C grade ");

    }
    else if(per>50&&per<60){

        printf("student is pass with B grade");
    }
    else if(per>60&&per<75){
        printf("student is pass with A grade");

    }
    else{
        printf("student is pass with A+ grade ");

    }
return 0;

}