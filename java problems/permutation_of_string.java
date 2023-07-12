import java.util.Scanner;
public class permutation_of_string {
    public static void printpermutation(String harsh,String deepak) //harsh=abc
    {
        if(harsh.length()==0)
        {
            System.out.println(deepak);
            return;
        }
        for (int i=0;i<harsh.length();i++)
        {
            char ch=harsh.charAt(i);
            String lpart=harsh.substring(0,i);
            String rpart=harsh.substring(i+1);
            String roq=lpart+rpart;
            printpermutation(roq,deepak+ch);
        }
    }

    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        String str=scn.next();
        printpermutation(str,"");
    }
}
