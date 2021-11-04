/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

void solve(int **image, int row, int col, int i, int j, int oldcolor, int newColor)
{
    
    if(i < 0 || j < 0 || i >= row || j >= col || image[i][j] == newColor)
        return;
    image[i][j] = newColor;
    if(i>0 && image[i-1][j] == oldcolor)
        solve(image, row, col, i-1, j, oldcolor, newColor);
    if(i<row-1 && image[i+1][j] == oldcolor)
        solve(image, row, col, i+1, j, oldcolor, newColor);
    if(j>0 && image[i][j-1] == oldcolor)
        solve(image, row, col, i, j-1, oldcolor, newColor);
    if(j<col-1 && image[i][j+1] == oldcolor)
        solve(image, row, col, i, j+1, oldcolor, newColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor, int* returnSize, int** returnColumnSizes){
    int m = imageSize;
    int n = imageColSize[0];
    solve(image, m, n, sr, sc, image[sr][sc], newColor);
    *returnSize = m;
    *returnColumnSizes = imageColSize;
    return image;
}