class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<int,int> freq;
        for(char j : s){
            freq[j]++;
        }
        priority_queue<pair<int,char>> pq;

        for(auto k : freq){
            pq.push({k.second,k.first});
        }
        string ans ="";
        while(pq.size()>1){
              auto first = pq.top();
              pq.pop();
              auto second = pq.top();
              pq.pop();

              ans+=first.second;
              ans+=second.second;

              first.first--;
              second.first--;

              if(first.first>0){
                pq.push(first);

              }
              if(second.first>0){
                pq.push(second);

              }

             
        }
         if (!pq.empty()) {
            if (pq.top().first > 1)
                return "";

            ans += pq.top().second;

        }
        return ans;
    }
};