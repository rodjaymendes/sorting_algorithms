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

