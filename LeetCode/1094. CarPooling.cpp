class Solution {
public:
	bool carPooling(vector<vector<int>>& trips, int capacity) {
		bool result = true;
		int mostFarDestination = 0;

		// 2.
		for (int i = 0; i < trips.size(); ++i) {
			if (mostFarDestination < trips[i][2])
				mostFarDestination = trips[i][2];
		}

		// 3.
		int* locationArray = new int[mostFarDestination];
		for (int i = 0; i < mostFarDestination; ++i) {
			locationArray[i] = 0;
		}
		for (int i = 0; i < trips.size(); ++i) {
			locationArray[trips[i][1] - 1] += trips[i][0];
			locationArray[trips[i][2] - 1] -= trips[i][0];
		}

		// 4.
		for (int i = 0; result && i < mostFarDestination; ++i) {
			if (locationArray[i] > 0) {
				capacity -= locationArray[i];
				if (capacity < 0)
					result = false;
			}
			else if (locationArray[i] < 0) {
				capacity -= locationArray[i];
			}
		}

		return result;
	}
};