#include <stdio.h>

int main() {
    // Open the file for reading
    FILE *file = fopen("elephant_seal_data.txt", "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening file\n");
        return 1;
    }

    // Read the weights into an array
    int max_size = 1000;  // Adjust this based on the expected number of weights
    int elephant_seal_data[max_size];
    int count = 0;

    while (fscanf(file, "%d", &elephant_seal_data[count]) == 1) {
        count++;
        if (count >= max_size) {
            fprintf(stderr, "Array size exceeded. Increase max_size.\n");
            break;
        }
    }

    // Close the file
    fclose(file);

    // Calculate the average weight
    if (count > 0) {
        int sum = 0;

        for (int i = 0; i < count; i++) {
            sum += elephant_seal_data[i];
        }

        double average = (double)sum / count;

        // Print the average weight
        printf("Average weight: %.2f\n", average);
    } else {
        fprintf(stderr, "No data found in the file.\n");
    }

    return 0;
}
