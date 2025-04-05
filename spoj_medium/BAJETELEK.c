#include <stdio.h>
#include <stdlib.h>

// Funkcja obliczająca pole wielokąta za pomocą wzoru trapezów (Shoelace theorem)
double polygon_area(int* x, int* y, int num_points) {
    double area = 0.0;
        for (int i = 0; i < num_points - 1; i++) 
        {
            area += x[i] * y[i + 1] - y[i] * x[i + 1];
        }
        area += x[num_points - 1] * y[0] - y[num_points - 1] * x[0];
    return abs(area) / 2.0;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        int num_points_black = 0, num_points_gray = 0;

        // Zwiększony rozmiar tablicy
        int x_black[2000], y_black[2000];
        int x_gray[2000], y_gray[2000];

        // Odczytaj dane dla czarnego obszaru
        int x, y;
            while (scanf("%d %d", &x, &y) != "\n")
            {
                x_black[num_points_black] = x;
                y_black[num_points_black] = y;
                num_points_black++;
                if (num_points_black > 1 && x_black[0] == x && y_black[0] == y) 
                {
                    break;
                }
            }

            // Odczytaj dane dla szarego obszaru
            while (scanf("%d %d", &x, &y) != "\n") 
            {
                x_gray[num_points_gray] = x;
                y_gray[num_points_gray] = y;
                num_points_gray++;
                if (num_points_gray > 1 && x_gray[0] == x && y_gray[0] == y) 
                {
                    break;
                }
            }

        // Oblicz pola powierzchni
        double black_area = polygon_area(x_black, y_black, num_points_black);
        double gray_area = polygon_area(x_gray, y_gray, num_points_gray);

        // Oblicz zużycie tuszu
        int total_ink = (int)(10 * black_area + 6 * (gray_area - black_area));
        printf("%d\n", total_ink);

            if (i < n - 1) 
            {
                printf("\n");
            }
    }

    return 0;
}
