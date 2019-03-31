// returns sum of array elements
int arraySum (int arr[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++) sum += (*(arr+i));
    return sum;
}

// returns smallest value in the array
int arraySmallest (int arr[], int n) {
    int smallest = *(arr+0);
    for (int i=0; i<n; i++)
        if (*(arr+i)<smallest)
            smallest = *(arr+i);
    return smallest;
}

// returns smallest value index in the array
int arraySmallestIndex (int arr[], int n) {
    int smallest = *(arr+0);
    for (int i=0; i<n; i++)
        if (*(arr+i)<smallest)
            smallest = i;
    return smallest;
}