char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0, k = 0;
    int max_len = (i > j ? i : j) + 5;
    char* result = (char*)malloc(max_len * sizeof(char));
    
    if (!result) return NULL; 

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    
    for (int l = 0; l < k / 2; ++l) {
        char temp = result[l];
        result[l] = result[k - l - 1];
        result[k - l - 1] = temp;
    }

    result[k] = '\0';
    return result;
}
