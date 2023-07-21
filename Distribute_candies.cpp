class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
    int maxAllowed = n / 2;

    unordered_set<int> uniqueCandies;

    for (int candy : candyType) {
        uniqueCandies.insert(candy);

        if (uniqueCandies.size() == maxAllowed) {
            break;
        }
    }

    return uniqueCandies.size();
    }
};
