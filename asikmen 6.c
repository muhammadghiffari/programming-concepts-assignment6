#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

// function for greeting / ui
void greet();
void curMem(char*);

// main function
void lowcase(char*);
void upcase(char*);
void reset(char*, char*);
void printChar(char*);

int main(){
	//variabel boolean
	int choose; int counter = 1; int flag = 0; int hasDigit(const char* );
	
	// variabel memory
	char *namaOri = malloc(SIZE * sizeof(*namaOri));
	char *namaCur = malloc(SIZE * sizeof(*namaCur));
	
	
	printf("====================================\n");
    printf(" Welcome to the Simple Name Editor\n");
    printf("====================================\n\n");
	
	do{
		if(flag){
			curMem(namaCur);
		} else{
			printf("\n[ you're not input any name yet ]\n\n");
		}
		greet();
	if(scanf("%d", &choose) != 1 ) return 1;
	switch(choose){
	case 1: {
    printf("Enter your name: ");

    scanf(" %[^\n]", namaOri);

    // check if input contains digit
    if(hasDigit(namaOri)) {
        printf("\n|| Error: name cannot contain numbers.|| \n");
        printf("--Please try again.--\n\n");
        break; 
    }

    strcpy(namaCur, namaOri);
    flag = 1;
    printf("Name saved successfully.\n");
    break;
}

		
	case 2:
		if(flag){
			lowcase(namaCur);
		} else{
			printf("%s%s%s", 
			"\n============================\n",
			"please input your name first!", 
			"\n============================\n");
		}
		
		 // change curMem into lowercase
		break;
		
	case 3:
		if(flag){
		upcase(namaCur);
		// change curMem into uppercase
			
		} else{
			printf("%s%s%s", 
			"\n============================\n",
			"please input your name first!", 
			"\n============================\n");
		}
		break;
	case 4:
		if(flag){
			reset(namaCur, namaOri);
			
			
		} else{
			printf("%s%s%s", 
			"\n============================\n",
			"please input your name first!", 
			"\n============================\n");
		}
//		reset();
		// reset function (for deleting uppercase or lowercase format) therefor change the currmem value into original value before 
		break;
		
	case 5:
		if(flag){
			printChar(namaCur);
			
		} else{
			printf("%s%s%s", 
			"\n============================\n",
			"please input your name first!", 
			"\n============================\n");
		}
//		printChar();
		// just print each char like "hello C" into "h e l l o   c"
		break;
		
	case 6:
		//exit
		
		counter = 0;
		break;
		
	default: 
	printf("\nInvalid input, please try again...\n");
		break;
	//
	
}
} while (counter != 0);

printf("Thank you for using the service");
    free(namaOri);
    free(namaCur);
return 0;
}

// untuk ui
void greet()
{

	printf("== Choose menu here ==\n");
	printf("1. input or change name\n");
	printf("2. make the name into lowercase\n");
	printf("3. make the name into uppercase\n");
	printf("4. reset into original value\n");
	printf("5. print the name each the characters\n");
	printf("6. exit\n");
	printf("Choose: ");
};

void curMem(char* namaCur){
	printf("\n[ %s ]\n\n", namaCur);
}

// function utama

void lowcase(char* x){
	for(int i = 0; x[i] != '\0'; i++){
		x[i] = tolower(x[i]);
	}
}

void upcase(char* y){
	for(int i = 0; y[i] != '\0'; i++){
		y[i] = toupper(y[i]);
	}
}

void reset(char* r, char* o){
	strcpy(r, o);
}

void printChar(char* s){
    for(int i = 0; s[i] != '\0'; i++){
        printf("%c ", s[i]);
    }
    printf("\n");
}

// boolean
int hasDigit(const char *s){
    for(int i = 0; s[i] != '\0'; i++){
        if(isdigit(s[i])) return 1;
    }
    return 0;
}


