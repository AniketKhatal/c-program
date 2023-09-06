//Menu Driven program;
// case 1:Enter any number and reverse it
// case 2:Check whather number is palindrome or not;
// case 3:Calulate the sum all digit
// case 4:Print 1st and last number of digit
// case 5:Swap 1st and last number

import java.util.*;
public class MenuApp{
	public static void main(String x[]){
		int ch,ch1;
		Scanner sc=new Scanner(System.in);
		do{
		
		System.out.printf("\n1.reverse number \n2.palindrome check \n3.sum of all digit \n4.print 1st and last \n5.Swap 1st and last");
		System.out.println("Enter your choice:");
		ch=sc.nextInt();
		
		switch(ch){
			case 1:
				int num;
				System.out.println("Enter the number:");
				num=sc.nextInt();
				while(num!=0){
					int rem=num%10;
					rev=rev*10+rem;
					num=num/10;
				}
					System.out.printlbn(rev);
					
			break;
		}
		System.out.println("Do want to continue:);
		ch1=sc.nextInt();
		}
		while(ch1==1);
	}
}