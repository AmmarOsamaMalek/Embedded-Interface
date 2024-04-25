

#ifndef TEMP_FILTER_H_
#define TEMP_FILTER_H_

#define FILTER_RANGE 10

u16 InQueue(u16 new_temp);
u16 DeQueue(void);
void TempFilter_Init(void);
void TempFilterRannable(void);
u16 TempFilter_Getter(void);


#endif /* TEMP_FILTER_H_ */