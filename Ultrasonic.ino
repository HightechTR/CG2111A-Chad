#include <avr/io.h>
#include <util/delay.h>

void setup_ultrasonicPins() {
  #define TRIGGER_PIN 7  // PC7 for Trigger
  #define ECHO_PIN 6     // PC6 for Echo
  #define TIMEOUT 1300   // Timeout for echo pulse in microseconds
    // Set trigger pin as output
    DDRC |= (1 << TRIGGER_PIN);
    // Set echo pin as input
    DDRC &= ~(1 << ECHO_PIN);
}

void sendPulse() {
    // Ensure trigger pin is low before sending a pulse
    PORTC &= ~(1 << TRIGGER_PIN);
    _delay_us(2);

    // Send a 10us high pulse on trigger pin
    PORTC |= (1 << TRIGGER_PIN);
    _delay_us(10);
    PORTC &= ~(1 << TRIGGER_PIN);
}

double measureDistance() {
    unsigned int count = 0;
    double distance;

    // Wait for echo pin to go high or timeout
    while (!(PINC & (1 << ECHO_PIN)) && count < TIMEOUT) {
        count++;
        _delay_us(1);
    }

    if (count >= TIMEOUT) {
        return -1;  // Timeout occurred
    }

    count = 0;  // Reset count for measuring high time
    // Measure how long the echo pin stays high
    while ((PINC & (1 << ECHO_PIN)) && count < TIMEOUT) {
        count++;
        _delay_us(1);
    }

    if (count < TIMEOUT) {
        // Calculate distance: (time in microseconds * speed of sound in cm/us) / 2
        distance = (count / 2.0 / 1000000) * 338.0 * 100.0;
        return distance;
    } else {
        return -1;  // Timeout occurred
    }
}
