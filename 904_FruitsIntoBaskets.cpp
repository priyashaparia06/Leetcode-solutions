class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket; // store fruit type → count
        int left = 0;                   // left pointer of window
        int maxFruits = 0;              // answer

        // move right pointer step by step
        for (int right = 0; right < fruits.size(); right++) {
            basket[fruits[right]]++; // add current fruit

            // if more than 2 types, shrink window from left
            while (basket.size() > 2) {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]); // remove type
                }
                left++; // move window
            }

            // update max fruits collected so far
            maxFruits = max(maxFruits, right - left + 1);
        }
        return maxFruits;
    }
};
