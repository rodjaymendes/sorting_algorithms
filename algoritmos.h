void insertion_sort(int array[], int n) {
    int i, x, j;
    for (i = 1; i < n; i++) {
        x = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = x;
    }
}

void bubble_sort(int array[], int n) {
    int i, j, x;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                x = array[j];
                array[j] = array[j + 1];
                array[j + 1] = x;
            }
        }
    }
}



void shell_sort(int array[], int n) {
    int x, i, j, y;
    for (x = n / 2; x > 0; x /= 2) {
        for (i = x; i < n; i++) {
            y = array[i];
            for (j = i; j >= x && array[j - x] > y; j -= x) {
                array[j] = array[j - x];
            }
            array[j] = y;
        }
    }
}

void selection_sort(int array[], int n) {
    int i, j, min_index, x;

    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        x = array[i];
        array[i] = array[min_index];
        array[min_index] = x;
    }
}



