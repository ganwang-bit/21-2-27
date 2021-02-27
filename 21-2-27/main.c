//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char arr[100005],arr1[100005];
//    int a[10000]={0};
//    gets(arr);
//    scanf("%s",arr1);
//    int flag=1,i;
//    for(i=0;arr[i];i++)
//    {
//        if(arr[i]=='+')
//            flag=0;
//        else
//            a[arr[i]]=1;
//    }
//    for(i=0;arr1[i];i++)
//    {
//        if(islower(arr1[i]))
//        {
//            if(!a[toupper(arr1[i])])
//                printf("%c",arr1[i]);
//        }
//        else if(isupper(arr1[i]))
//        {
//            if(!a[arr1[i]]&&flag)
//                printf("%c",arr1[i]);
//        }
//        else
//        {
//            if(!a[arr1[i]])
//                printf("%c",arr1[i]);
//        }
//    }
//}
//#include<stdio.h>
//#include<math.h>
//long long int yue(long long int a,long long int b)
//{
//    long long int tmp;
//    if(b==0||a==0)
//        return 1;
//    do
//    {
//        if(a<b)
//        {
//            tmp=a;
//            a=b;
//            b=tmp;
//        }
//        a%=b;
//    }while(a);
//    return b;
//}
//void jian(long long  a,long long b)
//{
//    int flag=0;
//    long long bei;
//    if(a<0||b<0)
//    {
//        if((a<0&&b>0)||(a>0&&b<0))
//            flag=1;
//        a=abs(a);
//        b=abs(b);
//    }
//    bei=yue(a,b);
//    a/=bei;
//    b/=bei;
//    if(a%b==0)
//    {
//        if(flag)
//            printf("(-%lld)",a/b);
//        else
//            printf("%lld",a/b);
//    }
//    else if(a>b)
//    {
//        if(flag)
//            printf("(-%lld %lld/%lld)",a/b,a-a/b*b,b);
//        else
//            printf("%lld %lld/%lld",a/b,a-a/b*b,b);
//    }
//    else
//    {
//        if(flag)
//            printf("(-%lld/%lld)",a,b);
//        else
//            printf("%lld/%lld",a,b);
//    }
//}
//int main()
//{
//    long long int a1,a2,b1,b2;
//    scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
//    jian(a1,b1);
//    printf(" + ");
//    jian(a2,b2);
//    printf(" = ");
//    jian(a1*b2+a2*b1,b1*b2);
//    printf("\n");
//    jian(a1,b1);
//    printf(" - ");
//    jian(a2,b2);
//    printf(" = ");
//    jian(a1*b2-a2*b1,b1*b2);
//    printf("\n");
//    jian(a1,b1);
//    printf(" * ");
//    jian(a2,b2);
//    printf(" = ");
//    jian(a1*a2,b1*b2);
//    printf("\n");
//    if(a2/b2==0)
//    {
//        jian(a1,b1);
//        printf(" / ");
//        jian(a2,b2);
//        printf(" = ");
//        printf("Inf");
//    }
//    else
//    {
//        jian(a1,b1);
//        printf(" / ");
//        jian(a2,b2);
//        printf(" = ");
//        jian(a1*b2,a2*b1);
//    }
//}
//#include<stdio.h>
//#include<math.h>
//long long int yue(long long int a,long long int b)
//{
//    a=a>0?a:-a;
//    b=b>0?b:-b;
//    long long int tmp;
//    if(b==0||a==0)
//        return 1;
//    do
//    {
//        if(a<b)
//        {
//            tmp=a;
//            a=b;
//            b=tmp;
//        }
//        a%=b;
//    }while(a);
//    return b;
//}
//void jian(long long  a,long long b)
//{
//    int flag=0;
//    long long bei;
//    if(a<0||b<0)
//    {
//        if((a<0&&b>0)||(a>0&&b<0))
//            flag=1;
//        a=a>0?a:-a;
//        b=b>0?b:-b;
//    }
//    bei=yue(a,b);
//    a/=bei;
//    b/=bei;
//    if(a%b==0)
//    {
//        if(flag)
//            printf("(-%lld)",a/b);
//        else
//            printf("%lld",a/b);
//    }
//    else if(a>b)
//    {
//        if(flag)
//            printf("(-%lld %lld/%lld)",a/b,a-a/b*b,b);
//        else
//            printf("%lld %lld/%lld",a/b,a-a/b*b,b);
//    }
//    else
//    {
//        if(flag)
//            printf("(-%lld/%lld)",a,b);
//        else
//            printf("%lld/%lld",a,b);
//    }
//}
//int main()
//{
//    long long int a1,a2,b1,b2,bei,aa1,bb1,aa2,bb2;
//    scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
//    aa1=a1;
//    bb1=b1;
//    aa2=a2;
//    bb2=b2;
//    jian(a1,b1);
//    printf(" + ");
//    jian(a2,b2);
//    printf(" = ");
//    bei=yue(aa1,bb1);
//    aa1/=bei;
//    bb1/=bei;
//    bei=yue(aa2,bb2);
//    aa2/=bei;
//    bb2/=bei;
//    jian(aa1*bb2+aa2*bb1,bb1*bb2);
//    printf("\n");
//    jian(a1,b1);
//    printf(" - ");
//    jian(a2,b2);
//    printf(" = ");
//    jian(a1*b2-a2*b1,b1*b2);
//    printf("\n");
//    jian(a1,b1);
//    printf(" * ");
//    jian(a2,b2);
//    printf(" = ");
//    jian(a1*a2,b1*b2);
//    printf("\n");
//    if(a2/b2==0)
//    {
//        jian(a1,b1);
//        printf(" / ");
//        jian(a2,b2);
//        printf(" = ");
//        printf("Inf");
//    }
//    else
//    {
//        jian(a1,b1);
//        printf(" / ");
//        jian(a2,b2);
//        printf(" = ");
//        jian(a1*b2,a2*b1);
//    }
//}
//
//#include<stdio.h>
//#include<math.h>
//long long int yue(long long int a,long long int b)
//{
//    a=a>0?a:-a;
//    b=b>0?b:-b;
//    long long int tmp;
//    if(b==0||a==0)
//        return 1;
//    do
//    {
//        if(a<b)
//        {
//            tmp=a;
//            a=b;
//            b=tmp;
//        }
//        a%=b;
//    }while(a);
//    return b;
//}
//void jian(long long  a,long long b)
//{
//    int flag=0;
//    long long bei;
//    if(a<0||b<0)
//    {
//        flag=1;
//        if(a<0&&b<0)
//            flag=0;
//        a=a>0?a:-a;
//        b=b>0?b:-b;
//    }
//    bei=yue(a,b);
//    a/=bei;
//    b/=bei;
//    if(a%b==0)
//    {
//        if(flag)
//            printf("(-%lld)",a/b);
//        else
//            printf("%lld",a/b);
//    }
//    else if(a>b)
//    {
//        if(flag)
//            printf("(-%lld %lld/%lld)",a/b,a-a/b*b,b);
//        else
//            printf("%lld %lld/%lld",a/b,a-a/b*b,b);
//    }
//    else
//    {
//        if(flag)
//            printf("(-%lld/%lld)",a,b);
//        else
//            printf("%lld/%lld",a,b);
//    }
//}
//int main()
//{
//    long long int a1,a2,b1,b2,bei,aa1,bb1,aa2,bb2,zui,z1,z2;
//   scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
//    aa1=a1;
//    bb1=b1;
//    aa2=a2;
//    bb2=b2;
//    jian(a1,b1);
//    printf(" + ");
//    jian(a2,b2);
//    printf(" = ");
//    bei=yue(aa1,bb1);
//    aa1/=bei;
//    bb1/=bei;
//    bei=yue(aa2,bb2);
//    aa2/=bei;
//    bb2/=bei;
//    bei=yue(bb2,bb1);
//    zui=bb1/bei*bb2;
//    z1=zui/bb1;
//    z2=zui/bb2;
//    jian(aa1*z1+aa2*z2,zui);
//    printf("\n");
//    jian(a1,b1);
//    printf(" - ");
//    jian(a2,b2);
//    printf(" = ");
//    jian(aa1*z1-aa2*z2,zui);
//    printf("\n");
//    jian(a1,b1);
//    printf(" * ");
//    jian(a2,b2);
//    printf(" = ");
//    jian(aa1*aa2,bb1*bb2);
//    printf("\n");
//    if(a2/b2==0)
//    {
//        jian(a1,b1);
//        printf(" / ");
//        jian(a2,b2);
//        printf(" = ");
//        printf("Inf");
//    }
//    else
//    {
//        jian(a1,b1);
//        printf(" / ");
//        jian(a2,b2);
//        printf(" = ");
//        jian(aa1*bb2,aa2*bb1);
//    }
//}
