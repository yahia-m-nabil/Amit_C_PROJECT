
/**Header guard*/

#ifndef _STD_H_INCLUDED
#define _STD_H_INCLUDED

typedef enum {false, true}               bool;


/* only postive data  */
typedef unsigned char                    u8;
typedef unsigned short int              u16;
typedef unsigned long int               u32;
typedef unsigned long long int			u64;

/* postive data & negative data */
typedef signed char                      s8;
typedef signed short int                s16;
typedef signed long int                 s32;
typedef signed long long int            s64;

/* floating data type  */
typedef  float                          f32;
typedef  double                         f64;

/* ERRORS  */
#define OK 1
#define NOK 0



#endif  /**_STD_H_*/
