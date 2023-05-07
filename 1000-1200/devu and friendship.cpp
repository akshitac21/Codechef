ing namespace std;

int main() {
    
	int test;
    set <int> solution;
    
    cin>>test;

    for(int i = 0; i < test; i++)
    {
        int input;
        cin>>input;

        solution.insert(input);
    }

    cout<<solution.size();
	return 0;
}
