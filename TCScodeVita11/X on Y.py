def calculate_string_factor(X, Y, S, R):
    min_string_factor = float('inf')

    for length in range(1, len(Y) + 1):
        for i in range(len(Y) - length + 1):
            substring = Y[i:i + length]
            reversed_substring = substring[::-1]
            formed_X = substring + reversed_substring

            string_factor = (formed_X.count(substring) * S) + (formed_X.count(reversed_substring) * R)
            min_string_factor = min(min_string_factor, string_factor)

    return min_string_factor

# Example usage:
X = "abc"
Y = "abcd"
S = 2
R = 3

result = calculate_string_factor(X, Y, S, R)
print(result)
