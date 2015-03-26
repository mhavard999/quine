#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

char * catall(char * dest, int n_args, ...){
  va_list ap;
  va_start(ap, n_args);
  int i;
  char *cpointer;
  for(i=0; i<n_args; i++){
    cpointer = va_arg(ap, char*);
    strcat(dest, cpointer);
  }
  va_end(ap);
  return dest;
}

char * repr(char * s){
  int i = 0;
  int j = -1;
  char c;
  char *t = malloc(strlen(s) * 2);
  t[++j] = '\"';
  while ((c = s[i++])) {
    if (c == '\\'){
      t[++j] = '\\';
      t[++j] = '\\';
    }
    else if(c == '\n'){
      t[++j] = '\\';
      t[++j] = 'n';
    }
    else if (c == '\"'){
      t[++j] = '\\';
      t[++j] = '\"';
    }
    else
      t[++j] = c;
  }
  t[++j] = '\"';
  t[++j] = '\0';
  return t;
}

int main(){
  char firstbit[] = "#include <stdio.h>\n#include <string.h>\n#include <stdlib.h>\n#include <stdarg.h>\n\nchar * catall(char * dest, int n_args, ...){\n  va_list ap;\n  va_start(ap, n_args);\n  int i;\n  char *cpointer;\n  for(i=0; i<n_args; i++){\n    cpointer = va_arg(ap, char*);\n    strcat(dest, cpointer);\n  }\n  va_end(ap);\n  return dest;\n}\n\nchar * repr(char * s){\n  int i = 0;\n  int j = -1;\n  char c;\n  char *t = malloc(strlen(s) * 2);\n  t[++j] = '\\\"';\n  while ((c = s[i++])) {\n    if (c == '\\\\'){\n      t[++j] = '\\\\';\n      t[++j] = '\\\\';\n    }\n    else if(c == '\\n'){\n      t[++j] = '\\\\';\n      t[++j] = 'n';\n    }\n    else if (c == '\\\"'){\n      t[++j] = '\\\\';\n      t[++j] = '\\\"';\n    }\n    else\n      t[++j] = c;\n  }\n  t[++j] = '\\\"';\n  t[++j] = '\\0';\n  return t;\n}\n\nint main(){\n  char firstbit[] = ";
  char first_line[] = "  char second_line[2500];\n  second_line[0] = '\\0';\n  catall(second_line, 7, \n         firstbit, \n         repr(firstbit),\n         \";\\n  char first_line[] = \", \n         repr(first_line),\n         \";\\n\",\n         first_line,\n         \";\\n  printf(\\\"%s\\\\n\\\", second_line);\\n}\")";
  char second_line[2500];
  second_line[0] = '\0';
  catall(second_line, 7, 
         firstbit, 
         repr(firstbit),
         ";\n  char first_line[] = ", 
         repr(first_line),
         ";\n",
         first_line,
         ";\n  printf(\"%s\\n\", second_line);\n}");
  printf("%s\n", second_line);
}
