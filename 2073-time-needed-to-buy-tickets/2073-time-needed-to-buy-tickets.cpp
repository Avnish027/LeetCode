class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int time=0;
        for(int i=0; i<tickets.size(); i++){
            if(tickets[i]!=0 ) q.push(i);
        }
        
        while(tickets[k]!=0){
            tickets[q.front()]--;
            time++;
            if(tickets[q.front()]!=0){
                // int a=tickets[q.front()];
                q.push(q.front());
                q.pop();
                // q.push(a);
            }
            else q.pop();
        }
        return time;
        
    }
};