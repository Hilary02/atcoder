import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
  static int[] NAB = new int[3];
  static int[] sums = new int[1000001];
  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    NAB = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
    long result = 0;
    for (int i = 1; i <= NAB[0]; i++) {
      int sum = get(i);
      if (sum >= NAB[1] && sum <= NAB[2])
        result += i;
    }
    System.out.println(result);
  }

  public static int get(int n) {
    if (sums[n] == 0) {
      int[] num = Arrays.stream(Integer.toString(n).split("")).mapToInt(Integer::parseInt)
      toArray();
      if (num.length > 1) {
        String s = "";
        for (int i = 0; i < num.length - 1; i++) {
          s += num[i];
        }
        sums[n] = num[num.length - 1] + get(Integer.parseInt(s));
      } else {
        sums[n] = n;
      }
    }
    return sums[n];
  }
}