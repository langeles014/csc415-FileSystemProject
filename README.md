# csc415-FileSystemProject
1. Calculating Required Blocks:
   - `bytesNeeded` calculates the total bytes required for the directory entries.
   - `blocksNeeded` calculates how many blocks are required to store these bytes.

2. Allocating Blocks:
   - `startBlock` is the starting block number allocated from the free space using `allocBlocks(blocksNeeded)`.
   - Ensure error handling for the allocation process.

 3. Initializing Directory Entries:
   - Loop through `actualDirEntries` and initialize each directory entry to a known state (empty name and unused).
   - Optional: `used` flag could be helpful for tracking used entries.

 4. Setting Special Entries (Dot and DotDot):
   - Set the first entry (`dir[0]`) as the current directory ("." entry).
     - Name: "."
     - Size: Total size of directory entries.
     - Location: `startBlock`
     - Flags: Indicate it's a directory.
     - Timestamps: Set creation, modification, and access timestamps.
   - Set the second entry (`dir[1]`) as the parent directory (".." entry).
     - Name: ".."
     - Size: Same as the parent directory size.
     - Location: Same as the parent directory location.
     - Flags: Inherit from the parent directory.
     - Timestamps: Inherit from the parent directory.

 5. Writing Directory to Disk:
   - Write the initialized directory entries to the allocated blocks starting from `startBlock` using a Low-Level Block Access (LBA) function.

 6. Memory Cleanup and Return:
   - Free the memory allocated for the directory entries using `free(dir)`.
   - Return the `startBlock` of the root directory, which is essential for future operations on the file system.

