class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        //values sent as pairs
        priority_queue<pair<int,int>>mx_q;
        int n = profits.size();     
        for(int i = 0;i<n;i++){
            //priority queue max heap
            mx_q.push({profits[i],capital[i]});
        }
        vector<pair<int,int>>v;
        while(k--){
            //checks whether the heap is empty and capital < heap-> second->val  
            while(!mx_q.empty() && w < mx_q.top().second){
                //val pushed top 
                v.push_back(mx_q.top());
                //using greedy approach the distinct vals are found out
                mx_q.pop();
            }
            if(mx_q.empty())
                break;
            // capital is updated every time it found the greedy val
            w += mx_q.top().first;
            mx_q.pop();
            for(int i = 0;i<v.size();i++){
                mx_q.push(v[i]);
            }
            //vector is cleared
            v.clear();
        }

        return w;
    }
};