class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Approach 1
        // int n= nums.size();
        // vector<vector<int>> ans;
        // set<vector<int>> st;
        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 vector<int> vc;
        //                 vc.push_back(nums[i]);
        //                 vc.push_back(nums[j]);
        //                 vc.push_back(nums[k]);
        //                 sort(vc.begin(),vc.end());
        //                 st.insert(vc);
        //             }
        //         }
        //     }
        // }
        // auto it = st.begin();
        // while(it!=st.end()){
        //     ans.push_back(*it++);
        // }
        // return ans;
        // Approach 2 
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            int front = i+1;
            int back = n-1;
            while(front<back){
                int value = nums[i]+nums[front]+nums[back];
                vector<int> vc(3,0);
                if(value<0) front++;
                else if(value>0) back--;
                else{
                    vc[0]=nums[i];
                    vc[1]=nums[front++];
                    vc[2]= nums[back--];
                    ans.push_back(vc);
                    while(front<back && nums[front]==vc[1]) front++;
                    while(front<back && nums[back]==vc[2]) back--;
                }
            }
            while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return ans;
    }
};