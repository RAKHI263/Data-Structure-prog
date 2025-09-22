#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 45};
    int item_search =45, i;

    for(i = 0; i < 5; i++) {
        if(arr[i] == item_search) {
		
           printf("Element found at index %d\n", i);
            return 0;
        }

}

    return 0;
}

