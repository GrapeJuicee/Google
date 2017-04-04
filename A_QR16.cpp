#include<iostream>

void iniDigitos(char* digitos){
	for(int i = 0; i<10; i++){
		digitos[i]=0;
	}
}

char comprobar(char* digitos){
	for(int i = 0; i<10; i++){
		if(digitos[i]==0){
			return 0;
		}
	}
	return 1;
	
}

void anadir(char* digitos, int num){
	while(num!=0){
		digitos[num%10] = 1;
		num = num/10;
	}
}

int main(){
	int casos, N, mul, num, i;
	std::cin >> casos;
	char digitos[10];
	for(i = 0; i < casos; i++){
		std::cin >> N;
		iniDigitos(digitos);
		mul=1;
		num = N;
		if(N==0){
			std::cout << "Case #" << i+1 << ": INSOMNIA\n";
		} else {
			while(true){
				anadir(digitos, num);
				if(comprobar(digitos)==1){
					std::cout << "Case #" << i+1 << ": " << num << '\n';
					break;
				}
				mul++;
				num = N*mul;
			}
		}
	}
}

