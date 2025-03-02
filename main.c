#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char command[16][16];
	char result[256] = "xdg-open \"";
	int plus = 1;
	for(int i = 0; i < 16; i++){
		command[i][0] = 0;
	}
	for(int i = 0; i < 16; i++){
		scanf("%s", command[i]);
	}
	if(!strcmp(command[0],"ddg")){
		strcat(result, "https://html.duckduckgo.com/html/?q=");
	}else if(!strcmp(command[0],"w")){
		strcat(result, "https://es.wikipedia.org/wiki/");
	}else if(!strcmp(command[0],"wiki")){
		strcat(result, "https://en.wikipedia.org/wiki/");
	}else if(!strcmp(command[0],"d")){
		strcat(result, "https://www.thefreedictionary.com/");
	}else if(!strcmp(command[0],"rae")){
		strcat(result, "https://dle.rae.es/");
	}else if(!strcmp(command[0],"gt")){
		strcat(result, "https://translate.google.com/?sl=auto&tl=auto&text=");
	}else if(!strcmp(command[0],"t")){
		strcat(result, "https://libretranslate.com/?source=en&target=es&q=");
	}else if(!strcmp(command[0],"gh")){
		strcat(result,  "https://github.com/search?q=");
	}else if(!strcmp(command[0],"yt")){
		strcat(result, "https://www.youtube.com/results?search_query=");
	}else if(!strcmp(command[0],"")){
		strcpy(result, "");
	}else{
		strcat(result, "https://lite.duckduckgo.com/lite/?q=");		
		plus = 0;
	}
	for(int i = 0; i < 16-plus; i++){
		if(command[i+plus][0] == 0){
			break;
		}
		if(i != 0){
			strcat(result," ");
		}

		strcat(result, command[i+plus]);

	}
	strcat(result,"\"");
	system(result);
}
