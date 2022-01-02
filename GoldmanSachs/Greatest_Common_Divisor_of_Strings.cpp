class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      if(str1+str2 != str2+str1) return "";
        //if strings are not equal then it will return empty ex: leetcode !=codeleet
        return str1.substr(0,gcd(str1.length(),str2.length()));
        //will find gcd of no's and substr is used to fetch string starting from 0 to gcd() we get.
    }
};
