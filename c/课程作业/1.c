#include<stdio.h>
#include<math.h>
extern int isSu(int n);
extern int inarr(int a, int arr[220]);

int main()
{
    int arr[4][4] = {{0}}, nisu[220]={0};
    int i, j, k, l, n, m, dia1, dia2, col, a, b, num;
    j = 0;
    num = 0;
    for(i = 1001; i<10000; i+=2)
    {
        if(isSu(i))
        {
            m = i%10*1000+i/10%10*100+i/100%10*10+i/1000;
            if(isSu(m))
            {
                // for(k = 0;k<1100;k++)
                // {
                //     if(m == nisu[k])
                //     {
                //         break;
                //     }
                    
                // }
                
                // if(k==1100)
                // {
                //     nisu[j] = i;
                //     j++;
                // }
                
                // if(inarr(m, nisu))
                // {
                //     continue;
                // }
                printf("%d ",i);
                nisu[j] = i;
                j++; 
                
            }
        }
    }
    
    // printf("There are magic aquares with invertable primes as follow:\n");    
    // for(i = 0;i<220;i++)
    // {
    //     if(nisu[i]!=0)
    //     {
    //         arr[0][0] = nisu[i]/1000;
    //         arr[0][1] = nisu[i]/100%10;
    //         arr[0][2] = nisu[i]/10%10;
    //         arr[0][3] = nisu[i]%10;
    //         for(j = 0;j<220;j++)
    //         {
    //             if(nisu[j]!=0)
    //             {
    //                 arr[1][0] = nisu[j]/1000;
    //                 arr[1][1] = nisu[j]/100%10;
    //                 arr[1][2] = nisu[j]/10%10;
    //                 arr[1][3] = nisu[j]%10;
    //                 for(k = 0;k<220;k++)
    //                 {
    //                     if(nisu[k]!=0)
    //                     {
    //                         arr[2][0] = nisu[k]/1000;
    //                         arr[2][1] = nisu[k]/100%10;
    //                         arr[2][2] = nisu[k]/10%10;
    //                         arr[2][3] = nisu[k]%10;
    //                         for(l = 0;l<220;l++)
    //                         {
    //                             if(nisu[l]!=0)
    //                             {
    //                                 arr[3][0] = nisu[l]/1000;
    //                                 arr[3][1] = nisu[l]/100%10;
    //                                 arr[3][2] = nisu[l]/10%10;
    //                                 arr[3][3] = nisu[l]%10;
    //                                 //  jianyanlie
    //                                 for(n = 0;n<4;n++)
    //                                 {
    //                                     col = arr[0][n]*1000+arr[1][n]*100+arr[2][n]*10+arr[3][n];
    //                                     if(inarr(col, nisu)==0)
    //                                     {
    //                                         break;
    //                                     }                
    //                                 }
    //                                 // jianyanduijiaoxian
    //                                 if(n == 4)
    //                                 {
    //                                     dia1 = arr[0][0]*1000+arr[1][1]*100+arr[2][2]*10+arr[3][3];
    //                                     if(inarr(dia1, nisu))
    //                                     {
    //                                         dia2 = arr[0][3]*1000+arr[1][2]*100+arr[2][1]*10+arr[3][0];
    //                                         if(inarr(dia2, nisu))
    //                                         {
    //                                             num++;
    //                                             printf("No.%d\n", num);
    //                                             for(a = 0;a<4;a++)
    //                                             {
    //                                                 for(b = 0;b<4;b++)
    //                                                 {
    //                                                     printf("%6d", arr[a][b]);
    //                                                 }
    //                                                 printf("\n");
    //                                             }
    //                                         }
                                            
    //                                     }
    //                                 }
                                    
                                    
                                    
                                    
    //                             }
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }

    return 0;
}


int isSu(int n)
{
    int m;
    for(m = 2; m<sqrt(n); m++)
    {
        if(n%m == 0)
        return 0;
    }
    return 1;
}

int inarr(int a, int arr[220])
{
    int i;
    for(i = 0; i<220; i++)
    {
        if(a == arr[i])
            return 1;
    }
    return 0;
}