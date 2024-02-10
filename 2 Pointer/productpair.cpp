
class Solution{   
public:
bool isProduct(int ar[], int n, long long x) {
        unordered_map<int, int> m;
        
        for(int i{}; i < n; i++) {
            if(ar[i] and x % ar[i] == 0) if(m[x / ar[i]] > 0) return 1;
            m[ar[i]]++;
        }
        
        return 0;
}
};