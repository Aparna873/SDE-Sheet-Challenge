vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int ptr1 = m - 1;
    int ptr2 = n - 1;
    int mergePtr = m + n - 1;

    while (ptr1 >= 0 && ptr2 >= 0) {
        if (arr1[ptr1] >arr2[ptr2]) {
            arr1[mergePtr] = arr1[ptr1];
            ptr1--;
        } else {
            arr1[mergePtr] = arr2[ptr2];
            ptr2--;
        }
        mergePtr--;
    }

    while (ptr1 >= 0) {
        arr1[mergePtr] = arr1[ptr1];
        ptr1--;
        mergePtr--;
    }
	 while (ptr2 >= 0) {
        arr1[mergePtr] = arr2[ptr2];
        ptr2--;
        mergePtr--;
    }
	return arr1;
}