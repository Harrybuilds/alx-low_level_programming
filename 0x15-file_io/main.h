#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>


typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint32_t e_version;
    uint64_t e_entry;
} ElfHeader;


ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

const char* getElfType(uint16_t e_type);

const char* getOsAbi(uint8_t e_ident);

void printBasicElfInfo(ElfHeader header);

#endif
