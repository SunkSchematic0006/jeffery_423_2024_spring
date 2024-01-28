/*
 * libctab.h - stripped down hash table for the Ct (C-with-tables) runtime.
 */

#ifndef LIBCTAB_H
#define LIBCTAB_H


typedef struct c_table {
   int nBuckets;			/* # of buckets */
   int nEntries;			/* # of symbols in the table */
   struct c_entry **tbl;
   } *CTable;

/*
 * Entry in C table.
 */
typedef struct c_entry {
   int s_or_i;				/* 0 if string, 1 if int */
   union {
      char *s;				/* string (key) */
      int   i;				/* integer (key) */
      } key;
   char *value;
   struct c_entry *next;
   } *CTableEntry;

/*
 * Prototypes
 */
CTable new_ct(int size);			/* create C table */
void delete_ct(CTable);				/* destroy C table */

/*
 * Insert into table, using either string, or integer key.
 */
int insert_s(CTable, char *, char *);		/* enter into table */
int insert_i(CTable, int, char *);		/* enter into table */

/*
 * Lookup in a table, returning pointer to the table entry "value" slot,
 * which can then be read from or assigned.
 */
char ** lookup_s(CTable, char *);
char ** lookup_i(CTable, int);

#endif					/* LIBCTAB_H */
