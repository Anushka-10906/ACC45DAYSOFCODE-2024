# cook your dish here
# Number of test cases
T = int(input().strip())
results = []

# Process each test case
for _ in range(T):
    # Read tastiness values of ingredients A, B, C, D
    a, b, c, d = map(int, input().strip().split())
    
    # Calculate all possible tastiness sums
    max_tastiness = max(a + c, a + d, b + c, b + d)
    
    # Store the result for this test case
    results.append(max_tastiness)

# Output all results for each test case
for result in results:
    print(result)