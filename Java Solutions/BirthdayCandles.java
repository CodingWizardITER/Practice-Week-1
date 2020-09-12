import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'birthdayCakeCandles' function below.
     *
     * The function is expected to return an INTEGER. The function accepts
     * INTEGER_ARRAY candles as parameter.
     */

    /**
     * LOGIC :- To count the number of maximum height of the candle from the
     * enetered height of the candles
     */

    public static int birthdayCakeCandles(List<Integer> candles) {
        // Write your code here

        // Length of the candles array
        int len = candles.size();

        // If there are no candles in the array
        if (len == 0) {
            return 0;

        }

        // First element of the candles array
        int max = candles.get(0);

        // Check for maximum heigth of the candle
        for (int i = 0; i < len; i++) {
            if (candles.get(i) > max) {
                max = candles.get(i);
            }
        }
        int count = 0;

        // Number of candles having maximum height
        for (int i = 0; i < len; i++) {
            if (max == candles.get(i)) {
                count++;
            }
        }

        // Return count of maximum height of the candles
        return count;
    }

}

public class BirthdayCandles {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int candlesCount = Integer.parseInt(bufferedReader.readLine().trim());

        String[] candlesTemp = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        List<Integer> candles = new ArrayList<>();

        for (int i = 0; i < candlesCount; i++) {
            int candlesItem = Integer.parseInt(candlesTemp[i]);
            candles.add(candlesItem);
        }

        int result = Result.birthdayCakeCandles(candles);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
