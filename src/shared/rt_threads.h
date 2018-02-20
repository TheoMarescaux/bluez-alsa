#ifndef RT_THREADS_H_
#define RT_THREADS_H_

/* Central location for all real-time threads scheduling settings.
 *
 * Priority goes from 0 to 100 (highest).
 * Leave a gap between priorities so that test tool can be invoked.
 */

// NOTE: priorities are guestimates and should be configured in the
//       bigger picture

#define APLAY_ALSA_THREAD_SCHED_POLICY SCHED_FIFO
#define APLAY_ALSA_THREAD_RT_PRIORITY 30

#define ALSA_IO_THREAD_SCHED_POLICY SCHED_FIFO
#define ALSA_IO_THREAD_RT_PRIORITY 32

#define IO_THREAD_SCHED_POLICY SCHED_FIFO
#define IO_THREAD_RT_PRIORITY 10

#define CTL_THREAD_SCHED_POLICY SCHED_FIFO
#define CTL_THREAD_RT_PRIORITY 2

#endif /* RT_THREADS_H_ */
