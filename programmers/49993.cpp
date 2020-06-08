#include <string>
#include <vector>
#include <array>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
	array<int, 26> skill_tree;
	skill_tree.fill(-1);
	for (int i = 0; skill[i] != '\0'; i++) {
		skill_tree[skill[i] - 'A'] = i;
	}

	for (int i = 0; i < skill_trees.size(); i++) {
		string word = skill_trees[i];
		int skill_count = 0;
		int flag = 0;
		printf("\n");
		for (int j = 0; word[j] != '\0'; j++) {
			int current_skill = skill_tree[word[j] - 'A'];
			printf("%c : %d %d\n", word[j], current_skill, skill_count);
			if (current_skill != -1) {   //in skill tree
				if (current_skill == skill_count) {
					skill_count++;
				}
				else {
					flag = 1;
					break;
				}
			}
		}if (flag == 0) answer++;
	}	return answer;
}