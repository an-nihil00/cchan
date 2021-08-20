#include <stdio.h>
#include <string.h>

#include <kore/kore.h>
#include <kore/http.h>

int		page(struct http_request *);

int
page(struct http_request *req)
{
	char *content = "<html><body><h1>Wow</h1></body></html>";
	http_response(req, 200, content, strlen(content));
	return (KORE_RESULT_OK);
}
