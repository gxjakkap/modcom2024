#include <stdio.h>
#include <math.h>

#define R 6371.0 // Radius of Earth in kilometers

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif


// Function to convert degrees to radians
double toRadians(double deg){
    return (deg * M_PI) / 180;
}


// Function to calculate distance using Haversine formula
double haversine(double lat1, double lat2, double lon1, double lon2) {
    double dLat = toRadians(lat2 - lat1);
    double dLon = toRadians(lon2 - lon1);
    double lat1Rad = toRadians(lat1);
    double lat2Rad = toRadians(lat2);

    double a = sin(dLat / 2) * sin(dLat / 2) +
               cos(lat1Rad) * cos(lat2Rad) *
               sin(dLon / 2) * sin(dLon / 2);

    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return R * c; // return what?
}

//main

int main(){
    double lat1, lat2, lon1, lon2;
    printf("Enter latitude and longitude of point 1 (degrees): ");
    scanf("%lf %lf", &lat1, &lon1);
    printf("Enter latitude and longitude of point 2 (degrees): ");
    scanf("%lf %lf", &lat2, &lon2);

    printf("The distance between the points is: %lf kilometers", haversine(lat1, lat2, lon1, lon2));
    return 0;
}