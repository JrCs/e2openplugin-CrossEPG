#ifndef _XMLTV_PARSER_H_
#define _XMLTV_PARSER_H_

bool xmltv_parser_import (char *filename, void(*progress_callback)(int, int), volatile bool *stop);
void xmltv_parser_set_iso639 (char *iso639);

#endif // _XMLTV_PARSER_H_
