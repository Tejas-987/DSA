class ProductOfNumbers {
ArrayList<Integer> arr;

    public ProductOfNumbers() {
        arr = new ArrayList<>();
    }
    
    public void add(int num) {
        arr.add(num);
    }
    
    public int getProduct(int k) {

        int ans = 1;
        for(int i=arr.size()-k; i<arr.size(); i++){
            ans*=arr.get(i);
        }

        return ans;
    }
}


/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */