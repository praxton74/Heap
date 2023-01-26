class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        map<int,int>mp;   
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            pq.push({i->second,i->first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>ans;
        while(pq.size()!=0)
        {
            auto it=pq.top();
            ans.push_back(it.second);
            pq.pop();
        }
        return ans;
    }
};
