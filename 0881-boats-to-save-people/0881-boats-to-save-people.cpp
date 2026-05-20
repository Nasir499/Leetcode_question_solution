class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i =0;
        int k =0;
        int j =people.size()-1;
        while(i<=j){
            if(people[j]+people[i]>limit) {
                j--;
            }
            else if(people[j]+people[i]==limit){
                j--;
                i++;
            }
            else {
                j--;
                i++;
            }
            k++;
        }
        return k;
    }
};