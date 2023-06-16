typedef int (*square)(int);
typedef int (*cube)(int);
typedef char* (*hello)(char*);
typedef int (*prime)(int);
typedef char* (*pingpong)(char*); 

int (*num_funcs_ptr_arr[])(int) = {square, cube, prime};
int (*char_funcs_ptr_arr[])(char*) = {hello, pingpong};