#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
#define MAX_FILENAME_LENGTH 255
#define MAX_VOLUME_NAME_LENGTH 32
#define MAX_FREE_BLOCKS 1000
#define MAX_INODES 100

typedef struct DirectoryEntry
{
char fileName[MAX_FILENAME_LENGTH + 1]; // Array to store file name + null
int location; // File location
int size; // File size in bytes
char type[10]; // Type of file (i.e directory, file blob)
int isUsed; // Flag to indicate whether the entry is used
time_t createdAt; // Timestamp for file creation
time_t modifiedAt; // Timestamp for file modification
time_t lastAccessed; // Timestamp for last access to the file
} DirectoryEntry;


typedef struct VolumeControlBlock{
uint32_t total_blocks; // Total number of blocks in the volume
uint32_t free_blocks; // Number of free blocks in the volume
uint32_t block_size; // Size of each block in bytes
// Volume name
char volume_name[MAX_VOLUME_NAME_LENGTH];
// List of free block numbers
uint32_t free_block_list[MAX_FREE_BLOCKS];
// Inode table
uint32_t inode_table[MAX_INODES];
// Let me know if we need more data fields
// I suggest adding the following
uint32_t freeSpaceStartBlock;
uint32_t rootStart;
//VCB signature
Long signature;
} VolumeControlBlock;

typedef struct FreeSpaceManagement {
    int* freeBlocks;
    // we are going to need more variables
} FreeSpaceManagement;




