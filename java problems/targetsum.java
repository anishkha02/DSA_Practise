import java.util.Scanner;
public class targetsum {
    public static void printTargetsum(int []a,int i,String set,int sos,int tar) //sos=sum of subset
    {
        if(i==a.length)
        {
            if(sos==tar)
            {
                System.out.println(set+"");
            }
            return;
        }
        printTargetsum(a,i+1,set+a[i]+" ",sos+a[i],tar);
        printTargetsum(a,i+1,set,sos,tar);
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int []a=new int[n];
        for(int i=0;i< a.length;i++)
        {
            a[i]=scn.nextInt();
        }
        int tar=scn.nextInt();
        printTargetsum(a,0,"",0,tar);
    }
}
