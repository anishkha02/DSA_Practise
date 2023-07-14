import java.util.*;
public class getkpc {
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        String shreya=scn.nextLine();
        ArrayList<String>ans=getkpc(shreya);
        System.out.println(ans);
    }
    //static String[]a={" ","abc","def","ghi","jkl","tu","zw"};
    static String[]a={" ","ab","cd","ef","gh","ijk","lmn"};
    public static ArrayList<String>getkpc(String str){
        if(str.length()==0)
        {
            ArrayList<String>base=new ArrayList<>();
            base.add("");
            return base;
        }
        char ch=str.charAt(0);
        String ros=str.substring(1);
        ArrayList<String>rr=getkpc(ros);
        String code=a[ch-'0'];
        ArrayList<String >myans=new ArrayList<>();
        for(int i=0;i<code.length();i++)
        {
            char c=code.charAt(i);
            for(int j=0;j<rr.size();j++)
            {
                myans.add(c+rr.get(j));
            }
        }
        return myans;
    }
}
