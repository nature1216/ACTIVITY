import java.util.Scanner;

public class prob81 {
	public static void main(String argv[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println("#");
		if((n+2)%4 == 0) // ������ ������ �Ʒ�
		{
			
			for(int i=0;i<(n+2)/4;i++) {
				if(i%2 == 0) System.out.print("#");
				else System.out.print(".");
			}
			
		}
		else if((n+1)%4 == 0) // �Ʒ� �����ʿ��� ������
		{
			for(int i=0;i<n;i++) System.out.print("#");
		}
	}
	
}
