import java.util.Scanner;

public class memory_size_accepted {

    public static int findMemorySize(int memorySize) {
        if ((memorySize & (memorySize - 1)) == 0) {
            return memorySize;
        }
        int powerOfTwo = 1;
        while (powerOfTwo < memorySize) {
            powerOfTwo <<= 1;
        }

        return powerOfTwo;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n, i, dataSize, memSize;
        n = sc.nextInt();
        memSize = 0;
        for (i = 0; i < n; i++) {
            dataSize = sc.nextInt();
            memSize += dataSize;
        }
        memSize = findMemorySize(memSize);
        System.out.print(memSize);
    }
}