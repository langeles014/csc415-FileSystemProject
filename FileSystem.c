#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
#include <FileSystem.h>

// init both vcb and fsm
VolumeControlBlock initializeVCB() {
    VolumeControlBlock vcb;
    // Initialization logic for the VCB fields
    // reference assignment 5
    return vcb;
}

FreeSpaceManagement initializeFreeSpace() {
    FreeSpaceManagement fsm;
    // Initialization logic for the free space management fields
    // reference assignment 5
    // use malloc kind of like ASSIGNMENT 5
    return fsm;
}

    // Initialization logic for the root directory (including . and .. entries)
void initializeRootDirectory(DirectoryEntry* rootDir, int blockSize) {
    // we will use blockSize to calculate how many directory entries we can fit in a block
}

// we probably need to use these similar to assignment 5
b_io_fd b_open(char *filename, int flags)
int b_read(b_io_fd fd, char *buffer, int count)
void b_write(void* data, int size, int location) {
    // going to have to write on disk
    // an additional function since we are the ones writing to disk
}
int b_close(b_io_fd fd)


int main() {
    // Initialize Volume Control Block
    VolumeControlBlock vcb = initializeVCB();

    // Initialize Free Space Management
    FreeSpaceManagement fsm = initializeFreeSpace();

    // Example root directory initialization
    int blockSize = vcb.block_size;
    DirectoryEntry rootDir[blockSize / sizeof(DirectoryEntry)];
    initializeRootDirectory(rootDir, blockSize);

    // Write VCB, Free Space Management, and Root Directory to disk
    writeToDisk(&vcb, sizeof(VolumeControlBlock), 0); // Assuming VCB starts at block 0 which is instructed
    writeToDisk(&fsm, sizeof(FreeSpaceManagement), sizeof(VolumeControlBlock) / vcb.block_size);
    writeToDisk(rootDir, blockSize, sizeof(VolumeControlBlock) / vcb.block_size + sizeof(FreeSpaceManagement) / vcb.block_size);


    return 0;
}


