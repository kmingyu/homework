//3차원좌표계의 x,y,z축 데이터를 가지고 있는 구조체를 선언한 뒤,
//이동전, 이동 후 좌표를 입력 받아,
//이동한 방향을 출력하는 코드 작성

//<조건>
//-x,y,z는 구조체로
//-이동한 방향을 출력하는건 함수로 할것
//-z좌표가 늘어나면 : 앞으로 이동한것
//-z좌표가 줄어들면 : 뒤로 이동한것
//-x좌표가 늘어나면 : 오른쪽으로 이동한것
//-x좌표가 줄어들면 : 왼쪽으로 이동한것
//-y좌표가 늘어나면 : 위로 이동한것
//-y좌표가 줄어들면 : 아래로 이동한것
//-주석 다 쓸것

//<예시 입력>
//이동전 좌표(x y z) : 10 4 5
//이동후 좌표(x y z) : 5 2 7

//<예시 출력>
//왼쪽, 점프, 앞으로 이동함


#include <stdio.h>  
#include <string.h>  //편함을 위한 string.h 헤더파일 선언
#include <math.h>  //필요할 것 같아서 추가했지만 안쓰임

typedef struct pos{  //구조체 선언

	int x, y, z;  //int x,y,z 좌표 선언
	
}P;

void f(P pos1,P pos2){  //상하좌우를 출력하기위한 조건문 

	if (pos1.x > pos2.x)  //x좌표가 줄어들때 "왼쪽" 출력 하도록 만든 조건문
		printf("왼쪽, ");
	else if (pos1.x < pos2.x)  //x좌표가 늘어날때 "오른쪽" 출력 하도록 만든 조건문
		printf("오른쪽, ");
	
	if (pos1.y > pos2.y)   //x좌표가 줄어들때 ", 아래" 출력 하도록 만든 조건문
		printf("아래, ");  
	else if (pos1.y < pos2.y)  //y좌표가 늘어날때 ", 위" 출력 하도록 만든 조건문
		printf("위, ");
	
	if (pos1.z > pos2.z)   //x좌표가 줄어들때 ", 뒤로 이동함" 출력 하도록 만든 조건문
		printf("뒤로 이동함\n");
	else if (pos1.z < pos2.z)  //z좌표가 늘어날때 ", 앞으로 이동함" 출력 하도록 만든 조건문
		printf("앞으로 이동함\n");  
	
	if (pos1.x == pos2.x&&pos1.y == pos2.y&& pos1.z == pos2.z)  //x y z 좌표가 같을때  "이동 안함" 출력 하도록 만든 조건문
		printf("이동 안함");  

}

int main(){
	
	P pos1;  //구조체 pos1선언
	P pos2;  //구조체 pos2선언

	printf("이동 전 좌표(x y z):");  //이동 전 좌표(x y z): 출력
	scanf("%d %d %d", &pos1.x, &pos1.y, &pos1.z);  //이동 전 좌표 입력
	printf("이동 후 좌표(x y z):");  //이동 후 좌표(x y z): 출력
	scanf("%d %d %d", &pos2.x, &pos2.y, &pos2.z);  //이동 후 좌표 입력
	

	f(pos1, pos2);  //f함수호출

	return 0;
}
