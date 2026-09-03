#include<stdio.h>

int main(){

    char Incident_ID[10];
    char Analyst_name[10];
    int Number_of_affected_systems;
    int Estimated_recovery_cost;
    float Downtime_in_hours;
    int total_cost;


    printf("\nSECURITY INCIDENT REPORT\n\n");

    printf("Enter the Incident ID: ");
    scanf(" %9s", Incident_ID);

    printf("Enter the Analyst name: ");
    scanf(" %9s", Analyst_name);

    printf("Enter the Number of affected systems: ");
    scanf("%d", &Number_of_affected_systems);  

    printf("Enter the Estimated recovery cost per affected system: ");
    scanf("%d", &Estimated_recovery_cost);

    printf("Enter the Downtime in hours: ");
    scanf("%f", &Downtime_in_hours);

    printf("\nSECURITY INCIDENT REPORT\n\n");
    printf("Incident ID: %s\n", Incident_ID);
    printf("Analyst name: %s\n", Analyst_name);
    printf("Affected systems: %d\n", Number_of_affected_systems);
    printf("Downtime in hours: %.2f hours\n", Downtime_in_hours);

    total_cost = (Number_of_affected_systems * Estimated_recovery_cost);
    printf("Total estimated cost of the incident: %d\n", total_cost);

    return 0;
}
