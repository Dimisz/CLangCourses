#include <stdio.h>

double metersToFeet(double);
double gramsToPounds(double);
double celciusToFahrenheight(double);

int main(void){
    int numInputs;
    scanf("%d", &numInputs);
    
    double value;
    char unit;
    
    int i;
    for(i = 0; i < numInputs; i++){
        //printf("i: %d numInputs: %d\n", i, numInputs);
        scanf("%lf %c", &value, &unit);
//        scanf("%lf", &value);
//        scanf("%c", &unit);
        //printf("%s", unit);
        if(unit == 'm'){
            printf("%.6lf ft\n", metersToFeet(value));
            //printf("Executed m func\n");
        }
        else if(unit == 'g'){
            printf("%.6lf lbs\n", gramsToPounds(value));
            //printf("Executed g func\n");
        }
        else if(unit == 'c'){
            printf("%.6lf f\n", celciusToFahrenheight(value));
            //printf("Executed c func\n");
        }
//        else{
//            printf("Something's wrong\n");
//        }
//        printf("i: %d\n", i);
//        printf("value: %lf unit: %c\n", value, unit);
        //printf("exited loop\n");
    }
    
    return 0;
}

double metersToFeet(double meters){
    return meters * 3.2808;
}

double gramsToPounds(double grams){
    return grams * 0.002205;
}

double celciusToFahrenheight(double celcius){
    return 32 + 1.8 * celcius;
}
