## 📚 STRINGS IN C++

1. C++ strings are objects of the `string` class from the Standard Template Library (STL).

2. They offer built-in member functions like `.length()`, `.substr()`, `.find()`, etc.

3. Strings are dynamic — their size can change at runtime.

4. Support operators like `+`, `==`, `>`, `<` for manipulation and comparison.

5. Stored contiguously in memory for efficient access.

------------------------------------------------------

## 🔁 PALINDROME

1. A **palindrome** is a word that reads the same backward as forward.

2. Example: `racecar` → reversed → `racecar` ✅

3. Useful in string manipulation and algorithmic challenges.

-------------------------------------------------------

## 🔀 ANAGRAM

1. An **anagram** is formed by rearranging the letters of one word to form another.

2. Both words must use all original characters exactly once and be of equal length.

3. Example: `listen` → `silent` ✅

4 Common approaches:
  - Sort both strings and compare.
  - Use frequency maps or hash tables.

-------------------------------------------------------

# BY COPILOT==================================================


📘 CHAR ARRAYS & STRINGS IN C++ — FULL DETAILED NOTES

🔤 CHAR ARRAYS IN C++
✅ What is a Char Array?
- A char array is a sequence of characters stored in contiguous memory.
- It’s the traditional way of handling strings in C and C++ before the string class was introduced.

      char name[6] = "Sumit"; // Includes '\0' at the end


📌 Key Concepts

- Null Terminator ('\0'): Marks the end of the string. Without it, functions like strlen() won’t work correctly.
- Fixed Size: You must define the size during declaration. If the string grows, you need to reallocate manually.

