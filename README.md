# csc415-FileSystemProject

**Team Name: Bierman's Favs**

---

**Team Members:**
- Luis Angeles, Student ID#
- Hamed Djouadi, Student ID#
- Brenden Lapuz, Student ID#
- John Cueva, Student ID#

**GitHub Repository:**
https://github.com/langeles014/csc415-FileSystemProject

---

**Project Overview:**


---

**Volume Formatting:**

1. **Volume Control Block (VCB) Structure:**
   [Describe the structure of your VCB, including fields such as volume name, total blocks, block size, etc.]

2. **Free Space Management:**
   - **Initialization:**
     Initialize bitmap with all 1s bitmap[64] = {1}
   - **Allocation Procedure:**
     When we allocate, we are going to use a for loop to find contiguous 0 bits within the bitmap.
     And set corresponding bits as 0 to showcase (flag) blocks as occupied.
     Whenever data is deleted or moved around, we set that respective bit to 1 to identify when it is free again


3. **Root Directory Initialization:**
   - **Special Entries (. and ..):**
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

   - **Other Directory Entries:**
   - Write the initialized directory entries to the allocated blocks starting from `startBlock` using (LBA) function.

4. **HexDump of Volume File:**
   [Include a HexDump of the volume file showing the VCB, FreeSpace, and complete root directory.]

---

**Team Work Division:**

| Team Member    | Components Worked On              |
| -------------- | --------------------------------- |
| Brenden Lapuz  | VCB Structure                     |
| Hamed Djouadi  | Free Space Management             |
| Luis Angeles   | Root Directory Initialization     |
| John Cueva     | HexDump, Documentation            |

---

**Team Collaboration:**


---

**Challenges and Resolutions:**


---

**Conclusion:**


---

**Attachments:**
- HexDump of Volume File
- Code Repository Link (GitHub)

---

