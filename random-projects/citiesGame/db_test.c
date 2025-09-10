#include <stdio.h>
#include <sql.h>
#include <sqlext.h>

int main(){

    SQLHENV env_handle;
    SQLHDBC db_handle;
    SQLRETURN ret;

    printf("Starting DB connectoin test...\n");

    ret = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env_handle);
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        printf("Failed to allocate environment handle\n");
        SQLFreeHandle(SQL_HANDLE_ENV, env_handle);
        return 1;
    }

    ret = SQLAllocHandle(SQL_HANDLE_DBC, env_handle, &db_handle);
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        printf("Failed to allocate database handle. Return code: %d\n", ret);
        SQLFreeHandle(SQL_HANDLE_ENV, env_handle);
        return 1;
    }

    printf("Handles allocated successfully!\n");

    SQLFreeHandle(SQL_HANDLE_ENV, db_handle);
    SQLFreeHandle(SQL_HANDLE_ENV, env_handle);
    printf("Test completed. Ready for connection\n");

    return 0;
}