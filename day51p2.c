#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int low, high, mid;
    int first = -1, last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("First occurrence = %d\n", first);
    printf("Last occurrence = %d\n", last);

    return 0;
}