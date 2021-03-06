#ifndef CONFIG_H
#define CONFIG_H

/* UID_ISOLATED
 * UID_ISOLATED defines user id for
 * com.android.vending package installed
 * in work profile. Usually it is an
 * integer in format 1010XXX or 1010XX
 */
#define UID_ISOLATED   1010118

/* UID_MAIN
 * UID_MAIN define user id for
 * com.android.vending package installed
 * in main profile. Usually it is an integer
 * in format 10XXX or 10XX
 */
#define UID_MAIN       10118

/* NO_GSERVICES
 * NO_GSERVICES indicates wether program
 * should also prevent Google Play Services from
 * running in main profile. 
 */
#define NO_GSERVICES   1

/* UID_GSERVICES
 * UID_GSERVICES defines user id of 
 * Google Play Services in main profile.
 * Should be set when NO_GSERVICES is 1.
 */
#define UID_GSERVICES 10104

/* UID_GSERVICES2
 * UID_GSERVICES2 defines UID of second package 
 * of Google Play services that should be killed
 * if runs in main profile.
 */
#define UID_GSERVICES2 10128

/* MODNAME
 * MODNAME is a string which would be 
 * displayed in a log when daemon will
 * send any message to it.
 */
#define MODNAME        "novendingd"

/* IDLE_TIME 
 * IDLE_TIME is an integer constant that 
 * sets time in seconds between checks 
 * of process list.
 */
#define IDLE_TIME      1

/* FULL_IDLE_TIME
 * FULL_IDLE_TIME is an integer count of 
 * seconds which shows for what time 
 * com.android.vending can run in main
 * profile if there is com.android.vending
 * running in work profile.
 */
#define FULL_IDLE_TIME 5

/* DAEMONIZE
 * DAEMONIZE shows where program should
 * be run as daemon. Usually not needed
 * with init.d in android higher than
 * 15.1(8.1).
 */
#define DAEMONIZE      0

/* DEBUG
 * DEBUG enables more extnsive logging
 * when set to 1(may spam a lot in logs)
 */
#define DEBUG          0

#endif
