/*
 * Copyright (c) 2015 Kaprica Security, Inc.
 *
 * Permission is hereby granted, cgc_free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

extern "C" {
  #include <stdlib.h>
  #include <string.h>
};

#include "file.h"

#define MAX_NUM_FILES 512
#define MAX_NUM_OPENED_FILES 20

class cgc_FileManager
{
  protected:
    unsigned int numFiles;
    unsigned int numOpenedFiles;
    cgc_File *rootDir;
    cgc_File* openedFiles[MAX_NUM_OPENED_FILES];
    cgc_File *cwd;
    
    void cgc_DeleteDirectoryHelper(cgc_File* dir);

  public:
    cgc_FileManager();
    ~cgc_FileManager();

    cgc_File* cgc_GetFile(const char* name);
    void cgc_PrintFile(const char* name);
    int cgc_CreateFile(const char* name);
    int cgc_CreateDirectory(const char* name);
    int cgc_OpenFile(const char* name);
    int cgc_CloseFile(unsigned int fileno);
    int cgc_CloseAll();
    int cgc_ReadFile(unsigned int fileno, size_t pos, size_t len, char** outBuf);
    int cgc_ModifyFile(unsigned int fileno, size_t pos, char* inBuf, size_t len);
    int cgc_DeleteFile(const char* name);
    int cgc_DeleteDirectory(const char* name);
    int cgc_ChangeDirectory(const char* name);
};

#endif