class Solution {
public:
    string breakPalindrome(string palindrome) {
       bool flag = false;
       int n = palindrome.length();
       if(n==1) return "";
       for(int i=0;i<n/2;i++){
            if(palindrome[i]!='a') {
                palindrome[i]='a';
                flag = true;
                break;
            }
       }
       if(flag==false) palindrome[n-1]='b';
       return palindrome;
    }
};