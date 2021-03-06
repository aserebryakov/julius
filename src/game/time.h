#ifndef GAME_TIME_H
#define GAME_TIME_H

#include "core/buffer.h"

/**
 * @file
 * Game time.
 * One year has 12 months.
 * One month has 16 days.
 * One day has 50 ticks.
 */

/**
 * Initializes game time to the given year with all other fields zero
 * @param year Year
 */
void game_time_init(int year);

/**
 * The current game year
 * 
 */
int game_time_year();

/**
 * The current game month within the year
 */
int game_time_month();

/**
 * The current game day within the month
 */
int game_time_day();

/**
 * The current game tick within the day
 */
int game_time_tick();


/**
 * Increases tick
 * @return True if the tick overflows
 */
int game_time_advance_tick();

/**
 * Increase day
 * @return True if the day overflows
 */
int game_time_advance_day();

/**
 * Increase month
 * @return True if the month overflows
 */
int game_time_advance_month();

/**
 * Increase year
 */
void game_time_advance_year();


/**
 * Saves the game time
 * @param buf Buffer
 */
void game_time_save_state(buffer *buf);

/**
 * Loads the game time
 * @param buf Buffer
 */
void game_time_load_state(buffer *buf);

#endif // GAME_TIME_H
