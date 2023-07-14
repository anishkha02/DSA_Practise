import java.util.Scanner;
public class floodfill {
    public static void Floodfill(int [][] maze,int sr,int sc,String bsf,boolean [][]visited) {
       if (sr<0||sc<0||sr>=maze.length||sc>=maze[0].length||maze[sr][sc]==1||visited[sr][sc]==true)
       {
           return;
       }
       if(sr==maze.length-1 && sc==maze[0].length-1)
       {
           System.out.println(bsf);
           return;
       }
       visited[sr][sc]=true;
       Floodfill(maze,sr-1,sc,bsf+"t",visited);
        Floodfill(maze,sr,sc-1,bsf+"l",visited);
        Floodfill(maze,sr+1,sc,bsf+"d",visited);
        Floodfill(maze,sr,sc+1,bsf+"r",visited);
        visited[sr][sc]=false;


    }

    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int m=scn.nextInt();
        int [][]a=new int[n][m];
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=scn.nextInt();
            }
        }
        boolean visited[][]=new boolean[n][m];
        Floodfill(a,0,0,"",visited);
    }
}
