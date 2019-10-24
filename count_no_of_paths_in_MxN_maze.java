
class Main { 
  
    static int numberOfPaths(int m, int n) 
    { 
     
        int count[][] = new int[m][n]; 
  
        for (int i = 0; i < m; i++) 
            count[i][0] = 1; 
  
  
        for (int j = 0; j < n; j++) 
            count[0][j] = 1; 
  
 
        for (int i = 1; i < m; i++) { 
            for (int j = 1; j < n; j++) 
  
                // By uncommenting the last part the 
                // code calculatest he total possible paths 
                // if the diagonal Movements are allowed 
                count[i][j] = count[i - 1][j] + count[i][j - 1]; //+ count[i-1][j-1]; 
        } 
        return count[m - 1][n - 1]; 
    } 
  
    public static void main(String args[]) 
    { 
        System.out.println(numberOfPaths(3, 3)); 
    } 
} 
 
