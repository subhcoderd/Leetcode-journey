class Solution {
    public int[] sortedSquares(int[] arr) {
        int n = arr.length;
		int i =0;
		int j = n-1;
		int[] result = new int[n];
		for(int k =n-1;k>=0;k--) {
			if(Math.abs(arr[i]) > Math.abs(arr[j]) ) {
				result[k]=arr[i]*arr[i];
				i++;
			}
			else {
				result[k]=arr[j]*arr[j];
				j--;
			}
			//result[i]= result[i]*result[i];
			
		}
		
		
		
		return result;
    }
}