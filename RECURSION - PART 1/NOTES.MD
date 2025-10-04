🌀 RECURSION
→ When a function repeatedly calls itself to solve a problem.
→ It is a method of solving computational problems where the solution depends on solutions to smaller instances of the same problem.

✅ To Do Recursion, We Should Know:
- Base Case – The smallest, simplest version of the problem where recursion stops.
Example: if (n == 0) return 1;
- Kaam (Work) – What we need to do in each function call.
Example: Multiply, add, compare, etc.
- Recursive Call – The inner function that moves us toward the base case.
Example: return x * printXn(x, n - 1);

🧠 CALL STACK
- Every recursive call is pushed onto the call stack.
- The stack stores:
- Function parameters
- Local variables
- Return address
- When the base case is hit, the stack unwinds in reverse order.

🔁 Example Flow:
printXn(2, 3)
→ printXn(2, 1)
→ printXn(2, 0) → returns 1
→ returns 2 * 1 = 2
→ returns 2 * 2 = 4
→ returns 2 * 4 = 8


⚠️ Stack Overflow
Occurs when the call stack exceeds its memory limit.
🔍 Common Reasons:
- Too many local variables in each call (e.g., large arrays or objects).
- Missing base case – leads to infinite recursion.
- Too deep recursion – especially in problems with large input sizes.

🧠 Tips to Avoid Stack Overflow
- Always define a clear and reachable base case.
- Minimize local memory usage inside recursive functions.
- For large inputs, consider converting recursion to iteration or using tail recursion (if supported).
