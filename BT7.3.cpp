int powerSumHelper(int X, int N, int currentNum) {
    int value = X - std::pow(currentNum, N);
    if (value == 0) {
        return 1; // Found a valid combination
    } else if (value < 0) {
        return 0; // No valid combination
    } else {
        // Recursively check for valid combinations with the next number
        return powerSumHelper(value, N, currentNum + 1) + powerSumHelper(X, N, currentNum + 1);
    }
}

int powerSum(int X, int N) {
    return powerSumHelper(X, N, 1);
}
