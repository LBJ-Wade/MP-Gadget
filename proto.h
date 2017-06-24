#ifndef PROTO_H
#define PROTO_H

void allocate_memory(void);
void begrun(int RestartFlag, int RestartSnapNum);

void density(void);
void energy_statistics(void);

int find_next_outputtime(int time);

void grav_short_tree(void);
void hydro_force(void);
void init(int RestartSnapNum);
void run(void);
void runtests(void);
void savepositions(int num, int reason);

void long_range_init(void);
/*Defined in gravpm.c*/
void  gravpm_force(int noforce);


#ifdef LIGHTCONE
void lightcone_init(double timeBegin);
void lightcone_cross(int p, double oldpos[3]);
void lightcone_set_time(double a);
#endif

#endif //PROTO_H
