#ifndef TIMESTEP_H
#define TIMESTEP_H

/*Flat array containing all active particles:
set in run.c: find_next_sync_point_and_drift*/
extern int NumActiveParticle;
extern int *ActiveParticle;

extern int TimeBinCount[TIMEBINS];
extern int TimeBinCountSph[TIMEBINS];
extern int TimeBinActive[TIMEBINS];

extern int FirstInTimeBin[TIMEBINS];
extern int LastInTimeBin[TIMEBINS];
extern int *NextInTimeBin;
extern int *PrevInTimeBin;

void timestep_allocate_memory(int MaxPart);
int find_active_timebins(int next_kick);
void reconstruct_timebins(void);
void set_global_time(double newtime);
void advance_and_find_timesteps(void);
double find_dt_displacement_constraint(void);
int is_timebin_active(int i);
/*Update the timebin linked lists when a new particle is forked*/
void timebin_add_particle_to_active(int parent, int child, int timebin);

#endif
