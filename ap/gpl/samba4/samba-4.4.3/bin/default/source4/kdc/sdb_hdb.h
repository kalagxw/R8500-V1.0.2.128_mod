#ifndef __DEFAULT_SOURCE4_KDC_SDB_HDB_H__
#define __DEFAULT_SOURCE4_KDC_SDB_HDB_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/kdc/sdb_to_hdb.c  */

int sdb_entry_ex_to_hdb_entry_ex(krb5_context context,
				 const struct sdb_entry_ex *s,
				 struct hdb_entry_ex *h);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_KDC_SDB_HDB_H__ */

