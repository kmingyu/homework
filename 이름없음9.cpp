//�̵��� ��ǥ x y�� �̵� ��xx yy�� �Է¹޾�,
//�Լ��� �̵����� ���� ��ŭ �̵��ߴ��� ����ϴ� �Լ��� �����Ͽ�
//�̵��Ÿ� �� ���ϴ� �ڵ� �ۼ�

//�����Է�
//�̵� �� ��ǥ(x y) : 10 3
//�̵� �� ��ǥ(x y) : 5 8

//������� 
//x�� �̵��Ÿ� : -5
//y�� �̵��Ÿ� : 5
//�� �̵��Ÿ� : (-5, 5)


#include <stdio.h> 
#include <math.h>  //mathf.abs�� �� �� �ֵ��� math.h ������� �߰� 
#include <string.h>  //������ ���� string.h ������� �߰�    

typedef struct pos{

	int x, y;  //x,y,xx,yy ���� 
	int distance;  //���������� ��������	

}P;

struct pos f( struct pos _b, struct pos _a){  //������ mathf.abs�� ������ �ȵǼ� ���� if�� (�˰��� mathf.abs���ƴ϶� math.abs�������� �׷�������)  

	struct pos l = { 0, };  

	l.x = _b.x- _a.x;

	l.y = _a.y- _b.y;

	return l;

} //�� ��ǥ������ �Ÿ��� ���ϴ� �Լ�

int main(){

	P pos1;  //���������Բ��� ����ü������ ������ؼ� ��������Գ״� .
	P pos2;  //���������� ���� ���� ���鷡�� ����ü 2�������ؼ� ��������Դϴ�.

	printf("�̵� �� ��ǥ(x y):");
	scanf("%d %d", &pos1.x, &pos1.y);  //�̵� �� ��ǥ x y�� �Է¹��� 

	printf("�̵� �� ��ǥ(x y):");
	scanf("%d %d", &pos2.x, &pos2.y);  //�̵� �� ��ǥ x y�� �Է¹��� 

	printf("x�� �̵��Ÿ�: %d\n", f(pos1, pos2).x);  //f�Լ��� �̿��ؼ� xx-x���� ����� �̵��Ÿ� ���� 
	printf("y�� �̵��Ÿ�: %d\n", f(pos1, pos2).y);  //f�Լ��� �̿��ؼ� yy-y���� ����� �̵��Ÿ� ����
	printf("�� �̵��Ÿ�:(%d %d)\n", f(pos1,pos2).x, f(pos1, pos2).y);  //f�Լ��� �̊E�ؼ� �� �̵��Ÿ� ���� 

	return 0;
}
