/* mbed Microcontroller Library
 * Exemple de depart
 * Fait clignoter la led
 * Affiche PI puis un compteur sur le port serie
 * Utilise la version mbed-OS 6.16.0
 * Mise à jour du 20/01/2023
 */

#include "mbed.h"

#define WAIT_TIME_US 1000000 
DigitalOut led1(LED1);

int main()
{
    double pi=0;
    printf("Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
    pi=4*atan(1.0);
    printf("Print Pi = %f\n", pi);
    pi=0;
    while (true)
    {
        led1 = !led1;
        printf("Print float counter = %f\n", pi);
        pi=pi+1;
        wait_us(WAIT_TIME_US);  // attente bloquante
    }
}
