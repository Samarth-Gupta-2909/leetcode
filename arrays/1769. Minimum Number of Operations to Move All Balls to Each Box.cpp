class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> v;
        int l = boxes.length();
        
        
        for(int i=0;i<l;i++){
            int sum = 0;
            for(int j=0;j<l;j++){
                if(boxes[j] == '1'){
                    sum= sum + abs(j-i); 
                }
            }
            v.push_back(sum);
        }
    return v;
    }
};