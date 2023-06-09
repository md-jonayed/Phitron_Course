// Suppose there are M1 workers who can complete a work in D days. Unfortunately, some of them became sick before the start of the work, and now there are M2 workers. Can you tell how many days it will take for them to complete the work?

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int initialPeople,peopleAvailable,initialEstimatedDays;
    scanf("%d %d %d",&initialPeople,&peopleAvailable,&initialEstimatedDays);
    int dayExtraNeeded = (initialEstimatedDays*initialPeople)/peopleAvailable;
    printf("%d\n",dayExtraNeeded);
}
