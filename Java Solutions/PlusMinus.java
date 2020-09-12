import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class PlusMinus {
    /*
     * LOGIC :- Input n numbers into an array and find the ratio of positve ,
     * negative and zero numbers
     */

    // Complete the plusMinus function below.
    static void plusMinus(int[] arr) {

        double pos = 0, neg = 0, zero = 0;

        // Length of the Array arr
        double arr_count = arr.length;
        for (int i = 0; i < arr_count; i++) {

            // Check for postive
            if (arr[i] > 0)
                pos++;

            // Check for negative
            else if (arr[i] < 0)
                neg++;

            // Check for zero
            else if (arr[i] == 0)
                zero++;

        }

        // Ratio of Positive Numbers
        System.out.println((pos / arr_count));
        // Ratio of Negative Numbers
        System.out.println((neg / arr_count));
        // Ratio of Zero Numbers
        System.out.println((zero / arr_count));
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        plusMinus(arr);

        scanner.close();
    }
}
