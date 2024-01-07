/* Daisy Chains (Java)
Anna Deng (annadeng08)
Submitted: Sun, Dec 20, 2020 14:22:43 EST
Contest: USACO 2020 December Contest, Bronze */
import java.util.*;

public class flowers {
    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        int N = scan.nextInt();
        int [] flowerpetals = new int [N];
        for(int i = 0;i<N;i++) {
            flowerpetals[i] = scan.nextInt();
        }
        int count = N;
        int sum = 0;
        int average = 0;
        for(int i = 0;i<N;i++) {
            for(int j = i+1;j<N;j++) {
                sum = 0;
                for(int k = i;k<j+1;k++) {
                    sum+=flowerpetals[k];
                }
                average = sum/(j-i+1);
                if(average*(j-i+1)==sum) {
                    for(int l = i;l<j+1;l++) {
                        if(flowerpetals[l]==average) {
                            count++;
                            break;
                        }
                    }
                }
            }
        }
        System.out.print(count);
    }
}
