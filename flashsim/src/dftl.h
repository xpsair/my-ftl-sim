/* 
 * Contributors: Youngjae Kim (youkim@cse.psu.edu)
 *               Aayush Gupta (axg354@cse.psu.edu)
 *
 * In case if you have any doubts or questions, kindly write to: youkim@cse.psu.edu 
 * 
 * Description: This is a header file for dftl.c.  
 * 
 */

#include "type.h"

#define MAP_INVALID 1 
#define MAP_REAL 2
#define MAP_GHOST 3

#define CACHE_INVALID 0
#define CACHE_VALID 1

struct ftl_operation * opm_setup();

struct opm_entry {
  _u32 free  : 1;
  _u32 ppn   : 31;
  int  cache_status;
  int  cache_age;
  int  map_status;
  int  map_age;
  int  update;
};

struct omap_dir{
  unsigned int ppn;
};

#define MAP_ENTRIES_PER_PAGE 512

sect_t opagemap_num;
struct opm_entry *opagemap;
