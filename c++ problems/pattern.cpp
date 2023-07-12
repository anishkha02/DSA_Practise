#include <iostream>
using namespace std;
// int main(){                              // Pattern 1...
//     int i,j,k,n;
//     cin>>n;
//     for(k=1;k<=n;k++){
//     for(i=1;i<=n-k;i++)
//     {
//       cout<<" ";
//     }
//     for(j=1;j<=k;j++)
//     {
//       cout<<"#";
//     }
//     cout<<endl;
// }}

// int main()
// {
//     int i, j, k, n;
//     cin >> n;
//     for (k = 1; k <= n; k++)
//     {
//         for(i=1;i<=k;i++)
//         {
//             cout<<"#";
//         }
//         for(j=1;i<=n-k;i++)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()                                 //PAttern 2...
// {
//     int n,i,j,k;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         cout<<"#";
//     cout<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int st=1;
//     int sp=0;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=st;j++)
//         {
//             cout<<"#\t";
//         }
//         cout<<endl;
//         st=st+1;
//     }
// }
// int main()                                    //Pattern 5
// {
//     int n;
//     cin>>n;
//     int st=4;
//     int sp=0;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=sp;j++)
//         {
//             cout<<" \t";
//         }
//         for(int j=1;j<=st;j++)
//         {
//             cout<<"#\t";
//         }
//         cout<<endl;
//         st=st-1;
//         sp=sp+1;
//     }
// }

// int main()                                   //Pattern 6
// {
//     int n;
//     cin>>n;
//     int st=1;
//     int sp=n/2;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=sp;j++)
//           { cout<<" \t";}
//         for(int j=1;j<=st;j++)
//           { cout<<"# \t";}
//         cout<<endl;
//         if(i<=n/2)
//         {
//             st=st+2;
//             sp=sp-1;
//         }
//         else
//         {
//              st=st-2;
//             sp=sp+1;
//         }
//     }
//     return 0;
// }

// int main()                                   //Pattern 7
// {
//     int n,i,j;
//     cin>>n;
//     int st1=(n+1)/2;
//     int st2=(n+1)/2;
//     int sp=1;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=st1;j++)
//         {
//             cout<<"*";
//         }
//         for(j=1;j<=sp;j++)
//         {
//             cout<<" ";
//         }
//         for(j=1;j<=st2;j++)
//         {
//             cout<<"*";
//         }
//         if(i<=n/2)
//         {
//             st1=st1-1;
//             sp=sp+2;
//             st2=st2-1;
//         }
//         else{
//              st1=st1+1;
//             sp=sp-2;
//             st2=st2+1;
//         }
//         cout<<endl;
//     }
// }

// int main()                              //hw 1
// {
//     int n,i,j;
//     cin>>n;
//     int st1=1,sp=5,st2=1;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=st1;j++)
//             cout<<"#\t";
//         for(j=1;j<=sp;j++)
//             cout<<" \t";
//         for(j=1;j<=st2;j++)
//             cout<<"#\t";
//         st1=st1+1;
//         sp=sp-2;
//         st2=st2+1;
//         cout<<endl;
//     }
// }

// int main(){                               //Pattern 8 & 9
//     int n;
//     cin>>n;
//     int i,j,st=1,sp=4;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=sp;j++)
//         cout<<" ";
//     cout<<"*";
//     cout<<endl;
//     sp=sp-1;
//     }

// }

// int main()                                  //Pattern 10
// {
//     int n;
//     cin >> n;
//     int i, j;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             if ((i-j == 0) || ((i + j) == (n + 1)))
//                 cout << "*\t";
//             else
//                 cout << "\t";
//         }
//         cout << endl;
//     }
// }


// int main(){                                   //Pattern 11
//     int n;
//     cin>>n;
//     int sp1=n/2;
//     int sp2=-1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=sp1;j++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//         for(int j=1;j<=sp2;j++)
//         {
//             cout<<" ";
//         }
//         if(i!=1&&i!=n)
//         {
//             cout<<"*";
//         }
//         if(i<=n/2)
//         {
//             sp1=sp1-1;
//             sp2=sp2+2;
//         }
//         else{
//           sp1=sp1+1;
//             sp2=sp2-2;
//         }
//         cout<<endl;
//     }
// }


// int main(){                                      //Pattern 12
// int n;
// cin>>n;
// int st=1;
// int a=0,b=1;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=st;j++)
//     {
//       cout<<a<<" ";
//       int c=a+b;
//       a=b;
//       b=c;
//     }
//     st=st+1;
//     cout<<endl;
// }
// }


// int main(){                                          //Patternnn
//     int n;
//     cin>>n;
//     int st=1;
//     int num=1;
//     for(int i=1;i<=n;i++)
//     {
//       for(int j=1;j<=num;j++)
//       {
//         cout<<j<<" ";       
//       }
//       st=st+1;
//       num=num+1;
//       cout<<endl;
//     }
// }


