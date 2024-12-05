#ifndef READ_FILE_TO_STRING_H
#define READ_FILE_TO_STRING_H

// Reads a file into a null-terminated string and returns it. On error, returns NULL.
// NOTE: This does not check for null bytes in the file, so non-text files may appear
// prematurely truncated.
char* read_file_to_string(const char* path);

#endif // READ_FILE_TO_STRING_H
