#include <stdio.h>

int main()
{
// //1 计算n的阶乘
//     int a;
//     scanf("%d",&a);
//     // printf("%d",a);
//     int s = 1;
//     for(int i = 1; i <= a;i++)
//     {
//         s *= i;




//     }

//     printf("%d! = %d",a,s);
//     return 0;

// //就算1阶乘加到10的阶乘答案算对了
//     int n = 10;
//     int a = 1;
//     int b = 1;
//     int s = 0;
//     for(int i = 1;i <= n; i++)
//     {
//         for(a;a<=i;a++)
//         {
//             b *= a; 


//         };
//         s += b;




//     };
//     printf("%d",s);

//     return 0;

// 有序数组查找某个数字n

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int k = 2;
    int a = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",a);
    // for(int i = a; i >= 1; i *= (1/2))
    // {
    //     if( 7 == arr[i]) {printf("5的下表是%d",i); break;};

    // }想法还是差点意思
    int left = 0;
    int right = a - 1;
    while(left<right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] < k )//最左侧的数+最右侧的数的中值 小于查找数，最左侧数等于中间数+1
        //有点意思，这个题目思想不错
        {
            left += 1;

        }
        if(arr[mid] > k )
        {
            right -= 1;
            
        }
        else
        {
            printf("%d的下标是%d",k,mid);
            break;


        }

    }
    if(left > right)
    {
        printf("数组无这个数");



    };




    return 0 ;




}