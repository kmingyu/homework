//이동전 좌표 x y와 이동 후xx yy를 입력받아,
//함수로 이동전에 비해 얼만큼 이동했는지 출력하는 함수를 구현하여
//이동거리 를 구하는 코드 작성

//예시입력
//이동 전 좌표(x y) : 10 3
//이동 후 좌표(x y) : 5 8

//예시출력 
//x축 이동거리 : -5
//y축 이동거리 : 5
//총 이동거리 : (-5, 5)


#include <stdio.h> 
#include <math.h>  //mathf.abs를 쓸 수 있도록 math.h 헤더파일 추가 
#include <string.h>  //편함을 위해 string.h 헤더파일 추가    

typedef struct pos{

	int x, y;  //x,y,xx,yy 선언 
	int distance;  //만들어놨지만 쓸데없음	

}P;

struct pos f( struct pos _b, struct pos _a){  //하지만 mathf.abs가 실행이 안되서 만든 if문 (알고보니 mathf.abs가아니라 math.abs였던거임 그랫던거임)  

	struct pos l = { 0, };  

	l.x = _b.x- _a.x;

	l.y = _a.y- _b.y;

	return l;

} //두 좌표사이의 거리를 구하는 함수

int main(){

	P pos1;  //동민이형님께서 구조체맛으로 만들라해서 만드는중입네다 .
	P pos2;  //의진이형이 지금 당장 만들래서 구조체 2개선언해서 만드는중입니다.

	printf("이동 전 좌표(x y):");
	scanf("%d %d", &pos1.x, &pos1.y);  //이동 전 좌표 x y를 입력받음 

	printf("이동 후 좌표(x y):");
	scanf("%d %d", &pos2.x, &pos2.y);  //이동 후 좌표 x y를 입력받음 

	printf("x축 이동거리: %d\n", f(pos1, pos2).x);  //f함수를 이용해서 xx-x식을 마들어 이동거리 구함 
	printf("y축 이동거리: %d\n", f(pos1, pos2).y);  //f함수를 이용해서 yy-y식을 만들어 이동거리 구함
	printf("총 이동거리:(%d %d)\n", f(pos1,pos2).x, f(pos1, pos2).y);  //f함수를 이둉해서 총 이동거리 구함 

	return 0;
}
