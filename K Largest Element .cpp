class Solution
{
public:	
	vector<int> kLargest(int arr[], int n, int k)
	{
	    // code here
	    vector<int>ans;
	    priority_queue <int, vector<int>, greater<int>> pq;
	    for(int i=0;i<n;i++)
	    {
	        pq.push(arr[i]);
	        if(pq.size()>k)
	        {
	            pq.pop();
	        }
	    }
	    while(pq.size()!=0)
	    {
	        int a=pq.top();
	        ans.push_back(a);
	        pq.pop();
	    }
	    sort(ans.begin(), ans.end(), greater <int>());
	 return ans;   
	}

};
