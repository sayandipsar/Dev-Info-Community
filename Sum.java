//Sum Of n user inputted numbers in Java
import java.util.*;
class Sum{
    public static void main(String[] args) {
        int n;
        Scanner scan=new Scanner(System.in);
        System.out.print("How many numbers to add ");
        n=scan.nextInt();
        int i;
        int[] a=new int[n];
        System.out.print("Enter "+n+" numbers ");
        for(i=0;i<n;i++)
            a[i]=scan.nextInt();
        int s=0;
        for(i=0;i<n;i++)
            s=s+a[i];
        System.out.println("Sum of inputted numbers is "+s);
    }
        
}