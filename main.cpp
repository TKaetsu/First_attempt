#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h> 

#define ac_pw_long 8                //�˺����볤�� 

int main()
{
	/* �����붨��*/
	/*����*/ 
	 
	FILE*fp1,*fp2;
	char password_r[ac_pw_long];
	char ac_or_pw[ac_pw_long]; 
	
	char account[ac_pw_long];
	char command[100];               // �����ַ���  ����ȴ��������Ƕ�̬�ַ���������ƣ�ʮ������
	
	/*��������*/
	void Read(char object[]);        //��ȡ 
	void Uers_face();                //�û�������� 
	int Command_ex(char Command[]);  //������ͣ������ַ������������ 
	void Command_co(int C_ex);       //����ִ�� 
	int Search(char object[]);       //�����ı����� 
	void ls();                       //�б� 
	void fd(char book_name[]);       //Ѱ���鼮 
	void is(char name[]);            //��Ϣ��ѯ 
	void ll();                       //ͼ�����־ 
	/*��ѭ�� */
begin:
	printf("�˺ţ�");
	Read(account);//�����˺�
	printf("\n"); 
	if(account[0]=='*')              //*�ſ�ͷΪ����Ա 
	{
		if((fp1=fopen("manager_base.txt","r"))==NULL)
		{
			printf("1");
			printf("���û���ʧ��");
			Sleep(1500);
			system("cls");           //����
			goto begin;
		} 		
		if(Search(account)==1)       //�˺Ŵ��� 
		{
	pw_input1:
			printf("����:") ;
			Read(password_r);        //��ȡ����
			if(Search(password_r)==1)
			{
				system("cls");       //���� 
				goto command1;
			} 
			else
			{
				printf("��˵�Ķԣ�����������ִ�������������");
				Sleep(1500);
				system("cls");       //����
				goto pw_input1;
			}		
		}
		//�˺Ų����ڣ�����ע��
		else if(Search(account)!=1)	
		{
		/////////////////////////////////////////////
			printf("����Ա��д���˺�");	
		/////////////////////////////////////////////
		}
			
	}
	else if(account[0]!='*')         //*��ͨ�û� 
	{
		printf("2");
		if((fp1=fopen("account_base.txt","r"))==NULL)
		{
			printf("���û���ʧ��");
			exit(0); 
		} 
		if(Search(account)==1)       //�˺Ŵ��� 
		{
	pw_input2:
			printf("����:") ;
			Read(password_r);        //��ȡ����
			if(Search(password_r)==1)
			{
				system("cls");       //���� 
				goto command2;
			} 
			else
			{
				printf("��˵�Ķԣ�����������ִ�������������");
				Sleep(1500);
				system("cls");       //����
				goto pw_input2;
			}		
		} 	
		else if(Search(account)!=1)	 //�˺Ų����ڣ�����ע��
		{
			printf("\n��ϵ����Աд���˺�");
			Sleep(1500);
			system("cls");           //����
			goto begin;
		}
	}
	//����Ա���� �����н��� 
	command1:
		int C_ex;                        //������ͽ��
		printf("����ָ�");
		Read(command);
		C_ex=Command_ex(command) ;
		Command_co(C_ex);
		goto command1;
	//�û����� ,��ͼ�λ� 
	command2:
		Uers_face();
		Read(command);
		C_ex=Command_ex(command) ;
		Command_co(C_ex);
	goto command2; 

	return 0;
} 
void Read(char object[])         //��ȡ 
{
	gets(object);
} 
 void Uers_face()//�û��������
 {
 	
 }
 int Command_ex(char Command[])   //������ͣ������ַ������������ 
 {
 	return 1;
 }
void Command_co(int C_ex)        //����ִ�� 
{
	
}       
int Search(char object[])        //����txt����
{
	return 1;
}
void ls()
{
	
}
void fd(char book_name[])
{
	
}
void is(char name[])
{
	
}
void ll()
{
	
}                       	

 
	
	
