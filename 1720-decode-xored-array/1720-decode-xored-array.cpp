class Solution {
public:
    vector<int> decode(vector<int>& a, int f) {
       // a.push_front(f);
        a.insert(a.begin(),f);
        for(int i=0;i<a.size()-1;i++)
        {
            a[i+1]=a[i]^a[i+1];
        }
        return a;
    }
};