#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool visited[7][7];
int paths = 0, steps = 0;
int reserved[49];
 
void solved(int r, int c) {
 
	if (r == 6 && c == 0) {
		if (steps == 48) {
			paths++;
		}
		return;
	}
 
	if (visited[r][c] || (
		
		
			((c >= 1 && c <= 5 && !visited[r][c + 1] && !visited[r][c - 1]) &&
			((r == 0 && visited[r + 1][c]) || (r == 6 && visited[r - 1][c]))) 
		||
			((r >= 1 && r <= 5 && !visited[r + 1][c] && !visited[r - 1][c]) &&
				((c == 0 && visited[r][c + 1]) || (c == 6 && visited[r][c - 1]))) 
		
		|| (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r + 1][c] 
			&& visited[r - 1][c] && !visited[r][c + 1] && !visited[r][c - 1])
 
		|| (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r][c + 1] && visited[r][c - 1] 
			&& !visited[r + 1][c] && !visited[r - 1][c])))
	{
		return;
	}
 
	visited[r][c] = true;
 
	if (reserved[steps] != -1) {
 
		switch (reserved[steps]) {
		case 0:
			if (r > 0 && !visited[r - 1][c]) {
				steps++;
				solved(r - 1, c); // up
				steps--;
			}
			break;
		case 1:
			if (r < 6 && !visited[r + 1][c]) {
				steps++;
				solved(r + 1, c);  //down
				steps--;
			}
			break;
		case 2:
			if (c > 0 && !visited[r][c - 1]) {
				steps++;
				solved(r, c - 1); //left
				steps--;
			}
			break;
		case 3:
			if (c < 6 && !visited[r][c + 1]) {
				steps++;
				solved(r, c + 1); // right
				steps--;
			}
			break;
 
		}
		
		visited[r][c] = false;
		return;
	}
 
	if (r < 6 && !visited[r + 1][c]) {
		steps++;
		solved(r + 1, c);  //down
		steps--;
	}
 
	if (r > 0 && !visited[r - 1][c]) {
		steps++;
		solved(r - 1, c); // up
		steps--;
	}
	
	if (c > 0 && !visited[r][c - 1]) {
		steps++;
		solved(r, c - 1); //left
		steps--;
	}
 
	if (c < 6 && !visited[r][c + 1]) {
		steps++;
		solved(r, c + 1); // right
		steps--;
	}
 
	visited[r][c] = false;
 
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '?':
            reserved[i] = -1;
            break;
        case 'U':
            reserved[i] = 0;
            break;
        case 'D':
            reserved[i] = 1;
            break;
        case 'L':
            reserved[i] = 2;
            break;
        case 'R':
            reserved[i] = 3;
            break;
        }
    }
    solved(0, 0);
    cout << paths << "\n";
    return 0;
}