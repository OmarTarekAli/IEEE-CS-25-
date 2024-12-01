import java.util.Scanner;

public class ParticleCollision {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        String dir = sc.next();
        long[] pos = new long[n];
        
        for (int i = 0; i < n; i++) {
            pos[i] = sc.nextLong();
        }
        
        long minCollisionTime = Long.MAX_VALUE;

        for (int i = 0; i < n - 1; i++) {
            if (dir.charAt(i) == 'R' && dir.charAt(i + 1) == 'L') {
                long collisionTime = (pos[i + 1] - pos[i]) / 2;
                minCollisionTime = Math.min(minCollisionTime, collisionTime);
            }
        }

        System.out.println(minCollisionTime == Long.MAX_VALUE ? -1 : minCollisionTime);
    }
}
