# Project README

This repository consists of two C++ code files that demonstrate dynamic programming concepts. Each file serves a distinct purpose in showcasing the application of dynamic programming algorithms.

## Part a: Counting Ways (`count_ways.cpp`)

### Description

This code calculates the number of ways to arrange a given number of emails in a specific sequence. It employs dynamic programming to efficiently compute the number of ways by adding numbers in a Fibonacci-like sequence.

### How to Use

1. **Compile the Code:**
   ```bash
   g++ count_ways.cpp -o count_ways
   ```

2. **Run the Executable:**
   ```bash
   ./count_ways
   ```
   
3. **Enter Input:**
   Follow the prompt to enter the number of emails.

### Code Snippet

```cpp
#include <iostream>
#include <string>
using namespace std;

// ... [Code snippet provided]

int main() 
{
    int n;
    cout << "Enter number of emails: ";
    cin >> n;
    cout << "Number of ways: " << calculate_ways(n) << endl;
    return 0;
}
```

## Part b: Optimal Cost and Path (`optimal_cost.cpp`)

### Description

This code determines the optimal cost and path for a given set of costs associated with traversing a graph. It utilizes dynamic programming to find the minimum cost to reach each node and backtracks to identify the optimal path.

### How to Use

1. **Compile the Code:**
   ```bash
   g++ optimal_cost.cpp -o optimal_cost
   ```

2. **Run the Executable:**
   ```bash
   ./optimal_cost
   ```

   Note: The optimal cost and path for the provided graph are displayed.

### Code Snippet

```cpp
#include <iostream>
using namespace std;

// ... [Code snippet provided]

int main() 
{
    int n = 12;
    int path[SIZE];
    int costs[SIZE][SIZE] = 
    { 
        // ... [Graph matrix provided]
    };
   
    // ... [Code snippet continued]

    int cost = optimal_cost(costs, n, path);
    cout << "Optimal Cost = " << cost << endl;
    cout << "Optimal Path: ";
    
    // ... [Code snippet continued]

    return 0;
}
```

## Notes

- Ensure you have a C++ compiler installed (e.g., g++) to compile the code.
- For Part b, the input graph is hardcoded within the code. Modify the `costs` array in the `main` function to use your own graph.
- Contributions and issue reports are welcome.

## Contributors

- [Your Name]

Feel free to contribute or provide feedback. Pull requests are encouraged!

**Happy Coding!**
