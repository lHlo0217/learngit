/*����ģʽ*/
//����һ��ֻ��ʵ����һ���������
#include <iostream>
using namespace std;

class Single
{
public:
	static Single* getpSingle();
private:
	Single(){ num = 0; }
	Single(const Single &s){}
	static Single *pSingle;
public:
	int num;
};

//��̬���ݳ�Ա��ʼ��
Single* Single::pSingle = NULL;

Single* Single::getpSingle()
{
	if (pSingle == NULL)
	{
		pSingle = new Single;
	}
	return pSingle;
}


int main()
{
	Single *p1 = Single::getpSingle();
	cout << "num = " << p1->num << endl;
	Single *p2 = Single::getpSingle();
	p2->num = 99;
	Single *p3 = Single::getpSingle();
	cout << "num = " << p3->num << endl;
	//hex��ʾ���16����ֵ
	cout << hex << p1 << endl;
	cout << hex << p2 << endl;
	cout << hex << p3 << endl;
	return 0;
}