🛠️ Initialization Methods

    char str1[] = "Hello"; // Automatically adds '\0'
    char str2[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Manual


📥 Input Methods

    cin >> str;              // Reads until space
    cin.getline(str, size);  // Reads full line including spaces


📤 Output
cout << str;


🔧 Common Functions (<cstring>)

    Function                     Description
    strlen(str)         | Returns length (excluding '\0)
    strcpy(a, b)        | Copies string b into a
    strcat(a, b)        | Appends string b to end of a
    strcmp(a, b)        | Compares two strings (returns 0 if equal)
    strchr(str, ch)     | Finds first occurrence of ch
    strstr(str, sub)    | Finds first occurrence of substring


⚠️ Limitations

- No dynamic resizing
- Manual memory management
- Error-prone for beginners


🧵 STRINGS IN C++

✅ What is a C++ String?
- A string in C++ is an object of the string class from the Standard Template Library (STL).
- It provides dynamic memory management and powerful built-in functions.

      string s = "Sumit";


📌 Key Advantages

- Automatically resizes
- Rich set of member functions
- Safer and easier than char arrays

🛠️ Common Operations

    s.length()s.size()            | Returns number of characters
    s.empty()                     | Checks if string is empty
    s.substr(pos, len)            | Extracts substring from position
    s.find("text")                | Finds first occurrence of substring
    s.erase(pos, len)             | Removes part of string
    s.insert(pos, "txt")          | Inserts text at position
    s.replace(pos, len, "txt")    | Replaces part of string


🔁 Operators Supported

    - + → Concatenation
    - ==, !=, <, > → Comparisons
    - [] → Access individual characters

📥 Input

    cin >> s;           // Reads until space
    getline(cin, s);    // Reads full line


🔄 Conversion Between Char Array and String

    string s = str;               // char[] → string
    strcpy(str, s.c_str());       // string → char[]



🔁 PALINDROME CHECK

✅ What is a Palindrome?
- A string that reads the same forward and backward.
- Examples: "madam", "racecar", "121"

🧠 Algorithm (Two-Pointer)
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }


🧪 Edge Cases
- Empty string → true
- Single character → true
- Case sensitivity → "Madam" ≠ "madam" unless handled

🔀 ANAGRAM CHECK

✅ What is an Anagram?
- Two strings are anagrams if they contain the same characters in any order.
- Examples: "listen" and "silent"

📌 Conditions

- Same length
- Same character frequency

🧠 Approach 1: Sort and Compare

    bool isAnagram(string a, string b) {
        if (a.length() != b.length()) return false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }


🧠 Approach 2: Frequency Count(THE BETTER WAY)

    bool isAnagram(string a, string b) {
        if (a.length() != b.length()) return false;
        int freq[256] = {0};
        for (char c : a) freq[c]++;
        for (char c : b) freq[c]--;
        for (int i = 0; i < 256; i++)
            if (freq[i] != 0) return false;
        return true;
    }



🧪 STRING ALGORITHMS IN DSA
 Algorithm                            Purpose                            Time Complexity 

| Reverse String                    | Flip characters                   | O(n)
| Palindrome Check                  | Validate Symmetry                 |  O(n)
| Anagram Check                     | Compare character frequency       | O(n log n) or O(n)
| Longest Substring Without Repeat  | Sliding window                    | O(n)
| String Matching (Naive)           | Find pattern in text              | O(n*m)
| KMP Algorithm                     | Efficient pattern matching        | O(n + m)
| Z-Algorithm                       | Pattern matching + preprocessing  | O(n)



-------------------------------------------------------------------

🔍 KMP ALGORITHM (Knuth-Morris-Pratt)==================

✅ What Is KMP?
The KMP algorithm is an efficient string matching technique used to find all occurrences of a pattern in a text. It avoids redundant comparisons by preprocessing the pattern using an auxiliary array called LPS (Longest Prefix Suffix).

🚫 Naive Approach vs ✅ KMP

    Approach    Description                                                                      TimeComplexity
    Naive     | Compares pattern with every substring. On mismatch, restarts from next char    | O(n × m)
    KMP       | Uses LPS to skip unnecessary checks. No backtracking in text                   | O(n + m)


🧠 LPS (Longest Prefix Suffix) Array
📌 Definition:
For each index in the pattern, LPS stores the length of the longest proper prefix which is also a suffix.
- Proper prefix: A prefix that is not equal to the whole string.
- Suffix: A substring that ends at the current index.
🔧 Purpose:
- Helps decide how much to shift the pattern when a mismatch occurs.
- Avoids rechecking characters that are already known to match.
🧪 Example: Pattern : SEARCH ON GOOGLE.........



🧾 KMP Algorithm Steps
🔹 Step 1: Build LPS Array

     vector<int> computeLPS(string pattern) {
         int m = pattern.length();
         vector<int> lps(m, 0);
         int len = 0, i = 1;
     
         while (i < m) {
             if (pattern[i] == pattern[len]) {
                 len++;
                 lps[i] = len;
                 i++;
             } else {
                 if (len != 0)
                     len = lps[len - 1];
                 else
                     lps[i++] = 0;
             }
         }
         return lps;
     }


🔹 Step 2: Pattern Matching Using LPS
void KMP(string text, string pattern) {
    int n = text.length(), m = pattern.length();
    vector<int> lps = computeLPS(pattern);
    int i = 0, j = 0;

      while (i < n) {
          if (text[i] == pattern[j]) {
              i++; j++;
          }
  
          if (j == m) {
              cout << "Pattern found at index " << i - j << endl;
              j = lps[j - 1]; // Continue searching
          } else if (i < n && text[i] != pattern[j]) {
              if (j != 0)
                  j = lps[j - 1];
              else
                  i++;
          }
      }
    }



📊 Time & Space Complexity
     
     Operation        Complexity
     LPS Construction   | O(m)
     Pattern Matching   | O(n)
     Total Time         | O(n+m)
     Space              | O(m)



🧪 Example

     Text: "ababcababcababc"
     Pattern: "ababc"
     Output:
     Pattern found at index 0  
     Pattern found at index 5  
     Pattern found at index 10



⚠️ Edge Cases
- Empty pattern → Always matches at index 0
- Pattern longer than text → No match
- Repeated characters → LPS handles efficiently
- Case sensitivity → "abc" ≠ "ABC" unless handled manually

📌 Applications
- Text editors (search feature)
- DNA sequence analysis
- Spam detection
- Plagiarism checkers
- Search engines
- Real-time log monitoring

🧠 Summary

     - KMP is ideal for fast and reliable pattern matching.
     - LPS array is the core optimization that avoids backtracking.
     - Each character in the text is compared at most once.
     - Efficient for large texts and repeated patterns.



-------------------------------------------------------------------

🧠 Z-Array (Core Concept)===========

📌 Definition:
For a string S, the Z-array at index i stores the length of the longest substring starting from i that matches the prefix of S.

🔧 Example:

    String: "aabxaabxcaabxaabxay"
    Z-array: [0, 1, 0, 0, 4, 1, 0, 0, 9, 1, 0, 0, 5, 1, 0, 0, 2, 1]
    - Z[4] = 4 → substring "aabx" matches prefix "aabx"
    - Z[8] = 9 → full match of "aabxaabxa" with prefix

🔍 Pattern Matching Using Z-Algorithm

🔹 Step 1: Concatenate Pattern + $ + Text

    Pattern: "abc"
    Text: "xabcabcabc"
    Combined: "abc$xabcabcabc"


🔹 Step 2: Compute Z-array for the combined string

🔹 Step 3: Scan Z-array

    - Wherever Z[i] == pattern.length(), it means the pattern occurs at position i - pattern.length() - 1 in the text.


🧾 Z-Algorithm Code (C++)

       vector<int> computeZ(string s) {
           int n = s.length();
           vector<int> Z(n, 0);
          int L = 0, R = 0;

           for (int i = 1; i < n; i++) {
               if (i > R) {
                   L = R = i;
                   while (R < n && s[R - L] == s[R]) R++;
                   Z[i] = R - L;
                   R--;
               } else {
                   int k = i - L;
                   if (Z[k] < R - i + 1)
                       Z[i] = Z[k];
                   else {
                       L = i;
                       while (R < n && s[R - L] == s[R]) R++;
                       Z[i] = R - L;
                       R--;
                   }
               }
           }
           return Z;
       }



📊 Time & Space Complexity
     
     Operation              Complexity
     Z-array Construction  | O(n)
     Pattern Matching      | O(n+m)
     Space                 | O(n+n)



⚠️ Edge Cases
- Empty pattern → No match
- Pattern longer than text → No match
- Repeated characters → Efficiently handled
- Case sensitivity → "abc" ≠ "ABC" unless handled manually
- Special delimiter $ must not appear in pattern or text

📌 Applications
- Pattern matching in large texts
- DNA sequence analysis
- Search engines
- Plagiarism detection
- Substring frequency analysis
- Spam filtering

🧠 Summary

    - Z-Algorithm builds a Z-array to find pattern matches efficiently.
    - Uses a sliding window [L, R] to avoid redundant comparisons.
    - Ideal for large-scale pattern matching problems.
    - Simpler to implement than KMP in some cases.


-------------------------------------------------------------------
-------------------------------------------------------------------
-------------------------------------------------------------------



🧠 INTERVIEW TIPS

- Prefer string over char[] unless low-level control is needed.
- Always handle edge cases: empty strings, spaces, special characters.
- Practice problems on platforms like LeetCode, Codeforces, GFG.
- Know how to convert between types and use STL functions efficiently.
- Use unordered_map<char, int> for frequency-based problems.

