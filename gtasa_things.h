#include <stdint.h>
#include "GTASA_STRUCTS.h"

#define SET_TO(__a1, __a2) *(void**)&(__a1) = (void*)(__a2)

extern void* hGTASA;
extern int nColorFilter;
extern uintptr_t pGTASA;

void Redirect(uintptr_t addr, uintptr_t to);