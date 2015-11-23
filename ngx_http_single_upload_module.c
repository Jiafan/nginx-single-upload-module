#include <stdio.h>
#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

typedef struct {
	ngx_uint_t status;
	ngx_str_t msg;
}ngx_http_single_upload_loc_conf_t;

static char* ngx_http_cname(ngx_conf_t* cf,ngx_command_t* cmd,void* conf);

static void* ngx_http_print_create_loc_conf(ngx_conf_t* cf);

static char* ngx_http_print_merge_loc_conf(ngx_conf_t* cf, void* parent, void* child);

static ngx_command_t ngx_http_single_upload_commands[]={
	{
		ngx_string("cname"),
		NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
		ngx_http_cname,
		NGX_HTTP_LOC_CONF_OFFSET,
		offsetof(ngx_http_print_loc_conf_t,output_words),
		NULL
	},
	ngx_null_command
};