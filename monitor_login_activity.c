#include <stdio.h>

int main(){
    
    int Total_login_attempts;
    float Successful_login_attempts;
    float Failed_login_attempts;

    printf("Enter the Successful login attempts:");
    scanf("%f", &Successful_login_attempts);

    printf("Enter the Failed Number of attempts:");
    scanf("%f", &Failed_login_attempts);

    Total_login_attempts = Successful_login_attempts + Failed_login_attempts;
    printf("Total Number of attempts= %d\n", Total_login_attempts);

    float Failed_login_percentage = ((float)Failed_login_attempts / Total_login_attempts) * 100;
    printf("Failed login percentage: %.2f%%\n", Failed_login_percentage);

    float Successful_login_percentage = ((float)Successful_login_attempts / Total_login_attempts) * 100;
    printf("Successful login percentage: %.2f%%\n", Successful_login_percentage);

    return 0;

} 