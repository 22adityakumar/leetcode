int minCost(char* colors, int* neededTime, int neededTimeSize) {
    int totalTime = 0;
    int maxTime = neededTime[0];

    for (int i = 1; i < neededTimeSize; i++) {
        if (colors[i] == colors[i - 1]) {
            // remove the balloon with smaller time
            if (neededTime[i] < maxTime) {
                totalTime += neededTime[i];
            } else {
                totalTime += maxTime;
                maxTime = neededTime[i];
            }
        } else {
            // new color group
            maxTime = neededTime[i];
        }
    }

    return totalTime;
}
