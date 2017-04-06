#include<iostream>
#include<string>

int main(){
	int casos, volteos, i;
	std::string tortitas;
	char anterior;
	std::cin >> casos;
	for(i = 0; i<casos; i++){
		volteos = 0;
		anterior = '+';
		std::cin >> tortitas;
		for(int j = tortitas.size()-1; j>=0; j--){
			if(anterior=='+' && tortitas[j]=='-'){
				volteos++;
				anterior='-';
			}
			if(anterior=='-' && tortitas[j]=='+'){
				volteos++;
				anterior='+';
			}
		}
		std::cout << "Case #" << i+1 << ": " << volteos << '\n';
	}
}
