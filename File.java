import java.util.Scanner;

class File {
    

public static void main (String[] args) {
    int m;
    int b;
    int a;
    Scanner in = new Scanner(System.in);
    System.out.println("Enter M: ");
    m = in.nextInt();
    System.out.println("Enter B: ");
    b = in.nextInt();
    a = m - b;
    System.out.println("A = " + a);

}
}


