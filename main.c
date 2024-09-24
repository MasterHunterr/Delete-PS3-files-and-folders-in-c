/*
 * Example for deleting PS3 files and folders in C.
 * This example demonstrates how to delete a file and a folder using `sUnlink()` and `sRmdir()` functions.
 * 
 * Provided by MOHAMMED && DARK SPACE
 */

#include <stdio.h>
#include "file.h" 

int main() {
    // Path to the file you want to delete
    const char *filepath = "/dev_hdd0/game/BLUS26456/ICON0.PNG";
    
    // Path to the folder you want to delete
    const char *FOLDER_PATH = "/dev_hdd0/GAMES";

    // Attempt to delete the file
    if(sUnlink(filepath) == 0) {
        // Success message if the file is deleted
        printf("File deleted successfully: %s\n", filepath);
    } else {
        // Error message if the file deletion fails
        printf("Failed to delete file: %s\n", filepath);
    }

    // Attempt to delete the folder (only works if the folder is empty)
    if(sRmdir(FOLDER_PATH) == 0) {
        // Success message if the folder is deleted
        printf("Folder deleted successfully: %s\n", FOLDER_PATH);
    } else {
        // Error message if the folder deletion fails (e.g., folder is not empty)
        printf("Failed to delete folder: %s\n", FOLDER_PATH);
    }

    return 0; // End of the program
}
