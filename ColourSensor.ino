#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>  // Include stdio.h for sprintf

// Define pin mappings based on DDRA and DDRL registers
/*#define S0_PIN PA0
  #define S1_PIN PA1
  #define S2_PIN PA2
  #define S3_PIN PA3
  #define SENSOR_OUT_PIN PL2
*/
void set() {
#define S0_PIN PA0
#define S1_PIN PA1
#define S2_PIN PA2
#define S3_PIN PA3
#define SENSOR_OUT_PIN PL2
  // Set S0, S1, S2, S3 as output pins on PORTA
  DDRA |= (1 << S0_PIN) | (1 << S1_PIN) | (1 << S2_PIN) | (1 << S3_PIN);

  // Set sensorOut as input pin on PORTL
  DDRL &= ~(1 << SENSOR_OUT_PIN);

  // Setting frequency scaling to 20%
  PORTA |= (1 << S0_PIN);  // S0 = HIGH
  PORTA &= ~(1 << S1_PIN); // S1 = LOW

}

// Function to read pulse width from the sensor pin
unsigned int readPulse() {
  unsigned int count = 0;
  // Wait for the pulse to start
  while (!(PINL & (1 << SENSOR_OUT_PIN)));
  // Count the length of the pulse
  while (PINL & (1 << SENSOR_OUT_PIN)) {
    count++;
    _delay_us(1);  // Delay for 1 microsecond
  }
  return count;
}

int checkfreq(int colflag) {
  float redFrequency, greenFrequency, blueFrequency;

  char buffer[16];  // Buffer to hold the converted string
  // Reading RED (R) frequency
  PORTA = (PORTA & ~((1 << S2_PIN) | (1 << S3_PIN)));  // S2 = LOW, S3 = LOW
  redFrequency = 0;
  for (int i = 0; i < 10; i++) {
    redFrequency += readPulse();
  }
  redFrequency /= 10;
  sprintf(buffer, "%u", redFrequency);
  //uart_print(buffer);
  //uart_print(" ");  // Newline for readability

  // Reading GREEN (G) frequency
  PORTA = (PORTA & ~(1 << S2_PIN)) | (1 << S3_PIN);  // S2 = LOW, S3 = HIGH
  greenFrequency = 0;
  for (int i = 0; i < 10; i++) {
    greenFrequency += readPulse();
  }
  greenFrequency /= 10;
  sprintf(buffer, "%u", greenFrequency);
  //uart_print(" G = ");
  //uart_print(buffer);
  //uart_print(" ");  // Newline for readability

  // Reading BLUE (B) frequency
  PORTA = (PORTA & ~(1 << S3_PIN)) | (1 << S2_PIN);  // S2 = HIGH, S3 = LOW
  blueFrequency = 0;
  for (int i = 0; i < 10; i++) {
    blueFrequency += readPulse();
  }
  blueFrequency /= 10;
  sprintf(buffer, "%u", blueFrequency);
  //uart_print(" B = ");
  //uart_print(buffer);
  //uart_print("\n");  // Newline for readability

  /*
    if (redFrequency > 220) {
      return 2;
    }else if (greenFrequency < 160 && blueFrequency > 50) {
      return 3;
    }else {
      return 1;
    }*/
  float colourDistanceG = 0;
  float colourDistanceR = 0;
  float colourDistanceW = 0;
  if (colflag == 0) { //far
    colourDistanceG = sqrt(pow(redFrequency-390, 2) + pow(greenFrequency-318, 2) + pow(blueFrequency-106, 2));
    //colourDistanceR = sqrt(pow(redFrequency-270, 2) + pow(greenFrequency-240, 2) + pow(blueFrequency-104, 2));
    colourDistanceW = sqrt(pow(redFrequency-300, 2) + pow(greenFrequency-273, 2) + pow(blueFrequency-90, 2));
    //colourDistanceG = sqrt(pow(redFrequency-420, 2) + pow(greenFrequency-350, 2) + pow(blueFrequency-137, 2));
    colourDistanceR = sqrt(pow(redFrequency-320, 2) + pow(greenFrequency-385, 2) + pow(blueFrequency-130, 2));
    //colourDistanceW = sqrt(pow(redFrequency-297, 2) + pow(greenFrequency-233, 2) + pow(blueFrequency-85, 2));
    if (colourDistanceG < colourDistanceR && colourDistanceG < colourDistanceW) {
      return 2;
    }
    else if (colourDistanceR < colourDistanceG && colourDistanceR < colourDistanceW) {
      return 1;
    }
    else {
      return 3;
    }
  }
  if (colflag == 1) { //medium
    colourDistanceG = sqrt(pow(redFrequency-330, 2) + pow(greenFrequency-273, 2) + pow(blueFrequency-97, 2));
    //colourDistanceR = sqrt(pow(redFrequency-170, 2) + pow(greenFrequency-231, 2) + pow(blueFrequency-69, 2));
    colourDistanceW = sqrt(pow(redFrequency-225, 2) + pow(greenFrequency-182, 2) + pow(blueFrequency-67, 2));
    //colourDistanceG = sqrt(pow(redFrequency-340, 2) + pow(greenFrequency-334, 2) + pow(blueFrequency-113, 2));
    colourDistanceR = sqrt(pow(redFrequency-240, 2) + pow(greenFrequency-325, 2) + pow(blueFrequency-108, 2));
    //colourDistanceW = sqrt(pow(redFrequency-185, 2) + pow(greenFrequency-157, 2) + pow(blueFrequency-67, 2));
    if (colourDistanceG < colourDistanceR && colourDistanceG < colourDistanceW) {
      return 2;
    }
    else if (colourDistanceR < colourDistanceG && colourDistanceR < colourDistanceW) {
      return 1;
    }
    else {
      return 3;
    }
  }
  if (colflag == 2) { //close
    colourDistanceG = sqrt(pow(redFrequency-135, 2) + pow(greenFrequency-107, 2) + pow(blueFrequency-36, 2));
    //colourDistanceR = sqrt(pow(redFrequency-62, 2) + pow(greenFrequency-119, 2) + pow(blueFrequency-33, 2));
    colourDistanceW = sqrt(pow(redFrequency-43, 2) + pow(greenFrequency-34, 2) + pow(blueFrequency-14, 2));
    //colourDistanceG = sqrt(pow(redFrequency-130, 2) + pow(greenFrequency-113, 2) + pow(blueFrequency-33, 2));
    colourDistanceR = sqrt(pow(redFrequency-70, 2) + pow(greenFrequency-135, 2) + pow(blueFrequency-38, 2));
    //colourDistanceW = sqrt(pow(redFrequency-55, 2) + pow(greenFrequency-40, 2) + pow(blueFrequency-17, 2));
    if (colourDistanceG < colourDistanceR && colourDistanceG < colourDistanceW) {
      return 2;
    }
    else if (colourDistanceR < colourDistanceG && colourDistanceR < colourDistanceW) {
      return 1;
    }
    else {
      return 3;
    }
  }
}
