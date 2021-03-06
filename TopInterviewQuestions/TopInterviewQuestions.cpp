// TopInterviewQuestions.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<map>
#include<vector>
#include<iostream>
#include"Solution.h"
using namespace std;

vector<int> test() {
	vector<int>outcome;
	for (size_t i = 0; i < 5; i++)
	{
		outcome.push_back(i);
	}
	return outcome;
}
int main()
{
	vector<int> testa;
	testa = test();
	for ( int i = 0;  i < 5;  i++)
	{
		cout << testa[i] << endl;
	}
	vector<int>test01 = {1,1,2};
	RemoveDuplicates removeDuplicates;
	int outcome01 =removeDuplicates.removeDuplicates01(test01);
	int outcome02 =removeDuplicates.removeDuplicates02(test01);
	cout << "(1)remove duplicates from sorted array:" << outcome01 << endl;
	cout << "(1)remove duplicates from sorted array:" << outcome02 <<endl;
	RemoveDuplicatesII solution03;
	int outcome03 = solution03.solution(test01);
	cout << "(3)remove duplicates from sorted array:" << outcome03 << endl;

	ValidPalindrome validPalindrome;
	string s1 = "A man, a plan, a canal: Panama";
	string s2 = "race a car";

	cout << s1 << ":" << validPalindrome.isPalindrome(s1) << endl;
	cout << s2 << ":" << validPalindrome.isPalindrome(s2) << endl;
	
	//链表操作:相加
	vector<int> num1 = {2,4,3};
	vector<int> num2 = {5,6,4};
	ListNode l1(0);
	ListNode l2(0);
	ListNode *p1 = &l1;
	ListNode *p2 = &l2;
	for (auto item:num1)
	{
		p1->next = new ListNode(item);
		p1 = p1 -> next;
	}
	for (auto item:num2)
	{
		p2->next = new ListNode(item);
		p2 = p2->next;
	}
	AddTwoNumbers addTwoNumbers;
	ListNode *p=addTwoNumbers.solution(l1.next,l2.next);
	while (p)
	{
		cout << p->val << endl;
		p = p->next;
	}
	/************************************************/
	cout << "reverse linkedlist outcome:" << endl;
	ReverseLinkedList reverLinkedList;
	ListNode *p_linkedlist01= reverLinkedList.solution01(l1.next);
	ListNode *p_linkedlist02 = reverLinkedList.solution01(l2.next);
	while (p_linkedlist01)
	{
		cout << p_linkedlist01->val << endl;
		p_linkedlist01 = p_linkedlist01->next;
	}
	cout << "reverse linkedlist outcome:" << endl;
	while (p_linkedlist02)
	{
		cout << p_linkedlist02->val << endl;
		p_linkedlist02 = p_linkedlist02->next;
	}
	/***************Hash Table*************************/
	
	vector<int>A = {1,2};
	vector<int>B = { -2, -1 };
	vector<int>C = { -1, 2 };
	vector<int>D = { 0, 2 };
	FourSum fourSum;
	int count01=fourSum.fourSumCount(A,B,C,D);
	cout << "count:" << count01 << endl;


/******************线段包含关系****************************/
	vector<SegInfo> seg1;
	vector<SegInfo> seg2;
	SegInfo a1;
	a1.start = 0;
	a1.end = 1;
	seg1.push_back(a1);

	SegInfo a2;
	a2.start = 2;
	a2.end = 3;
	seg1.push_back(a2);

	SegInfo a3;
	a3.start = 4;
	a3.end = 5;
	seg1.push_back(a3);
	merge_arr(seg1, seg2);
	for (int i = 0; i < seg1.size(); i++) {
		cout << "start:" << seg1[i].start << ",end:" << seg1[i].end << endl;
	}
	cout<<"The longest arr:"<<endl;
	for (auto seg:seg2) {
		cout << "start:" <<seg.start<<",end:"<<seg.end<< endl;
	}
	vector<SegInfo> seg3;
	SegInfo b1;
	b1.start = 0;
	b1.end = 1;
	seg3.push_back(b1);
	cout << "Is contain or not?" << endl;
	cout << is_contain(seg2, seg3) << endl;

/****************** 二叉树的遍历 ***********************/
	TreeNode *root;
	
	/**
		 1
	   /  \
      2    3
     /    /
    4    5
	**/
	//如何建立一个二叉树？
	//createTree(root);
	root = new TreeNode(1);
	TreeNode *left1 = new TreeNode(2);
	TreeNode *right1 = new TreeNode(3);

	TreeNode *left2 = new TreeNode(4);
	TreeNode *right2 = new TreeNode(5);

	left1->left = left2;
	right1->left = right2;



	root->left = left1;
	root->right = right1;
	cout << "preorder" << endl;
	preOrder(root);
	cout << "preorderF" << endl;
	preOrderF(root);

	cout << "inorder" << endl;
	inOrder(root);
	cout << "inorderF" << endl;
	inOrderF(root);

	cout << "postorder" << endl;
	postOrder(root);
	cout << "postorderF" << endl;
	postOrderF(root);
















	return 0;

}

