#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num, query;
    cin >> num >> query;

    vector<vector<int>> arr1(num);
    vector<vector<int>> arr2(query, vector<int>(2));

    for (int i = 0; i < num; i++) {
        int len;
        cin >> len;
        arr1[i].resize(len);

        for (int j = 0; j < len; j++) {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < query; i++) {
        cin >> arr2[i][0] >> arr2[i][1];
    }

    for (int i = 0; i < query; i++) {
        int arr2_index = arr2[i][0];
        int offset = arr2[i][1];

        if (arr2_index >= 0 && arr2_index < num && offset >= 0 && offset < arr1[arr2_index].size()) {
            cout << arr1[arr2_index][offset] << endl;
        }
    }

    return 0;
}
