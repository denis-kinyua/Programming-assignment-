
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 1D ARRAY - WEEKLY REVENUE TRACKER
    float revenue[7];
    float total = 0, average;
    int i;

    char days[7][10] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    printf("HOTEL MANAGEMENT SYSTEM\n");

    printf("\n1D ARRAY - WEEKLY REVENUE TRACKER\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter revenue for %s: ", days[i]);
        scanf("%f", &revenue[i]);

        total = total + revenue[i];
    }

    average = total / 7;

    printf("\nTotal Weekly Revenue = %.2f\n", total);
    printf("Average Daily Revenue = %.2f\n", average);


    // 2D ARRAY - ROOM OCCUPANCY (ONE BRANCH)

    int occupancy[5][10];
    int occupied, vacant;

    srand(time(NULL));

    printf("\n2D ARRAY - ROOM OCCUPANCY\n");

    for(i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for(int j = 0; j < 10; j++)
        {
            occupancy[i][j] = rand() % 2;

            if(occupancy[i][j] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        printf("\nFloor %d:\n", i + 1);
        printf("Occupied Rooms = %d\n", occupied);
        printf("Vacant Rooms = %d\n", vacant);
    }


    // 3D ARRAY - MULTIPLE BRANCHES

    int chain[3][5][10];
    int totalOccupied = 0;

    printf("\n3D ARRAY - MULTIPLE BRANCHES\n");

    for(i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            for(int k = 0; k < 10; k++)
            {
                chain[i][j][k] = rand() % 2;

                if(chain[i][j][k] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    printf("\nTotal Occupied Rooms Across All Branches = %d\n",
           totalOccupied);

    printf("\nEnd of Hotel Management System.\n");

    return 0;
}
