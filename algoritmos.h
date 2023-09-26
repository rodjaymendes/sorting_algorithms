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
    int i, x, j;
    for (i = 1; i < n; i++) {
    	printf("bubble\n");
        x = array[i];

        j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            j = j - 1;

        }
        array[j + 1] = x;
    }
}

void shell_sort(int array[], int n) {
    int i, x, j;
    for (i = 1; i < n; i++) {
    	printf("shell\n");
        x = array[i];

        j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            j = j - 1;

        }
        array[j + 1] = x;
    }
}


void selection_sort(int array[], int n) {
    int i, x, j;
    for (i = 1; i < n; i++) {
    	printf("selection\n");
        x = array[i];

        j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            j = j - 1;

        }
        array[j + 1] = x;
    }
}


