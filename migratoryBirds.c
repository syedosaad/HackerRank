int migratoryBirds(int arr_count, int* arr) {
    int freq[6] = {0};

    for(int i = 0; i < arr_count; i++) {
        freq[arr[i]]++;
    }

    int max = 0, birds = 1;

    for(int i = 1; i <= 5; i++) {
        if(freq[i] > max) {
            max = freq[i];
            birds = i;
        }
    }

    return birds;
}
