#include <stdio.h>
#include <stdlib.h>

// 1. Define the enum for Vehicle Type
enum VehicleType {
    CAR = 2,
    BUS = 5,
    BIKE = 6
};

// 2. Define the struct
struct Vehicle {
    int id;
    enum VehicleType type;
    int hours;
};

int main() {
    // Allocate space for 2 vehicles using calloc (initializes to 0)
    struct Vehicle *vehicles = (struct Vehicle*) calloc(2, sizeof(struct Vehicle));
    if (vehicles == NULL) return 1;

    int tempType;

    // Read the first two vehicles
    for (int i = 0; i < 2; i++) {
        scanf("%d %d %d", &vehicles[i].id, &tempType, &vehicles[i].hours);
        vehicles[i].type = (enum VehicleType)tempType; // Cast int to enum
    }

    // 3. Use realloc to grow the array to 3 vehicles
    vehicles = (struct Vehicle*) realloc(vehicles, 3 * sizeof(struct Vehicle));
    if (vehicles == NULL) return 1;

    // Read the third vehicle
    scanf("%d %d %d", &vehicles[2].id, &tempType, &vehicles[2].hours);
    vehicles[2].type = (enum VehicleType)tempType;

    // 4. Print details and calculate fee
    for (int i = 0; i < 3; i++) {
        char *typeName;
        if (vehicles[i].type == CAR) typeName = "CAR";
        else if (vehicles[i].type == BUS) typeName = "BUS";
        else typeName = "BIKE";

        int fee = vehicles[i].hours * 20;
        printf("%d %s %d %d\n", vehicles[i].id, typeName, vehicles[i].hours, fee);
    }

    // 5. Free the memory
    free(vehicles);

    return 0;
}