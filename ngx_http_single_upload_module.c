#include <stdio.h>
#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

typedef struct {
	ngx_int_t status,
	ngx_str_t msg
}ngx_http_single_upload_loc_conf_t;