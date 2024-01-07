/* Stuck in a Rut (Java)
Anna Deng (annadeng08)
Submitted: Sun, Dec 20, 2020 17:48:49 EST
Contest: USACO 2020 December Contest, Bronze 
Missed a couple of test cases for a total score of 933 */
import java.util.*;

public class grassy {
    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);
        int N = scan.nextInt();
        int [] eastcowsx = new int [N];
        int [] eastcowsy = new int [N];
        int [] eastcowsindex = new int [N];
        int [] northcowsx = new int [N];
        int [] northcowsy = new int [N];
        int [] northcowsindex = new int [N];
        int etracker = 0;
        int ntracker = 0;
        int [] grasseaten = new int [N];
        for(int i = 0;i<N;i++) {
            if(scan.next().charAt(0) == 'E') {
                eastcowsx[etracker] = scan.nextInt();
                eastcowsy[etracker] = scan.nextInt();
                eastcowsindex[etracker] = i;
                etracker++;
            }
            else {
                northcowsx[ntracker] = scan.nextInt();
                northcowsy[ntracker] = scan.nextInt();
                northcowsindex[ntracker] = i;
                ntracker++;
            }
            grasseaten[i] = 1000000000;
        }
        int meetingx = 0;
        int meetingy = 0;
        boolean idk = false;
        boolean uhoh = false;
        for(int i = 0;i<etracker;i++) {
            for(int j = 0;j<ntracker;j++) {
                uhoh = false;
                idk = false;
                if(northcowsy[j]>=eastcowsy[i] || eastcowsx[i]>=northcowsx[j] || eastcowsx[i]==0 || eastcowsy[i]==0 || northcowsx[j]==0 || northcowsy[j]==0) {
                    idk = true;
                }
                else {
                    meetingx = northcowsx[j];
                    meetingy = eastcowsy[i];
                    if((meetingx-eastcowsx[i])>(meetingy-northcowsy[j])) {
                        for(int k = 0;k<etracker;k++) {
                            if(k==i)
                                continue;
                            if((meetingx-eastcowsx[k])<(eastcowsy[k]-northcowsy[j]) && (eastcowsy[k]-northcowsy[j])<(meetingy-northcowsy[j]) && northcowsy[j]<eastcowsy[k] && eastcowsx[k]<northcowsx[j]) {
                                uhoh = true;
                                break;
                            }
                        }
                        if(!uhoh)
                            grasseaten[eastcowsindex[i]] = Math.min(grasseaten[eastcowsindex[i]],(meetingx-eastcowsx[i]));
                    }
                    else if((meetingx-eastcowsx[i])<(meetingy-northcowsy[j])) {
                        for(int k = 0;k<ntracker;k++) {
                            if(k==j)
                                continue;
                            if((meetingy-northcowsy[k])<(northcowsx[k]-eastcowsx[i]) && (northcowsx[k]-eastcowsx[i])<(meetingx-eastcowsx[i]) && northcowsy[k]<eastcowsy[i] && eastcowsx[i]<northcowsx[k]) {
                                uhoh = true;
                                break;
                            }
                        }
                        if(!uhoh)
                            grasseaten[northcowsindex[j]] = Math.min(grasseaten[northcowsindex[j]],(meetingy-northcowsy[j]));
                    }
                }
            }
        }
        for(int i = 0;i<N;i++) {
            if(grasseaten[i]!=1000000000)
                System.out.println(grasseaten[i]);
            else System.out.println("Infinity");
        }
    }
}
