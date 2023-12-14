#include <avr/io.h>
#include <util/delay.h>

// PB5 corresponds to pin 13, which is connected to the on-board "L" led.

int main(void) {
	DDRB = 0b00100000; // set the PB5 pin to be an output pin

	while (1) {
		PORTB = 0b00100000; // set pin PB5
		_delay_ms(1000);

		PORTB = 0b00000000; // reset pin PB5
		_delay_ms(1000);
	}
}
