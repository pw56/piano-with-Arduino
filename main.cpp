#include<Modules.h>

unsigned char pin[];
float in[88];
float out[88];
short sound[88]={
  
};
char volume;//パーセント指定

void setup(){
	for(char i;i<4;i++){
	  pinMode(pin[i],OUTPUT);
	}
	digitalWrite(pin[2],0.25);
	for(char i=4;i<sizeof(pin);i++){
	  pinMode(pin[i],INPUT);
	}
}
void loop(){
	for(char i;i<88;i++){
		if(out[i]>0){//出力情報の更新
			if(){//ペダルあり
        ;
			}
			else{//ペダルなし
				out[i]-=0.01;
			}
			if(out[i]<=0){
				out[i]=0;
			}
		}
		if(in[i]!=0){//入力情報のリセット
			in[i]=0;
		}
		if(in[i]==0){//入力情報を取得
			in[i]=;
		}
		if(in[i]>0){//出力情報を設定
			out[i]=in[i];
		}
	}
	for(char i;i<88;i++){
	  ring(pin[3],sound[i],out[i]*volume/100);
	}
}