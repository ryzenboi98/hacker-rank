void reverse_array(int *arr, int start, int end) {
    int aux;

    while(start < end) {
        aux = arr[start];
        arr[start] = arr[end];
        arr[end] = aux;

        start++;
        end--;
    }
}

int main()
{
    int num, *arr, i;
    
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    reverse_array(arr, 0, num - 1);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    return 0;
}
