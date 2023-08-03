void merge(vector<int> &arr, vector<int> &leftv, vector<int> &rightv)
{
    int i = 0, j = 0, k = 0;
    while (i < leftv.size() && j < rightv.size())
    {
        if (leftv[i] <= rightv[j])
        {
            arr[k] = leftv[i];
            i++;
        }
        else
        {
            arr[k] = rightv[j];
            j++;
        }
        k++;
    }
    while (i < leftv.size())
    {
        arr[k] = leftv[i];
        i++;
        k++;
    }
    while (j < rightv.size())
    {
        arr[k] = rightv[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int n)
{
    if (n <= 1)
    {
        return;
    }
    int mid = n / 2;
    int leftsize = mid;
    int rightsize = n - mid;

    vector<int> leftv(arr.begin(), arr.begin() + mid);
    vector<int> rightv(arr.begin() + mid, arr.end());

    mergeSort(leftv, leftsize);
    mergeSort(rightv, rightsize);
    merge(arr, leftv, rightv);
}
