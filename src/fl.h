#include <stdbool.h>
#ifndef __NMFL__
#define __NMFL__
#include "fl_types.h"

static inline bool fl_isEmpty(fl_t *fl)
{

    return (fl->numChunks == 0 || (fl->minSize == 0 && fl->maxSize == 0));
}
nmchunk_t *fl_smallestChunk(fl_t *fl);
void fl_insert(fl_t *fl, nmchunk_t *chunk);
#endif /*__NMFL__*/