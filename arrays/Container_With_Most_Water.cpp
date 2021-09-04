#include<bits/stdc++.h>
using namespace std;


class Solution {

    
    public:
//     static bool compare(pair<int,int> p1,pair<int,int> p2){
        
//         return p1.first < p2.first;
//     }
   
//     int maxArea(vector<int>& height) {
        
//         //pair<int,int> p;
//         int length = height.size();
//         //vector<pair<int,int>> arr;
//         pair<int,int> * arr = new pair<int,int>[length];
//         //vector<int> v;
        
//         arr[0].first = height[0];
//         arr[0].second = 0;
        
//         for(int i=1;i<height.size();i++){
//             //v.push_back(height.at(i) - height.at(i+1));
//             arr[i].first = height[i];
//             arr[i].second = i;
//         }
     
//         sort(arr,arr+length,compare);
        
//         int max_area = INT_MIN;
        
//         for(int i=1;i<height.size();i++){
            
//             int h = min(arr[i-1].first,arr[i].first);
//             int l = abs(arr[i].second - arr[i-1].second);
            
//             int pro = h*l;
            
//             if(max_area < pro){
//                 max_area = pro;
//             }
//         }
        
//         delete[] arr;
//         return max_area;
            
        
        
        //cout<<"hello"<<endl;
        
        
        
        // for(int i=1;i<height.size();i++){
        //     // v.push_back(height.at(i) - height.at(i+1));
        //     cout<<v[i]<<endl;
        // }
        
     //brute force
    
//         int maxArea(vector<int>& height){
//             int max = INT_MIN;
//             int length = height.size();
//             for(int i=0;i<length;i++){
//                 for(int j=0;j<length;j++){
//                     if(i == j){
//                         continue;
//                     }else{
//                         int area = min(height.at(i),height.at(j))*(abs(j - i));
//                         if(area > max){
//                             max = area;
//                         }
//                     }
//                 }
//             }
//             return max;
            
//         }
        
        int maxArea(vector<int>& height){
           
            int max = INT_MIN;
            int length = height.size();
            
            int left = 0;
            int right = length-1;
            
            while(left < right){
                
                int diff = min(height.at(left),height.at(right));
                //cout<<"Difference = "<<diff<<endl;
                int pro = diff * (right - left);
                //cout<<"Product = "<<pro<<endl;
                //cout<<"Length = "<<right-left<<endl;
                
                //int diff1 = abs(height.at(left+1) - height.at(right));
                
                // int pro1,pro2;
                // if(right - left -1 > 0){
                //      pro1 = diff1 * (right - left -1);
                // }else{
                //     pro1 = INT_MIN;
                // }
                //int pro1 = diff * (right - left -1);
                
                //int diff2 =  abs(height.at(left) - height.at(right-1));
                 
                //  if(right - left -1 > 0){
                //      pro2 = diff2 * (right - left -1);
                // }else{
                //     pro2 = INT_MAX;
                // }  
                 
                //int pro2 = diff * (right - 1 - left);
                
                if(height.at(left) < height.at(right)){
                    left++;
                }else{
                    right--;
                }
                
                if(max < pro){
                    max = pro;
                }
            }
            
            return max;
        }
        
};