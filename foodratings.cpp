#include <iostream>
using namespace std;
class FoodRatings
 {
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings)
	 {
        int n = foods.size();
        for (int i = 0; i < n; ++i) {
            foodInfo[foods[i]] = {cuisines[i], ratings[i]};
            cuisineRatings[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }

    void changeRating(string food, int newRating) {
        auto [cuisine, oldRating] = foodInfo[food];
        cuisineRatings[cuisine].erase({-oldRating, food});
        cuisineRatings[cuisine].insert({-newRating, food});
        foodInfo[food].second = newRating;
    }

    string highestRated(string cuisine) {
        return cuisineRatings[cuisine].begin()->second;
    }
};