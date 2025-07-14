#include "server.h"

int isEmpty(char *line) {
    if (line == NULL) return 1;
    else if (strlen(line) == 0) return 1;
    else if (line[0] == '\n') return 1;
    else if (line[0] == '\r') return 1;
    else return 0;
}

void solution() {
    FILE* in = fopen("request.txt", "r");
    FILE* out = fopen("response.txt", "w");

    char buff[MAX_LINE];
    fgets(buff, MAX_LINE, in);
    
    char* token = strtok(buff, " ");
    char method[MAX_LINE];
    strcpy(method, token);

    token = strtok(NULL, " ");
    char path[MAX_LINE];
    strcpy(path, token);

    token = strtok(NULL, "\n");
    char http[MAX_LINE];
    strcpy(http, token);

    char content_type[MAX_LINE];
    strcpy(content_type, "N/A");
    while(fgets(buff, MAX_LINE, in) != NULL && !isEmpty(buff)) {
        char* token = strtok(buff, " ");
        if (strcmp(token, "Content-Type:") == 0) {
            token = strtok(NULL, "\n");
            strcpy(content_type, token);
        }
    }

    fprintf(out, "HTTP/1.1 200 OK\nContent-Type: text/plain\n\n");
    fprintf(out, "Method: %s\n", method);
    fprintf(out, "Path: %s\n", path);
    fprintf(out, "Content-Type: %s\n", content_type);
    
    
    char body[MAX_BODY];
    while (fgets(body, MAX_BODY, in) != NULL) {
        fprintf(out, "Body: %s", body);
    }

    fclose(in);
    fclose(out);
}