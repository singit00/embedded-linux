#include <iostream>

int main()
{
    int sensorValue = 25;
    int threshold = 30;

    bool alarmActive = false;

    if (sensorValue > threshold)
    {
        alarmActive = true;
    }

    std::cout << "Sensor Value: " << sensorValue << '\n';
    std::cout << "Alarm Active: " << alarmActive << '\n';

    return 0;
}