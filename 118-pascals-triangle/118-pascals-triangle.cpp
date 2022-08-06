class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
	for (int i = 0; i < numRows; i++) {
		vector<int> row(i + 1, 1); //e.resize(int newSize, int AddNewval)
		for (int j = 1; j < i; j++) { // value of j goes from 1st to the one before last
			row[j] = res[i - 1][j] + res[i - 1][j - 1]; // add previous row (i-1)'s j-1 and j
		}
		res.push_back(row);
	}
	return res;
    }
};