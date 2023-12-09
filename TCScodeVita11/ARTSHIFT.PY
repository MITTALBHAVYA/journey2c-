def min_shifts_to_gather_arts(n, row):
    counts = {'H': 0, 'S': 0, 'P': 0, 'D': 0}

    # Count the occurrences of valid art types
    for art in row:
        if art in counts:
            counts[art] += 1

    # Find the maximum count among the valid art types
    max_count = max(counts.values())

    # Calculate the minimum shifts needed
    shifts = n - max_count

    return shifts

# Read input
n = int(input())
row = input().strip()

# Calculate and print the result
result = min_shifts_to_gather_arts(n, row)
print(result)
