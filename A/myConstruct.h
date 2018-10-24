#pragma once

template<class T1, class T2>
inline void construct(T1 *p, const T2 &value){
	new (p)T1(value);      //��placement new����ָ�����ϴ���һ������value�ǳ�ʼ�������ֵ
}

template<class T>
inline void destroy(T* pointer){//ֻ����һ���װ����ָ����ָ�Ķ�������--ͨ��ֱ�ӵ��������������
	pointer->~T();
}

template<class ForwardIterator>
inline void destroy(ForwardIterator first, ForwardIterator last){//destroy�ķ����� ��������������Ϊ����
	for (; first < last; ++first){
		destroy(&*first);//�� ���һ��  &*
	}
}

inline void destroy(char*, char*){};//��� char* ���ػ���
inline void destroy(wchar_t*, wchar_t*){};//��� wchar_t* ���ػ���