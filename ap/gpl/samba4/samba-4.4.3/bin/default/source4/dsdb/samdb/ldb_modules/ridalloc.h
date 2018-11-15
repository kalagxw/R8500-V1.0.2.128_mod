#ifndef __DEFAULT_SOURCE4_DSDB_SAMDB_LDB_MODULES_RIDALLOC_H__
#define __DEFAULT_SOURCE4_DSDB_SAMDB_LDB_MODULES_RIDALLOC_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/dsdb/samdb/ldb_modules/ridalloc.c  */

int ridalloc_allocate_rid(struct ldb_module *module, uint32_t *rid, struct ldb_request *parent);
int ridalloc_allocate_rid_pool_fsmo(struct ldb_module *module, struct dsdb_fsmo_extended_op *exop,
				    struct ldb_request *parent);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_DSDB_SAMDB_LDB_MODULES_RIDALLOC_H__ */
