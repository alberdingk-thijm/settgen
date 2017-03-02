
typedef struct logitem {
    // date
    int date;
    char* msg;
    struct logitem* next;
} logitem;

static int add_log(int date, char** msg);
