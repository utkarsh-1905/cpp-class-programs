import java.util.*;

public class solution{
    public static void main(String args[]){
        int t,l,r;
        Scanner sc = new Scanner(System.in);
        t=sc.nextInt();
        while(t>0){
            l=sc.nextInt();
            r=sc.nextInt();
            int ans=perfect(l,r);
            System.out.println(ans);
            t--;
        }
        sc.close();
    }
    static int perfect(int a,int b){
        int ans=0;
        for(int i=a;i<=b;i++){
            int newnum=sumOfDigits(i);
            if(checkPerfect(newnum)==true)
            ans++;
        }
        return ans;
    }
    static int sumOfDigits(int a){
        int sum=0;
        while(a!=0){
            sum+=a%10;
            a=a/10;
        }
        return sum;
    }
    static boolean checkPerfect(int a){
        double sqrt = Math.sqrt(a);
        if((sqrt-Math.floor(sqrt))==0)
        return true;
        else return false;
    }
}