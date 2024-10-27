# Number of test cases
T = int(input().strip())
results = []

# Process each test case
for _ in range(T):
    N = int(input().strip())
    
    if N < 2:
        # If N < 2, Dracula won't reach any Tuesday
        results.append(0)
    else:
        # Calculate the number of Tuesdays
        count_tuesdays = (N - 2) // 7 + 1
        results.append(count_tuesdays)

# Print results for each test case
for result in results:
    print(result)