#include <stdio.>
#include <string.h>
#include "libhttp.h"
#include "functionslist.h"
#include "functions.h"

int main (int argc, char *argv[]) {
    struct httplib_context *ctx;
    struct httplib_callbacks callbacks;

    // take user input for port number and number of threads
    if (argc < 3) {
        fprintf(stderr, "No port and/or no number of threads supplied");
        fprintf(stderr, "Please supply port number and number of threads as arguments to the file");
        exit(1);
    }
    char *PORT = argv[1];
    char *NUM_THREADS = argv[2];
    const char *options[] = {"listening_ports", PORT, "num_threads", NUM_THREADS, NULL};

    memset(&callbacks, 0, sizeof(callbacks));

    ctx = httplib_start(&callbacks, 0, options);

    httplib_set_request_handler(ctx, HOME_URI, (*num_funcs_ptr_arr[HOME])(num), 0);
    httplib_set_request_handler(ctx, SQUARE_URI, (*num_funcs_ptr_arr[SQUARE])(num), 0);
    httplib_set_request_handler(ctx, CUBE_URI, (*num_funcs_ptr_arr[CUBE])(num), 0);
    httplib_set_request_handler(ctx, PRIME_URI, (*num_funcs_ptr_arr[PRIME])(num), 0);

    httplib_set_request_handler(ctx, HELLO_URI, (*num_funcs_ptr_arr[HELLO])(name), 0);
    httplib_set_request_handler(ctx, PINGPONG_URI, (*num_funcs_ptr_arr[PINGPONG])(name), 0);

    getchar();

    httplib_stop(ctx);

    return 0;
}


