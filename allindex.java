import java.util.Scanner;


public class allindex {

    public static int[] all(int []a,int x,int i,int c)
    {
        if(i==a.length)
        {
            return new int[c];

        }
        else if(a[i]==x)
        {
            int []fs=all(a,x,i+1,c+1);
            a[c]=i;
            return fs;
        }
        else
        {
            int []fs=all(a,x,i+1,c);
            return fs;
        }
    }

    public static void main(String[] args) {
        try (Scanner scn = new Scanner(System.in)) {
            int n = scn.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = scn.nextInt();
            }
            int key = scn.nextInt();
            all(a, key, 0, 0);
        }
    }
}
