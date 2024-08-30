#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
    // Simplified condition check
    if (temperature < 0 || temperature > 45 ||
        soc < 20 || soc > 80 ||
        chargeRate > 0.8) {
        // Print error message based on condition
        if (temperature < 0 || temperature > 45) {
            printf("Temperature out of range!\n");
        } else if (soc < 20 || soc > 80) {
            printf("State of Charge out of range!\n");
        } else {
            printf("Charge Rate out of range!\n");
        }
        return 0;
    }
    return 1;
}
int main() {
    // Simplified assertions
    assert(batteryIsOk(25, 70, 0.7));  // Should pass
    assert(!batteryIsOk(50, 85, 0));   // Should fail
}
