// this code can't remove image1.jpg on my android phone
#include <stdio.h>

int main()
{
    int return_value;
    char *filename = "image2.jpg"
    
    return_value = remove(filename);
    
    if (return_value != 0) {
        perror("File remove failed");
        return 1;
    }
    
    printf("%s removed successfully\n", filename);
    
    // now try to remove again
    return_value = remove(filename);
    
    if (return_value != 0) {
        perror("Failed to remove file");
        return 1;
    }
    
    printf("%s removed successfully\n", filename);
    
    return 0;
}