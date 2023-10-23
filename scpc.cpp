#include <stdio.h>

int main() {
    setbuf(stdout, NULL);
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        int max_boxes = 0;
        for (int num_A_boxes = 0; num_A_boxes * A <= N; num_A_boxes++) {
            int remaining_apples = N - num_A_boxes * A;
            if (remaining_apples % B == 0) {
                int num_B_boxes = remaining_apples / B;
                int total_boxes = num_A_boxes + num_B_boxes;
                if (total_boxes > max_boxes) {
                    max_boxes = total_boxes;
                }
            }
        }

        printf("Case #%d\n%d\n", t, max_boxes);
    }

    return 0;
}