// int main()                                           //PAttern 13
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {
//         int val=1;
//         for(int j=0;j<=i;j++)
//         {
//             cout<<val<<" ";
//             val=val*(i-j)/(j+1);
//         }
//         cout<<endl;
//     }
// }


// int main()                                          //Pattern 15
// {
//     int n;
//     cin>>n;
//     int sp=n/2;
//     int st=1;
//     int oval=1;
//     for(int i=1;i<=n;i++)
//     {
//         int val=oval;
//         for(int j=1;j<=sp;j++)
//         {
//             cout<<"\t";
//         }
//         for(int j=1;j<=st;j++)
//         {
//             if(j<=st/2)
//             {
//                 cout<<val<<"\t";
//                 val++;
//             }
//             else
//             {
//                 cout<<val<<"\t";
//                 val--;
//             }
//         }
//         if(i<=n/2)
//         {
//             st=st+2;
//             sp=sp-1;
//             oval++;
//         }
//         else{
//             st=st-2;
//             sp=sp+1;
//             oval--;
//         }
//         cout<<endl;
//     }
// }


// int main()                                         //Pattern 16
// {
//     int n;
//     cin>>n;
//     int st=1;
//     int sp=n/2;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=sp;j++)
//         {
//             if(i==n/2+1)
//             cout<<"*\t";
//             else
//             cout<<"\t";
//         }
//         for(int j=1;j<=st;j++)
//         cout<<"*\t";
//         if(i<=n/2)
//         st=st+1;
//         else
//         st=st-1;
//         cout<<endl;
//     }
// }


// int main()                                            //Pattern 17 not complete
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j==1||j==n)
//             cout<<"*\t";
//             else if(i>n/2&&(i==j||i+j==n+1))
//                   cout<<"*\t";
//                   else
//                   cout<<"\t";
//         cout<<endl;
//         }
//     }
// }


// int main()                                  //decimal to anybase
// {
//     int n=634;
//     int b=8,rv=0,p=1;
//     while(n!=0)
//     {
//         int dig=n%b;
//         n=n/b;
//         rv=rv+dig*p;
//         p=p*10;
//     }
//     cout<<rv;
// }


// int main()                              //anybase to decimal
// {
//     int n=1172,b=8,rv=0,p=1;
//     while(n!=0)
//     {
//         int dig=n%10;
//         n=n/10;
//         rv=rv+dig*p;
//         p=p*b;
//     }
//     cout<<rv;
// }


// int getanybasetodecimal(int n,int b)        //anybase to anybase
// {
//     int rv=0,p=1;
//     while(n!=0)
//     {
//         int dig=n%10;
//         n=n/10;
//         rv=rv+dig*p;
//         p=p*b;
//     }
//     return rv;
// }
// int getdecimaltoanybase(int n, int b)
// {
//     int rv=0,p=1;
//     while(n!=0)
//     {
//         int dig=n%b;
//         n=n/b;
//         rv=rv+dig*p;
//         p=p*10;
//     }
//     return rv;
// }
// int getvalue(int n,int b1,int b2)
// {
//     int dec=getanybasetodecimal(n,b1);
//     int dey=getdecimaltoanybase(dec,b2);
//     return dey;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int sb,db;
//     cin>>sb >> db;
//     int res=getvalue(n,sb,db);
//     cout<<res;
//     return 0;
// }


// int getsum(int n1,int n2,int b)               //anybase addition
// {
//     int ans=0,p=1,carry=0;
//     while(n1!=0 || n2!=0 ||carry!=0)
//     {
//         int ld1=n1%10;
//         int ld2=n2%10;
//         n1=n1/10;
//         n2=n2/10;
//         int sum=ld1+ld2+carry;
//         int rem=sum%b;
//         int quo=sum/b;
//         ans=ans+rem*p;
//         carry=quo;
//         p=p*10;
//     }
//     return ans;
// }
// int main()
// {
//     int n1,n2,b;
//     cin>>n1>>n2>>b;
//     int d=getsum(n1,n2,b);
//     cout<<d;
//     return 0;
// }

// int getdiff(int n1,int n2, int b)               //anybase substraction
// {
//     int ans=0,p=1;
//     int borrow=0;
//     while(n1>0)
//     {
//         int ld1=n1%10;
//         int ld2=n2%10;
//         n1=n1/10;
//         n2=n2/10;
//         int diff=ld1-borrow-ld2;
//         if(diff<0)
//         {
//             borrow=1;
//             diff=diff+b;
//         }
//         ans=ans+diff*p;
//         p=p*10;
//     }
//     return ans;
// }
// int main()
// {
//     int n1,n2,b;
//     cin>>n1>>n2>>b;
//     int d=getdiff(n1,n2,b);
//     cout<<d;
//     return 0;
// }

// int gmwsd(int n1,int d,int b)                  //anybase multiplication
// {
//     int ans=0,p=1,carry=0;
//     while(n1!=0||carry!=0)
//     {
//         int ld=n1%10;
//         n1=n1/10;
//         int product=ld*d+carry;
//         int rem=product%b;
//         int quo=product/b;
//         ans=ans+rem*p;
//         p=p*10;
//         carry=quo;
//     }
//     return ans;
// }
// int getsum(int n1,int n2,int b)
// {
//     int ans=0,p=1,carry=0;
//     while(n1!=0 || n2!=0 || carry!=0)
//     {
//        int ld1=n1%10;
//        int ld2=n2%10;
//        n1=n1/10;
//        n2=n2/10;
//        int sum=ld1+ld2+carry;
//        int rem =sum%b;
//        int quo=sum/b;
//        ans=ans+rem*p;
//        carry=quo;
//        p=p*10;
//     }
//     return ans;
// }
// int getmultiplication(int n1,int n2,int b)
// {
//     int ans=0,p=1;
//     while(n2!=0)
//     {
//         int d=n2%10;
//         n2=n2/10;
//         int res=gmwsd(n1,d,b);
//         ans=getsum(ans,res*p,b);
//         p=p*10;
//     }
//     return ans;
// }
// int main()
// {
//     int n1,n2,b;
//     cin>>n1>>n2>>b;
//     int m=getmultiplication(n1,n2,b);
//     cout<<m;
//     return 0;
// }
