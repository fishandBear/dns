#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int dns()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	b = system("netsh interface ip set dns \"��̫��\" source=static addr=114.114.114.114");
	c = system("netsh interface ip add dns \"��̫��\" addr=8.8.8.8");
    a = system("ipconfig /flushdns");

   

	if (a != 0 && b != 0 && c != 0)
	{
		return 1;
	}
	else { return 0; }

	

}

int main()
{
	/*Ϊ�˱�����ǰ�Ĵ���˼·����Ʒ��������дһ��һ��*/
	/*Ŀǰֻ���ʺ���win10���������� win7�������̫�� ���� �������� ��ok */
	int biaozhi = 0;
	system("color 0A");

    printf("��û�ӭ����С���������ߣ�ף������ÿһ��\n");
    printf("���ù���Ա����");
	biaozhi = dns();
	if (biaozhi != 0)
	{
		printf("�л�ʧ�ܣ����ù���Ա�򿪣�����ϵ������Ա");
	}
	else
	{
		printf("�л��ɹ�������������������");

	}

	
	system("pause");
	return 0;
}
