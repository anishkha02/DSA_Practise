import java.util.*;
public class subsequence {
    public static ArrayList<String> subs(String str) {
        if (str.length() == 0) {
            ArrayList<String> bres = new ArrayList<>();
            bres.add(" ");
            return bres;
        }
        char ch = str.charAt(0);
        String ros = str.substring(1);
        ArrayList<String> rres = subs((ros));
        ArrayList<String> mres = new ArrayList<>();
        for (int i = 0; i < rres.size(); i++) {
            mres.add(rres.get(i));
        }
        for (int i = 0; i < rres.size(); i++) {
            mres.add(ch + rres.get(i));
        }
        return mres;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        ArrayList<String>harsh=subs(str);
        System.out.println(harsh);
    }
}