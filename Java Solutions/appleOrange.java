import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class appleOrange {

    // Complete the countApplesAndOranges function below.
    /**
     * LOGIC:- To find the number of apples and oranges that lies between the range
     * of s and t
     */
    static void countApplesAndOranges(int s, int t, int a, int b, int[] apples, int[] oranges, int m, int n) {
        int ap = 0, or = 0;

        // Logic to find the number of apples that falls between s and t
        for (int i = 0; i < m; i++) {
            int p = (apples[i] + a);
            if (p >= s && p <= t)
                ap++;
        }

        // Logic to find the number of oranges that falls between s and t
        for (int j = 0; j < n; j++) {
            int p = (oranges[j] + b);
            if (p >= s && p <= t)
                or++;
        }

        System.out.println(ap);
        System.out.println(or);

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String[] st = scanner.nextLine().split(" ");

        int s = Integer.parseInt(st[0]);

        int t = Integer.parseInt(st[1]);

        String[] ab = scanner.nextLine().split(" ");

        int a = Integer.parseInt(ab[0]);

        int b = Integer.parseInt(ab[1]);

        String[] mn = scanner.nextLine().split(" ");

        int m = Integer.parseInt(mn[0]);

        int n = Integer.parseInt(mn[1]);

        int[] apples = new int[m];

        String[] applesItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < m; i++) {
            int applesItem = Integer.parseInt(applesItems[i]);
            apples[i] = applesItem;
        }

        int[] oranges = new int[n];

        String[] orangesItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int orangesItem = Integer.parseInt(orangesItems[i]);
            oranges[i] = orangesItem;
        }

        countApplesAndOranges(s, t, a, b, apples, oranges, m, n);

        scanner.close();
    }
}
