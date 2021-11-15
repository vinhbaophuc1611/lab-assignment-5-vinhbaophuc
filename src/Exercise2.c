/*
2.	Receive an array of all distinguished integers, return indices of the two numbers
such that they add up to a specific target.
Ex:
 ___________________________________________
| Input:  2 7 11 15(array) 9(target)        |
| Output: [0 1]                             |
|___________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex2(int arr[], int n, int target){
	//Your codes here
	int ans1, ans2;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] <= target){
                ans1 = i;
                ans2 = j;
            }
        }
    }
	
    if(ans1 < ans2) printf("[%d %d]", ans1, ans2);
    else printf("[%d %d]", ans2, ans1);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int target = atoi(argv[argc]);
	argc--;
	int testcase[argc], i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}

	Ex2(testcase, argc, target);
	
	return 0;
}
