class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        
        for(int i=0;i<string_list.size();i++)
        {
            string s=string_list[i];
 // here s will store the originl string like string_list[0]=act,string_list[2]=cat..
            sort(s.begin(),s.end());
// then it will sort the string like if we got cat or god then it will always become act or dog
            mp[s].push_back(string_list[i]);
// here s will contain act, we will map the act to ---> act,cat,tac
//means mp will map the s(act,dog) to the string and will push the real strings like god cat
        }
        
        for(auto x:mp)
        {
            ans.push_back(x.second);
// it will push the second value 
// x.first------>  x.second
// act----------->act,cat,tac
        }
        return ans;
    }
};
