/***********************************************************************************************
 * timer.h
 *
 * Programming Team:
 * Duy Huynh
 * Jeffrey LeCompte
 * Trung Dang
 * Brandon Scholer
 *
 * TCSS 422 - Winter 2016
 * Date: 2/10/16
 * Assignment 3
 *
 * Description:
 * Header defines structures and functions used in implementation of a timer to be used in simulation
 *
 ************************************************************************************************/

#ifndef TIMER_H_
#define TIMER_H_

typedef struct timer {
	int count;
} Timer;

typedef Timer *Timer_p;

/* Timer Constructor */
Timer_p Timer_constructor(long int);    // constructs a new Timer object in the heap

/* Utility Functions */
int Timer_countDown(Timer_p);   // decrements the Timer, returning a 1 if countdown reaches 0.

#endif /* TIMER_H_ */
