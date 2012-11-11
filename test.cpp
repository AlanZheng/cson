#include <stdio.h>
#include "cson.h"

int main( int argc, char** argv )
{
    const char* my_json_string = "[ \
        \"ver\", \
        \"down\", \
        \"country\" \
    ]";

    CSON *root = CSON_Parse(my_json_string);
    CSON* ver = CSON_CreateString( "test" );
    CSON_AddItemToArray( root, ver );
    int size = CSON_GetArraySize( root );
    for( int inx = 0; inx < size; inx++ )
    {
        CSON* item = CSON_GetArrayItem( root, inx );
        if( item != NULL )
        {
            printf( "%s\n", item->valuestring );
        }
    }


    CSON_Delete(root);

    return 0;
}
