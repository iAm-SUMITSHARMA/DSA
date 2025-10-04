// PRACTIC QUESTION : BUBBLE SORT ANALYSIS

// Find TC of - this nested loops:
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1])
        };
    }
}

// PRACTIC QUESTION : INSERTION SORT ANALYSIS

// Find TC of - this nested loops:
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        while (j >= 0 && arr[j] > arr[i])
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = arr[i];
    }
}

// PRACTIC QUESTION : SELECTION SORT ANALYSIS

// Find TC of - this nested loops:
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

// PRACTIC QUESTION : COUNT SORT ANALYSIS

// Find TC of - this nested loops:
void countSort(vector<int> &arr)
{
    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> count(maxVal + 1, 0);

    // Count frequency
    for (int num : arr)
        ++count[num];

    // Reconstruct sorted array
    int idx = 0;
    for (int i = 0; i <= maxVal; ++i)
    {
        while (count[i]--)
            arr[idx++] = i;
    }
}

In BINARY SEARCH : We Get O(logn) / LOGARITHMIC TC
                   int binSearch
    == == == == == == ==
    = >>>

            //=======================================
            *Time Complexity = total calls *time in each call

          *Space Complexity = maximum depth * memory / space in each call
                              // Calculate Time Complexity & Space Complexity for these question...

// Sum of N natural numbers:
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

//=======================================
// Calculate Time Complexity & Space Complexity for these question...

// Nth Fibonacci
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

//=======================================
// Calculate Time Complexity & Space Complexity for these question...

// Merge Sort
void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si, j = mid + 1;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }
    // Copy back to original===
    for (int i = si, x = 0; i <= ei; i++)
    {
        arr[i] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, mid, ei);
}
